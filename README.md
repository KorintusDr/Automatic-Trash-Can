# 🚮 Smart Trash Bin (Automatic Trash Can)

**Smart Trash Bin** adalah proyek berbasis **Arduino UNO** yang memanfaatkan **HC-SR04 Ultrasonic Sensor** dan **Servo Motor** untuk mengendalikan tutup tempat sampah secara otomatis.  
Saat tangan atau objek terdeteksi pada jarak ≤ 6 cm, tutup akan terbuka, kemudian menutup kembali setelah 3 detik.  

Proyek ini dirancang untuk menghadirkan solusi **higienis** dan **tanpa sentuhan (touchless)** dalam membuang sampah.

---

## ✨ Features
- Deteksi objek menggunakan sensor ultrasonik.  
- Mekanisme buka/tutup otomatis dengan servo motor.  
- Tampilan jarak real-time melalui **Serial Monitor**.  
- Desain sederhana, mudah dipasang, dan mudah direplikasi.  

---

## 🛠️ Components
- **Arduino UNO** (atau board kompatibel)  
- **HC-SR04 Ultrasonic Sensor**  
- **Servo Motor (SG90/MG90S)**  
- Breadboard & jumper wires  
- Tempat sampah mini untuk prototipe  

---

## ⚡ Pin Configuration
| Komponen     | Pin Arduino |
|--------------|-------------|
| HC-SR04 VCC  | 5V          |
| HC-SR04 GND  | GND         |
| HC-SR04 TRIG | 9           |
| HC-SR04 ECHO | 10          |
| Servo VCC    | 5V          |
| Servo GND    | GND         |
| Servo Signal | 6           |

---

## 🚀 Getting Started

### 1️⃣ Hardware Setup
Rangkai semua komponen sesuai tabel pin di atas.  
Pastikan servo mendapat suplai daya yang stabil dari Arduino.

### 2️⃣ Software Setup
1. Install [Arduino IDE](https://www.arduino.cc/en/software).  
2. Hubungkan Arduino UNO ke PC/laptop.  
3. Upload kode program (`.ino` file) ke board.  
4. Buka **Serial Monitor** dengan baud rate `9600`.  

### 3️⃣ Usage
- Arahkan tangan ke depan sensor (≤ 6 cm).  
- Tutup tempat sampah akan terbuka otomatis.  
- Setelah 3 detik, tutup menutup kembali.  

---

## 📷 Demo
Tambahkan foto atau video prototipe di sini:  
```markdown
![Demo](images/demo.gif)
