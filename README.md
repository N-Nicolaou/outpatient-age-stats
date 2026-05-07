# Outpatient Age Statistics 📊

**Module:** Programming Methodology 1 — University of Westminster  
**Language:** C++

A command-line C++ program that takes hospital outpatient ages as input and produces statistical analysis and ASCII visualisations. Built across three progressively complex tasks.

---

## Tasks

### Task 1 — Horizontal Bar Chart
Reads ages until `-1` is entered, groups them into age bands, and displays a horizontal bar chart using `!` characters.

```
0-19   !!!
20-39  !!!!!
40-69  !!
70-89  !!!!
90-109 !
```

### Task 2 — Extended Statistics
Builds on Task 1 by adding:
- Oldest and youngest patient ages
- Total number of outpatients
- Total number of patients under 40

```
Oldest age of patients' is: 87
Youngest age of patients' is: 4
Total number of outpatients: 12
Total number below the age of 40: 5
```

### Task 3 — Vertical Bar Chart
Renders the same age-group data as a **vertical** bar chart in the terminal — each column grows upward based on the count in that age group.

```
 0-19   20-39   40-69   70-89  90-109
   !
   !       !
   !       !               !
   !       !       !       !
```

---

## Age Groups

| Group | Range |
|-------|-------|
| 0-19 | Children & young adults |
| 20-39 | Young adults |
| 40-69 | Middle aged |
| 70-89 | Elderly |
| 90-109 | Very elderly |

---

## Concepts Demonstrated

- `while` loops with sentinel value termination
- Conditional branching (`if/else if`)
- Multiple counter variables
- Nested loops for ASCII visualisation
- Finding min/max values without arrays

---

## Usage

```bash
g++ outpatient_stats.cpp -o outpatient_stats
./outpatient_stats
```

Enter ages one at a time, type `-1` to stop and see results.

---

## Built With
- C++
- Standard I/O (`iostream`)

