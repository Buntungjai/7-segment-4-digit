# 7-segment-4-digit

**วิดีโอสาธิตการทำงาน:** [YouTube Shorts](https://youtube.com/shorts/-YFWbYB0UfI)

การใช้งาน 4-Digit 7-Segment Display จำเป็นต้องต่อพินให้ตรงตาม Datasheet เพื่อให้สามารถควบคุมตำแหน่งหลัก (Digit) และส่วนของตัวเลข (Segment) ได้ถูกต้อง

<p align="center">
  <img src="https://raw.githubusercontent.com/Buntungjai/7-segment-4-digit/main/4digit.jpg" alt="4-Digit 7-Segment Display" width="400">
</p>

### 🔍 วิธีการทดสอบเบื้องต้น (Manual Test)

**กรณี Common Cathode:**
- ต่อพิน **12, 9, 8, และ 6** เข้ากับ **GND** (เลือกหลักที่จะแสดงผล)
- จ่ายไฟ **5V** (ผ่าน Resistor) ให้พิน **11, 7, 4, 2, 1, 10, 5, 3** เพื่อเช็ค Segment a-g และ DP

**กรณี Common Anode:**
- ต่อพินหลักเข้ากับ **5V**
- ต่อพิน Segment เข้ากับ **GND**

> [!CAUTION]
> **สำคัญมาก:** ต้องต่อตัวต้านทาน (Resistor) ขนาด **220 ohm** ทุกครั้งเพื่อจำกัดกระแส ไม่เช่นนั้นอุปกรณ์จะเสียหายทันที!

### 📋 Datasheet & Pinout
<p align="center">
  <img src="https://raw.githubusercontent.com/Buntungjai/7-segment-4-digit/main/datasheet4digit.jpg" alt="4-Digit 7-Segment Datasheet" width="800">
</p>

### 🔌 การต่อวงจรกับ Arduino
ในโปรเจกต์นี้ผมเลือกต่อแบบเรียงพิน Arduino ให้ตรงกับพินของหน้าจอ (พิน 1-12) เพื่อให้ง่ายต่อการเขียนโปรแกรมควบคุม (ยกเว้นพิน 3)

<p align="center">
  <img src="https://raw.githubusercontent.com/Buntungjai/7-segment-4-digit/main/circuit4digit.png" alt="7-Segment Arduino Circuit" width="800">
</p>
