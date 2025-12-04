# 7-segment-4-digit
https://youtube.com/shorts/-YFWbYB0UfI 

<br>
วิธีใช้ให้เราต่อ pin ตรงตาม datasheet ของ 7segment 
<p align="center">
  <img src="4digit.jpg" alt="4-Digit 7-Segment Display" width="400">
</p>

datasheet4digit 

กรณีอยาก เทสเล่น ๆ สำหรับ cathode  <br>
ต่อ 12 , 9 , 8  และ 6 เข้า gnd 
แล้วจ่ายไฟ 5v ให้พินไหนก็ได้ใน 11,7,4,2,1,10,5,3

<br>
ถ้าเป็น anode ต้องต่อเข้า 5v 
แล้วขาอีกด้านต่อ gnd
<br>
อย่าลืมต่อ R 220 ohm นะ ไม่งั้น เสียทันที !!!
<br>
<p align="center">
  <img src="datasheet4digit.jpg" alt="4-Digit 7-Segment Display" width="800">
</p>

<br>
จริงๆผมต่อแบบเรียง พิน arduino ตรงกับ พินของหน้าจอเลย 
ตั้งแต่ 1 - 12 ยกเว้น พิน 3

<p align="center">
  <img src="circuit4digit.png" alt="4-Digit 7-Segment Display" width="800">
</p>
