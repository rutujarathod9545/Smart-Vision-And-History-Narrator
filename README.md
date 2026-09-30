# Smart-Vision-And-History-Narrator
Smart Vision and History Narrator is a C++ project that identifies historical monuments using image filenames and provides historical information with audio narration. It uses Windows PowerShell and System.Speech.Synthesis. Future scope includes AI-based image recognition and multilingual support.

# 🏛️ Smart Vision and History Narrator 🎙️

**Smart Vision and History Narrator** is our **First Group Mini Project**, developed using **C++**. The application identifies predefined historical monuments based on the image filename entered by the user and provides useful historical information along with **audio narration**.

The project combines C++ programming with Windows system integration and text-to-speech functionality to create an interactive historical information application.

---

## 📌 Project Overview

Many historical monuments have interesting stories, but users may not always have quick access to their historical information.

Our project provides a simple solution where the user enters the filename of a monument image, such as:

```text
taj.jpg
```

The application identifies the corresponding monument from a predefined list and displays information such as:

* 📍 Location
* 👷 Builder / Founder
* 📜 Historical significance
* 🕐 Visiting hours
* 🎙️ Audio narration of the information

The information is also converted into speech using **Windows PowerShell Speech Synthesis**.

---

## ✨ Features

### 🏛️ Monument Identification

The application identifies predefined monuments using their image filenames.

Currently supported monuments include:

* Taj Mahal – Agra
* Qutub Minar – Delhi
* Panhala Fort – Maharashtra
* Mahalaxmi Temple – Kolhapur
* Gateway of India – Mumbai
* Jyotiba Temple – Kolhapur

### 📖 Historical Information

For each supported monument, the application displays relevant information including:

* Monument name
* Location
* Builder / founder
* Historical importance
* Visiting information

### 🎙️ Audio Narration

The application uses:

```text
Windows PowerShell
System.Speech.Synthesis
```

to convert the historical information into speech.

This allows users to **listen to the history instead of only reading it**.

### 💻 Simple C++ Application

The project is implemented using C++ and uses basic programming concepts such as:

* Variables
* Strings
* Conditional statements
* Functions
* File/name handling
* Input and output
* Windows system integration

---

## 🛠️ Technologies Used

| Technology              | Purpose                    |
| ----------------------- | -------------------------- |
| C++                     | Main programming language  |
| Windows.h               | Windows system integration |
| PowerShell              | Text-to-speech execution   |
| System.Speech.Synthesis | Audio narration            |
| GCC / MinGW             | Compilation                |
| VS Code / Dev-C++       | Development environment    |

---

## 🔄 Working Flow

```text
        START
          ↓
 Enter Monument Image Filename
          ↓
     Read Filename
          ↓
 Compare With Predefined Names
          ↓
   Identify Monument
          ↓
 Display Historical Information
          ↓
 Convert Text Into Speech
          ↓
   Audio Narration
          ↓
         END
```

---

## 🧠 Working Principle

The current version uses **filename-based identification**.

For example, if the user enters:

```text
taj.jpg
```

the program checks the filename and identifies it as the **Taj Mahal**.

After identification, the application displays the predefined historical information and sends the text to Windows PowerShell for audio narration.

This approach is used as a simple prototype for the first version of the project.

---

## 🖥️ Example

### Input

```text
Enter image filename: taj.jpg
```

### Output

```text
Monument: Taj Mahal
Location: Agra, Uttar Pradesh
Builder: Shah Jahan

Historical Significance:
The Taj Mahal is a famous monument built during the Mughal period...

Visiting Hours:
Usually open during daytime hours.
```

The same information is then converted into **audio narration** using Windows Speech Synthesis.

---

## 📂 Project Structure

A simple project structure can be:

```text
Smart-Vision-and-History-Narrator/
│
├── main.cpp
├── README.md
├── images/
│   ├── taj.jpg
│   ├── qutub.jpg
│   ├── panhala.jpg
│   ├── mahalaxmi.jpg
│   ├── gateway.jpg
│   └── jyotiba.jpg
│
└── screenshots/
    ├── input.png
    └── output.png
```

> Keep the folder structure consistent with the actual files you upload to GitHub.

---

## ⚙️ How to Run

### 1. Clone the Repository

```bash
git clone YOUR_GITHUB_REPOSITORY_LINK
```

### 2. Open the Project

Open the project folder in:

* VS Code
* Dev-C++
* Code::Blocks
* Any C++ IDE supporting Windows compilation

### 3. Compile the Program

Using MinGW/G++:

```bash
g++ main.cpp -o SmartVision
```

### 4. Run

```bash
SmartVision
```

### 5. Enter Image Filename

For example:

```text
taj.jpg
```

The program will display the monument information and provide audio narration.

---

## 🪟 System Requirements

* Windows 10 or Windows 11
* C++ compiler
* MinGW/GCC or compatible compiler
* PowerShell
* Windows Speech functionality

The current audio narration feature is designed specifically for **Windows**.

---

## 👥 Team Project

This project was developed as a **group mini project**.

The project helped us understand:

* C++ programming
* Problem solving
* Conditional logic
* System-level integration
* Text-to-speech technology
* Team collaboration
* Project planning and implementation

---

## 🎯 Project Objectives

The main objectives of the project are:

1. To develop an interactive historical information application.
2. To identify predefined monuments using user-provided filenames.
3. To provide useful historical information about monuments.
4. To make the information accessible through audio narration.
5. To understand integration between C++ and Windows system services.
6. To develop teamwork and real-world project development skills.

---

## 🔮 Future Scope

The current project is a prototype and can be enhanced in several ways.

### 🤖 1. Real-Time Image Recognition

Instead of depending on filenames, the application can use **AI/ML and Computer Vision** to identify monuments directly from uploaded images.

### 🌍 2. More Historical Locations

More monuments can be added from:

* India
* Asia
* Europe
* Other parts of the world

### 🗣️ 3. Multilingual Narration

Audio narration can be extended to languages such as:

* English
* Marathi
* Hindi
* Other regional languages

### 📱 4. Mobile/Web Application

The project can be converted into a web or mobile application so that users can access it from smartphones.

### ☁️ 5. Online Historical Database

A database or API can be integrated to retrieve updated information about historical locations.

### 🎨 6. Graphical User Interface

The current C++ application can be enhanced with a GUI for:

* Image upload
* Monument display
* Historical information
* Audio controls

---

## ⚠️ Current Limitation

The current version does **not perform actual image recognition**.

The monument is identified using the **filename entered by the user**.

For example:

```text
taj.jpg → Taj Mahal
```

Actual AI/ML-based image recognition is planned as a future enhancement.

---

## 📚 Learning Outcomes

Through this project, we learned:

* C++ programming fundamentals
* Conditional statements and functions
* String handling
* Windows system commands
* Text-to-speech integration
* Project organization
* Team collaboration
* Basic software development workflow

---

## 🚀 Future Development

We plan to gradually transform the current prototype into a more intelligent application by integrating:

```text
Image Upload
      ↓
AI / Computer Vision
      ↓
Monument Recognition
      ↓
Historical Information
      ↓
Multilingual Support
      ↓
Audio Narration
```

---

## 📸 Screenshots

Add screenshots of the actual running application here.

### Input Screen

```text
![Input Screen](screenshots/input.png)
```

### Output Screen

```text
![Output Screen](screenshots/output.png)
```

---

## 🏆 Conclusion

**Smart Vision and History Narrator** is a C++ based mini project that combines historical information with audio narration.

The project provides a simple way to explore information about selected historical monuments while demonstrating practical C++ programming and Windows system integration.

The current implementation provides a foundation for future development using **AI/ML-based monument recognition, multilingual narration, databases, and graphical interfaces**.

---

## 📄 License

This project was developed for **academic/educational purposes** as a group mini project.

---

⭐ If you find this project useful, consider giving the repository a star!

