# City vs City Weather
## Video Demo:  <[URL HERE](https://www.youtube.com/watch?v=uzXwkXAeBHg)>
### Description: Hi team, my web based app is a weather comparison web app where you can specify date ranges and city to compare certain metrics. They are Average weather (Celsius), Avergage rainfall per day (mm) and instances of days where the temperature met or exceeded 20,25,30,35,40 degrees. It was inspired by tongue in cheek conversations at work between my colleagues in Melbourne and our counterparts in Sydney. This idea has stemmed from tongue-in cheek conversations at work between my fellow colleagues in Melbourne and our counterparts in Sydney. Our weather in MElbourne is constantly critiqued due to our cold (for Australia) winters, but everyone in Melbourne knows the Sydneysiders love to turn a blind eye to how nice (and dry!) our summers are. As you can see in my example video we constantly have summers with more "hot" days.

### Project Structure: app.py is the main flask application and handles all routing code. It routes "/" for homepage, "/compare" for form submissions and "/about" for the about section of the page.  As you can see it uses helper functions from helpers.py to retrieve data from. It is configured to handle both GET and POST requests for different functions, and finally passed processed weather data to results.html for display!

### Helpers.py contains functions to fetch and prepare weather data get_lat lon returns the latitude and longtitude of a submitted city. get_history gets the daily history of that city and compute_metrics puts it into the desired format that i wanted represented in the results.html table. get_lat_lon currently is set up to only grab the best (first) match. Something i would like to fix in further iterations to grant further flexibility with respect to cities of the same name e.g Melbourne, VIC, Australia vs Melbourne, FL, USA

### Index.html is the main user-facing form or "homepage". This is where the users choose the cities and date range. I added the loading... post-submission message as i found it looked a bit too static post submission and gave risk of the user thinking a submission was not made.

### results.html Display the results in a clear and readable format. This page also has a shortcut back for "New comparison"

### about.html accessed via the front page, explains project purpose and what data sources were used.

### scripts.js Controls dynamic spinners like the loading message on index.html and the form reset which i used to try and workaround the issue where i was getting a 400 error upon resubmission and the navigation back to home page upon submission of the "new comparison button"

### Challenges: City lookup failures: added clear messaging in the input box and as mentioned above want to add location flexbility in future versions. POST/GET form issues : resubmissions using the browser back button would trigger 400 errors. I was able to eventually get the right mix to sovle for this. http-server vs flask : I initially tried running the project using http-server instead of Flask however that broke routes relying on python logic so going forward i learned to only use Flask for this project

### with respect to AI assistance, I used GPT for recommendation of an appropriate API, and generating ideas for names, emojis and styling enhancements in index.html.

### What has been used: 


#### Final Thoughts: I am really proud of how this came together using some of the favourite learnings gathered throughout the course. They include data handlig, API integration, a good and clean user expedrience, and above all error management. I believe the app i have built serves a clear purpose, is responsive, looks good and is an awesome base to build on for future versions down the line. If you're curious about how your city stacks up, please give it a try!


