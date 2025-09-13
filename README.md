# 🚮 Tempat Sampah Otomatis dengan Sensor Ultrasonik dan Servo

Proyek ini membuat **tempat sampah otomatis** menggunakan **Arduino UNO**, **HC-SR04 Ultrasonic Sensor**, dan **Servo Motor**.  
Ketika objek (misalnya tangan) terdeteksi pada jarak ≤ 6 cm, servo akan membuka tutup tempat sampah, lalu menutup kembali setelah 3 detik.

---

## 📌 Fitur
- Deteksi objek menggunakan sensor ultrasonik.  
- Tutup otomatis terbuka dan menutup kembali.  
- Menampilkan jarak real-time melalui Serial Monitor.  

---

## 🛠️ Hardware
- Arduino UNO  
- Sensor Ultrasonik HC-SR04  
- Servo Motor (SG90/MG90S)  
- Kabel jumper & breadboard  
- Tempat sampah mini (untuk prototipe)  

---

## 🔌 Pin Konfigurasi
- **HC-SR04**  
  - VCC → 5V  
  - GND → GND  
  - TRIG → Pin 9  
  - ECHO → Pin 10  

- **Servo**  
  - VCC → 5V  
  - GND → GND  
  - Signal → Pin 6  

---

## ⚙️ Cara Penggunaan
1. Rangkai semua komponen sesuai pin konfigurasi.  
2. Upload kode program yang sudah tersedia ke Arduino UNO melalui Arduino IDE.  
3. Buka **Serial Monitor** dengan baud rate 9600.  
4. Arahkan tangan ke depan sensor (≤ 6 cm) → tutup akan terbuka otomatis.  
5. Setelah 3 detik → tutup menutup kembali.  

---

## 📖 Lisensi
Proyek ini bersifat open-source untuk tujuan edukasi dan pengembangan.
