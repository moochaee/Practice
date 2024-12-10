SELECT DISTINCT name
FROM people
JOIN directors ON people.id = directors.person_id
JOIN ratings ON ratings.id = directors.movie_id
WHERE ratings.rating >= 9.0
;
