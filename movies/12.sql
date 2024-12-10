SELECT title
FROM movies
JOIN stars on movies.id = stars.movie_id
JOIN people on stars.person_id = people.id
WHERE people.name IN ('Bradley Cooper', 'Jennifer Lawrence')
GROUP BY title
HAVING COUNT(DISTINCT people.name) = 2
;
