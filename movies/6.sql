SELECT AVG(rating)
FROM ratings
JOIN movies ON movie.id = ratings.movie_id
WHERE year = 2012
;
