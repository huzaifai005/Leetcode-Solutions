-- Write your PostgreSQL query statement below
SELECT e.name AS Employee FROM Employee e JOIN Employee m ON m.id = e.managerID WHERE e.salary > m.salary;