-- Write your PostgreSQL query statement below
SELECT name, bonus FROM Employee LEFT JOIN Bonus USING(empID) WHERE bonus IS NULL OR bonus < 1000;