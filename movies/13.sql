SELECT co_star.name
FROM people
JOIN stars AS star1 ON movies.id = star1.movie_id
JOIN people AS kevin ON star1.person_id = kevin.id
JOIN stars AS star2 ON movies.id = star2.movie_id
JOIN people AS co_star ON star2.person_id = co_star.id
JOIN movies ON movies.id = star1.movie_id
WHERE kevin.name = 'Kevin Bacon'
AND co_star.name != 'Kevin Bacon'
;
