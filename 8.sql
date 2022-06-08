SELECT name
FROM people
JOIN movies ON stars.person_id = people.id
JOIN stars ON movies.id = stars.movie_id
WHERE movies.title = 'Toy Story';