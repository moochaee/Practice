SELECT name
FROM people
JOIN people on people.id = stars.people_id
JOIN movies on movies.id = stars.movies.id
