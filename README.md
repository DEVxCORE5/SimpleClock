# Simple Clock (C++)

A simple console-based Digital Clock written in C++. This project uses basic and modern C++ features to display the current system time and update it every second.

This program demonstrates:

- `chrono` for fetching the current system time  
- `thread` for adding a 1-second delay  
- `put_time()` for formatting time output  
- `system("cls") / system("clear")` for clearing the console (platform-dependent)  
- `while(true)` loop for continuous updates  
- `localtime()` for converting system time into human-readable format  

---

## Features

- Displays real-time clock in **HH:MM:SS** format  
- Updates every second  
- Clears console before every update  
- Uses modern C++ time utilities  
- Cross-platform support  
- Very lightweight and simple to extend  

---

## Libraries Used

- **\<iostream\>** — for printing output  
- **\<chrono\>** — for current time handling and seconds delay  
- **\<thread\>** — for `sleep_for()` (1-second pause)  
- **\<iomanip\>** — for formatted time output using `put_time()`  

---

## Future Upgrades

- Add **12-hour (AM/PM)** format  
- Display **date + time**  
- Add **alarm system**  
- Add **world clock** with time zones  
- Convert into a **GUI digital clock** (Qt / SFML)  

---

