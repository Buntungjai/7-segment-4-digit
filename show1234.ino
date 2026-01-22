// digit cathode pins
int D1 = 12;
int D2 = 9;
int D3 = 8;
int D4 = 6;

// segment pins กำหนดพินของ arduino ตรงกับ 7 segment
int seg_a = 11;
int seg_b = 7;
int seg_c = 4;
int seg_d = 2;
int seg_e = 1;
int seg_f = 10;
int seg_g = 5;

void setup() {
  int digits[] = {D1, D2, D3, D4};
  int segments[] = {seg_a, seg_b, seg_c, seg_d, seg_e, seg_f, seg_g};

  // ตั้งค่าทุก digit และ segment เป็น OUTPUT
  for(int i=0;i<4;i++) pinMode(digits[i], OUTPUT);
  for(int i=0;i<7;i++) pinMode(segments[i], OUTPUT);

  // ปิดทุก digit
  for(int i=0;i<4;i++) digitalWrite(digits[i], HIGH);
}

void loop() {
  // array mapping 0-9
  int nums[10][7] = {
    {1,1,1,1,1,1,0}, //0
    {0,1,1,0,0,0,0}, //1
    {1,1,0,1,1,0,1}, //2
    {1,1,1,1,0,0,1}, //3
    {0,1,1,0,0,1,1}, //4
    {1,0,1,1,0,1,1}, //5
    {1,0,1,1,1,1,1}, //6
    {1,1,1,0,0,0,0}, //7
    {1,1,1,1,1,1,1}, //8
    {1,1,1,1,0,1,1}  //9
  };

  int digits_val[4] = {1,2,3,4}; // ตัวเลขที่จะโชว์

  int digits_pins[4] = {D1,D2,D3,D4};
  int segments_pins[7] = {seg_a, seg_b, seg_c, seg_d, seg_e, seg_f, seg_g};

  // multiplexing
  for(int d=0; d<4; d++){
    // set segment ตามตัวเลข
    for(int s=0; s<7; s++){
      digitalWrite(segments_pins[s], nums[digits_val[d]][s] ? HIGH : LOW);
    }

    // เปิด digit
    digitalWrite(digits_pins[d], LOW);
    delay(2);
    digitalWrite(digits_pins[d], HIGH);
  }
}
