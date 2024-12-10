SELECT co_star.name
FROM people
JOIN stars AS star1 ON movies.id = star1.movie_id
JOIN people AS kevin ON star1.person_id = kevin.id
JOIN stars AS star2 ON movies.id = star2.movie_id
JOIN people AS co_star ON star2.person_id = co_star.id
WHERE kevin.name = 'Kevin Bacon'
AND kevin.birth = '1958'
AND co_star.name != 'Kevin Bacon'
;
