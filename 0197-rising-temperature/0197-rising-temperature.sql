# Write your MySQL query statement below
-- SELECT id FROM (SELECT id, temperature, LAG(temperature) OVER (ORDER BY recordDate) AS prev_temp FROM Weather) w WHERE temperature > prev_temp;
SELECT w1.id FROM Weather w1 JOIN Weather w2 ON DATEDIFF(w1.recordDate, w2.recordDate) = 1 WHERE w1.temperature > w2.temperature;
