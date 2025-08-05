import os
from flask import Flask, render_template, request, redirect, url_for
from datetime import date, timedelta
from helpers import get_history, compute_metrics

# Configure application
app = Flask(__name__)


@app.route("/", methods=["GET"])
def index():
    """Render the landing page with date limits."""
    # yesterday in YYYY-MM-DD
    yesterday = date.today() - timedelta(days=1)
    max_date   = yesterday.isoformat()
    return render_template("index.html", max_date=max_date)




@app.route("/compare", methods=["GET", "POST"])
def compare():
    """Fetch weather data on POST; redirect to form on GET."""
    if request.method == "GET":
        # Someone navigated here directly—send them back to the form
        return redirect(url_for("index"))

    # --- otherwise, it’s a POST with your form data ---
    city1    = request.form.get("city1")
    city2    = request.form.get("city2")
    start_dt = request.form.get("startDate")
    end_dt   = request.form.get("endDate")

    # Validate all fields present
    if not all([city1, city2, start_dt, end_dt]):
        return redirect(url_for("index"))

    # Fetch & compute
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
