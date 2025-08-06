# City vs City Weather
## Video Demo:  <[URL HERE](https://www.youtube.com/watch?v=uzXwkXAeBHg)>
### Description: Hi team, my web based app is a weather comparison web app where you can specify date ranges and city to compare certain metrics. They are Average weather (Celsius), Avergage rainfall per day (mm) and instances of days where the temperature met or exceeded 20,25,30,35,40 degrees. It was inspired by tongue in cheek conversations at work between my colleagues in Melbourne and our counterparts in Sydney.

### Project Structure: app.py is the main flask application and handles all routing code. It routes "/" for homepage, "/compare" for form submissions and "/about" for the about section of the page.  As you can see it uses helper functions from helpers.py to retrieve data from.

### Helpers.py contains functions to fetch and prepare weather data get_lat lon returns the latitude and longtitude of a submitted city. get_history gets the daily history of that city and compute_metrics puts it into the desired format that i wanted represented in the results.html table.

### Index.html is the main user-facing form or "homepage". This is where the users choose the cities and date range. I added the loading... post-submission message as i found it looked a bit too static post submission and gave risk of the user thinking a submission was not made.

### results.html Display the results in a clear and readable format. This page also has a shortcut back for "New comparison"

### about.html accessed via the front page, explains project purpose and what data sources were used.

### scripts.js Controls dynamic spinners like the loading message on index.html and the form reset which i used to try and workaround the issue where i was getting a 400 error upon resubmission and the navigation back to home page upon submission of the "new comparison button"

### with respect to AI assistance, I used GPT for recommendation of an appropriate API, and generating ideas for names, emojis and styling enhancements in index.html.


#### I am really proud of how this came together using some of the favourite learnings gathered throughout the course. If you're curious about how your city stacks up, please give it a try!


