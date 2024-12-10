sqlite> SELECT name
   ...> FROM people
   ...> JOIN stars ON id = stars.person_id
   ...> JOIN movies.id = stars.movie_id
   ...> WHERE movies.name = 'Toy Story'
   ...> ;
