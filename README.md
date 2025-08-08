Simple Login, Password Creation & Modification in C++
This is a beginner-friendly project built in C++.
For now, it runs entirely in the terminal, but the goal is to later integrate it with a Qt/QML graphical interface.

The application allows:

Creating a new password

Logging in with existing credentials

Modifying an existing password

This code will serve as a reusable foundation for future projects, such as full banking applications or other management systems.

🚀 Features
Login – Enter username and password to access the system

Password creation – Create a secure password for new users

Password modification – Change an existing password after verification

In-memory storage – All credentials are kept only while the program is running

🛠️ Technologies Used
C++ – Core logic

STL containers – For temporary credential storage

(Future) Qt & QML – For a graphical user interface

📦 Installation
```
# Clone the repository
git clone https://github.com/Beni1707/My-First-C-Bank-Application-.git

# Pull the latest changes (optional if clone is fresh)
git pull origin main
```
⚠️ Limitations
No persistent storage – Credentials disappear when the program closes

No encryption – Passwords are stored as plain text (for learning only)

Not production-ready – Educational purpose only

🎯 ## Purpose
This project is designed to:

Practice basic user authentication logic

Learn credential management in C++

Build a codebase that can be expanded into more complex applications later

📌 Next Steps
Add Qt/QML GUI for a modern, interactive interface

Implement password hashing for better security

Store credentials in a real database instead of memory

👤 Author
Béni Kiwa Malonga
