

import requests


def get_lat_lon(city):
    """Return (latitude, longitude) for a given city name."""
    # Query Open‑Meteo’s geocoding API
    url = f"https://geocoding-api.open-meteo.com/v1/search"
    params = {"name": city, "count": 1}
    response = requests.get(url, params=params)
    response.raise_for_status()

    data = response.json()
    results = data.get("results")
    if not results:
        raise ValueError(f"City not found: {city}")

    # Grab the first (best) match
    match = results[0]
    return match["latitude"], match["longitude"]


def get_history(city, start_date, end_date):
    """Fetch daily max/min temp and precipitation for city between two dates."""
    # Convert city to coordinates
    lat, lon = get_lat_lon(city)

    # Prepare archive API parameters
    url = "https://archive-api.open-meteo.com/v1/archive"
    params = {
        "latitude":      lat,
        "longitude":     lon,
        "start_date":    start_date,           # e.g. "2025-01-01"
        "end_date":      end_date,             # e.g. "2025-01-31"
        "daily":         ["temperature_2m_max", "temperature_2m_min", "precipitation_sum"],
        "timezone":      "auto"
    }

    # Fetch and return the daily data block
    response = requests.get(url, params=params)
    print(response.status_code)
    print(response.text)
    daily = response.json().get("daily", {})
    return daily





def compute_metrics(daily):
    """Return metrics: avg temp, counts of hot days, and avg rainfall."""
    # Extract raw lists
    temps_max = daily.get("temperature_2m_max", [])
    temps_min = daily.get("temperature_2m_min", [])
    rainfall  = daily.get("precipitation_sum", [])

    # Build list of valid daily mean temps (skip days with missing data)
    daily_means = []
    for max_t, min_t in zip(temps_max, temps_min):
        if max_t is None or min_t is None:
            # Skip this day entirely
            continue
        daily_means.append((max_t + min_t) / 2)

    # Calculate average temperature (°C)
    average_temperature = (
        sum(daily_means) / len(daily_means)
        if daily_means
        else 0
    )

    # Count days exceeding thresholds (based on valid max temps)
    thresholds   = [20, 25, 30, 35, 40]
    days_above   = {}
    valid_max_ts = [t for t in temps_max if t is not None]
    for threshold in thresholds:
        days_above[f"days_above_{threshold}"] = sum(
            1 for t in valid_max_ts if t >= threshold
        )

    # Filter out None rainfall and compute average rainfall (mm)
    valid_rain = [r for r in rainfall if r is not None]
    average_rainfall = (
        sum(valid_rain) / len(valid_rain)
        if valid_rain
        else 0
    )

    # Assemble and round
    metrics = {
        "average_temperature": round(average_temperature, 2),
        "average_rainfall":    round(average_rainfall, 2),
    }
    metrics.update(days_above)

    return metrics
