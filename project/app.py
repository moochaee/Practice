import os
from flask import Flask, render_template, request, redirect
from helpers import get_history, compute_metrics

# Configure application
app = Flask(__name__)


@app.route("/", methods=["GET"])
def index():
    """Render the landing page."""
    return render_template("index.html")




@app.route("/compare", methods=["GET", "POST"])
def compare():
    """Fetch weather data, compute metrics, or bounce back if inputs are missing."""
    # request.values covers both form (POST) and query string (GET)
    city1    = request.values.get("city1", "").strip()
    city2    = request.values.get("city2", "").strip()
    start_dt = request.values.get("startDate", "").strip()
    end_dt   = request.values.get("endDate", "").strip()

    # If any field is blank, send them back to the index page
    if not all([city1, city2, start_dt, end_dt]):
        return redirect("/")

    # Otherwise proceed as before
    daily1   = get_history(city1, start_dt, end_dt)
    daily2   = get_history(city2, start_dt, end_dt)
    metrics1 = compute_metrics(daily1)
    metrics2 = compute_metrics(daily2)

    return render_template(
        "results.html",
        city1=city1,
        city2=city2,
        start_date=start_dt,
        end_date=end_dt,
        metrics1=metrics1,
        metrics2=metrics2
    )



if __name__ == "__main__":
    # Run app in debug mode with defaults
    app.run(debug=True)
