# Write your MySQL query statement below
# select email as Email from Person group by email having count(*)> 1;
SELECT DISTINCT p1.email AS Email FROM Person p1 WHERE (SELECT COUNT(*) FROM Person p2 WHERE p2.email = p1.email) > 1;