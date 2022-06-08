SELECT movies.title
  FROM movies
JOIN stars ON people.id = stars.person_id
JOIN people ON movies.id = stars.movie_id
  WHERE people.name = "Johnny Depp"

INTERSECT

SELECT title FROM movies
JOIN stars ON people.id = stars.person_id
JOIN people ON movies.id = stars.movie_id
  WHERE name = "Helena Bonham Carter";