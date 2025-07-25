# Write your MySQL query statement below
select name as  Employee from Employee e where managerId is not null  and salary >(select salary from Employee m where e.managerId = m.id );