SELECT name
FROM people
JOIN stars on people.id = stars.people_id
JOIN movies on movies.id = stars.movies.id
WHERE people.name = 'Kevin Bacon'
GROUP BY people.name
