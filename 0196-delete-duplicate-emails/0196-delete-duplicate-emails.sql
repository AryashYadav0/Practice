# Write your MySQL query statement below
-- DELETE FROM Person WHERE id NOT IN ( SELECT MIN(id) FROM Person GROUP BY email);

DELETE p FROM Person p JOIN ( SELECT email, MIN(id) AS min_id FROM Person GROUP BY email ) AS keep ON p.email = keep.email AND p.id > keep.min_id;