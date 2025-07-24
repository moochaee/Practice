import os
from flask import Flask, render_template, request
from helpers import get_history, compute_metrics

# Configure application
app = Flask(__name__)


@app.route("/", methods=["GET"])
def index():
    """Render the landing page."""
    return render_template("index.html")




# app.py
@app.route("/compare", methods=["POST"])
def compare():
    city1    = request.form.get("city1")
    city2    = request.form.get("city2")
    start_dt = request.form.get("startDate")
    end_dt   = request.form.get("endDate")
    # note: request.form.get("nonce") is present but ignored

    if not all([city1, city2, start_dt, end_dt]):
        return redirect("/")

    daily1   = get_history(city1, start_dt, end_dt)
    daily2   = get_history(city2, start_dt, end_dt)
    metrics1 = compute_metrics(daily1)
    metrics2 = compute_metrics(daily2)

    return render_template("results.html",
        city1=city1, city2=city2,
        start_date=start_dt, end_date=end_dt,
        metrics1=metrics1, metrics2=metrics2
    )




if __name__ == "__main__":
    # Run app in debug mode with defaults
    app.run(debug=True)
