

void back_and_fourth(int del) {
  do {
    matrix.fillScreen(0);
    matrix.setCursor(1, 12);    // start at top left, with one pixel of spacing
    
    matrix.print(")");
    delay(del);
    matrix.setCursor(5, 12);
    matrix.print(")");
    delay(del);
    matrix.setCursor(10, 12);
    matrix.print("<");
    delay(del);
    matrix.print(">");
    delay(del);
    matrix.print("(");
    delay(del);
    matrix.setCursor(26, 12);
    matrix.print("(");
    delay(del);

    delay(3500);
    
  } while (false);
}


void majors(int del) {
  do {
    matrix.setTextColor(matrix.Color333(6,6,6));
    matrix.fillScreen(0);
    //delay(del);
    matrix.setCursor(4, 0);    // start at top left, with one pixel of spacing

    matrix.print("ECET");
    //delay(del);
    matrix.setCursor(13, 8);
    matrix.println("&");
    //delay(del);
    matrix.setCursor(4, 15);
    matrix.println("Comp");
    matrix.drawPixel(28, 21, matrix.Color333(6, 6, 6)); 
    //delay(del);
    matrix.setCursor(7, 24);
    matrix.println("Sci"); 
    matrix.drawPixel(24, 30, matrix.Color333(6, 6, 6)); 
    //delay(del);

    delay(5000);
    
  } while (false);
}

void google(int del){

  do {
//    matrix.fillScreen(0);
//    delay(del);
    
//    matrix.setTextColor(matrix.Color333(6,6,6)); 
//    matrix.setCursor(4, 0); 
//    matrix.print("Hire");
//    delay(del);
//    matrix.setCursor(4, 10); 
//    matrix.print(" me");
//    delay(del);
    
    matrix.setCursor(0, 21);
    matrix.setTextColor(matrix.Color333(0,1,5)); 
    matrix.print("G");
    delay(del);
    matrix.setCursor(6, 21);
    matrix.setTextColor(matrix.Color333(5,0,0)); 
    matrix.print("o");
    delay(del);
    matrix.setCursor(12, 21);
    matrix.setTextColor(matrix.Color333(5,5,0)); 
    matrix.print("o");
    delay(del);
    matrix.setCursor(18, 21);
    matrix.setTextColor(matrix.Color333(0,1,5)); 
    matrix.print("g");
    delay(del);
    matrix.fillRect(24, 21, 1,7, matrix.Color333(0, 5, 0));
    delay(del);
    matrix.setCursor(26, 21);
    matrix.setTextColor(matrix.Color333(5,0,0)); 
    matrix.print("e");
    delay(5000);
  } while(false);
  matrix.setTextColor(matrix.Color333(6,6,6)); 
}

//void circleZoom(int del) {
////  for (int i=0; i<25; i++) {
////    matrix.fillCircle(16, 16, i, matrix.Color333(3, 0, 7));
////    delay(del);
////  } 
//
//  int r=2,  g=0, b=0;
//  int r1=0, g1=3,b1=0;
//  int r2=0, g2=0, b2=3; 
//  
//  while (true) {  
//    matrix.fillCircle(16, 16, 22, matrix.Color333(r, g, b));
//    //delay(del); 
//    matrix.fillCircle(16, 16, 20, matrix.Color333(r1, g1, b1));
//    //delay(del);
//    matrix.fillCircle(16, 16, 15, matrix.Color333(r2, g2, b2));
//    //delay(del);
//    matrix.fillCircle(16, 16, 10, matrix.Color333(r, g, b));
//    //delay(del);
//    matrix.fillCircle(16, 16, 5, matrix.Color333(r1, g1, b1));
//    //delay(del);
//    matrix.fillCircle(16, 16, 2, matrix.Color333(r2, g2, b2));
//    //delay(del);
//    matrix.fillCircle(16, 16, 0, matrix.Color333(r, g, b));
//    delay(del);
//    if (r==2) {
//      r=0; g=3; b=0;
//    } else if (g==3) {
//      r=0; g=0; b=3;
//    } else {
//      r=2; g=0; b=0;
//    } 
//    if (r1==2) {
//      r1=0; g1=3; b1=0;
//    } else if (g1==3) {
//      r1=0; g1=0; b1=3;
//    } else {
//      r1=2; g1=0; b1=0;
//    } 
//    if (r2==2) {
//      r2=0; g2=3; b2=0;
//    } else if (g2==3) {
//      r2=0; g2=0; b2=3;
//    } else {
//      r2=2; g2=0; b2=0;
//    } 
//    
//  }
//   
//}


/*//
void colorwheel() {
  int      x, y, hue;
  float    dx, dy, d;
  uint8_t  sat, val;
  uint16_t c;
  
  for(y=0; y < matrix.width(); y++) {
    dy = 15.5 - (float)y;
    for(x=0; x < matrix.height(); x++) {
      dx = 15.5 - (float)x;
      d  = dx * dx + dy * dy;
      if(d <= (16.5 * 16.5)) { // Inside the circle(ish)?
        hue = (int)((atan2(-dy, dx) + PI) * 1536.0 / (PI * 2.0));
        d = sqrt(d);
        if(d > 15.5) {
          // Do a little pseudo anti-aliasing along perimeter
          sat = 255;
          val = (int)((1.0 - (d - 15.5)) * 255.0 + 0.5);
        } else
        {
          // White at center
          sat = (int)(d / 15.5 * 255.0 + 0.5);
          val = 255;
        }
        c = matrix.ColorHSV(hue, sat, val, true);
      } else {
        c = 0;
      }
      matrix.drawPixel(x, y, c);
    }
  }
}
//*/



// Generated by Processing script
// Original file: 8bdb.jpg
// Size: 32x32px
#include <avr/pgmspace.h>
static const uint8_t PROGMEM db[] = {
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0xFF,0x1C,0xFF,0xFF,0xFF,0x1C,0x1C,0x1C,0xFF,0xFF,0x1C,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x03,0x01,0x03,0x03,0x03,0x01,0x01,0x01,0x03,0x03,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0xFF,0xFF,0xFF,0xFF,0x1C,0xFF,0xFF,0xFF,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x03,0x03,0x03,0x03,0x01,0x03,0x03,0x03,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0xFF,0xE3,0xE3,0x00,0x00,0xE3,0x1C,0x1C,0xFF,0xFF,0xFF,0x1C,0xFF,0xFF,0x1C,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x03,0x02,0x02,0x00,0x00,0x02,0x01,0x01,0x03,0x03,0x03,0x01,0x03,0x03,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0xE3,0xFF,0xFF,0xFF,0x1C,0x1C,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x02,0x03,0x03,0x03,0x01,0x01,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0xFF,0x1C,0xFF,0x1C,0xFF,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x03,0x03,0x01,0x03,0x01,0x03,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x03,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x03,0x03,0x03,0x03,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xE3,0xFF,0x1C,0x1C,0x1C,0x00,0x00,0x00,0xFF,0xE3,0xFF,0x1C,0x1C,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x03,0x01,0x01,0x01,0x00,0x00,0x00,0x03,0x02,0x03,0x01,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xE3,0xFF,0xE3,0x1C,0xFF,0x00,0xE3,0xFF,0xFF,0x00,0xE3,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x03,0x02,0x01,0x03,0x00,0x02,0x03,0x03,0x00,0x02,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x03,0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xE3,0xFF,0xE3,0x00,0xFF,0x00,0xE3,0xFF,0xFF,0x00,0xE3,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x03,0x02,0x00,0x03,0x00,0x02,0x03,0x03,0x00,0x02,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xE3,0x00,0x1C,0xFF,0x1C,0xE3,0xE3,0xE3,0x1C,0xE3,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x00,0x01,0x03,0x01,0x02,0x02,0x02,0x01,0x02,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x03,0x03,0x03,0x00,0x00,0x00,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0x1C,0xE3,0xE3,0xFF,0x1C,0xFF,0xFF,0xFF,0x1C,0xE3,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x01,0x02,0x02,0x03,0x01,0x03,0x03,0x03,0x01,0x02,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0x1C,0x1C,0x1C,0x1C,0xFF,0xFF,0xFF,0x1C,0xE3,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x03,0x01,0x01,0x01,0x01,0x03,0x03,0x03,0x01,0x02,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xFF,0x1C,0x1C,0xE3,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x03,0x01,0x01,0x02,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0xFF,0xFF,0xE3,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x03,0x03,0x02,0x01,0x03,0x03,0x03,0x03,0x03,0x02,0x03,0x02,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x00,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0x00,0x1C,0x00,0xE3,0xE3,0xE3,0xFF,0xFF,0xE3,0xFF,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x03,0x00,0x01,0x00,0x02,0x02,0x02,0x03,0x03,0x02,0x03,0x03,0x02,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0xE3,0xFF,0xE3,0xFF,0xFF,0xFF,0xE3,0xE3,0xFF,0xFF,0xE3,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x03,0x03,0x03,0x03,0x03,0x02,0x03,0x02,0x03,0x02,0x03,0x03,0x03,0x02,0x02,0x03,0x03,0x02,0x02,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x03,0x03,0x00,0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x03,0x03,0x03,
};





// Generated by Processing script
// Original file: majors.png
// Size: 32x32px
#include <avr/pgmspace.h>
static const uint8_t PROGMEM major[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE3,0xE3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xE3,0x00,0x1C,0x1C,0x1C,0xE3,0xE3,0x1C,0x1C,0xE3,0xFF,0xFF,0xFF,0xE3,0x1C,0xFF,0xFF,0xE3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x01,0x01,0x01,0x02,0x02,0x01,0x01,0x02,0x03,0x03,0x03,0x02,0x01,0x03,0x03,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x00,0x00,0x03,0x03,0x00,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xE3,0x00,0x1C,0x00,0xE3,0x00,0x1C,0xE3,0x00,0xE3,0x1C,0xE3,0x00,0xE3,0x00,0xFF,0x00,0x00,0xE3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x01,0x00,0x02,0x00,0x01,0x02,0x00,0x02,0x01,0x02,0x00,0x02,0x00,0x03,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xE3,0x00,0x1C,0x1C,0xE3,0x00,0x1C,0xE3,0x00,0xE3,0x1C,0xFF,0x00,0xE3,0x00,0xFF,0x00,0x00,0xE3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x01,0x01,0x02,0x00,0x01,0x02,0x00,0x02,0x01,0x03,0x00,0x02,0x00,0x03,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE3,0xFF,0x00,0x00,0xE3,0xFF,0x00,0x00,0xE3,0x1C,0xE3,0x00,0xE3,0x00,0xFF,0xE3,0xE3,0x00,0x00,0xE3,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x03,0x00,0x00,0x02,0x03,0x00,0x00,0x02,0x01,0x02,0x00,0x02,0x00,0x03,0x02,0x02,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x00,0x00,0x1C,0x1C,0x00,0x1C,0x1C,0x1C,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x00,0x01,0x01,0x01,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x00,0x00,0x03,0x03,0x00,0x03,0x03,0x03,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE3,0xE3,0xE3,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE3,0x00,0x00,0x00,0x00,0x00,0xFF,0xE3,0x1C,0xE3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x03,0x02,0x01,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE3,0xE3,0x00,0x00,0xE3,0x1C,0x1C,0x00,0xE3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x00,0x00,0x02,0x01,0x01,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE3,0x00,0xFF,0x00,0x1C,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x03,0x00,0x01,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE3,0xE3,0xE3,0x00,0x00,0x1C,0xE3,0xE3,0x1C,0xE3,0x00,0x00,0xE3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x02,0x00,0x00,0x01,0x02,0x02,0x01,0x02,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};


static const uint8_t PROGMEM hire[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x03,0x00,0x03,0x00,0x03,0x00, 
 0x00,0x03,0x03,0x03,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x1D,0x00,0x00,0x00, 
 0x1D,0x00,0xE2,0x00,0xFF,0x00,0xE2,0x00, 
 0x00,0xE2,0xE2,0xE2,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00, 
 0x1F,0x00,0xE0,0x00,0xFF,0x00,0xE0,0x00, 
 0x00,0xE0,0xE0,0xE0,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x1D,0x00,0x00,0x00, 
 0x1D,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00, 
 0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x1D,0x00,0x00,0x00, 
 0x1D,0x00,0x00,0x1D,0x1D,0x00,0x00,0x00, 
 0x1D,0x00,0x1D,0x1D,0x00,0x00,0x00,0x1D, 
 0x1D,0x1D,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00, 
 0x1F,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00, 
 0x1F,0x00,0x1F,0x1F,0x00,0x00,0x00,0x1F, 
 0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x1D,0x1D,0x1D,0x1D, 
 0x1D,0x00,0x00,0x00,0x1D,0x00,0x00,0x00, 
 0x1D,0x1D,0x00,0x00,0x1D,0x00,0x1D,0x00, 
 0x00,0x00,0x1D,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x1F,0x1F,0x1F,0x1F, 
 0x1F,0x00,0x00,0x00,0x1F,0x00,0x00,0x00, 
 0x1F,0x1F,0x00,0x00,0x1F,0x00,0x1F,0x00, 
 0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x1D,0x00,0x00,0x00, 
 0x1D,0x00,0x00,0x00,0x1D,0x00,0x00,0x00, 
 0x1D,0x00,0x00,0x00,0x00,0x00,0x1D,0x1D, 
 0x1D,0x1D,0x1D,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00, 
 0x1F,0x00,0x00,0x00,0x1F,0x00,0x00,0x00, 
 0x1F,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F, 
 0x1F,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x1D,0x00,0x00,0x00, 
 0x1D,0x00,0x00,0x00,0x1D,0x00,0x00,0x00, 
 0x1D,0x00,0x00,0x00,0x00,0x00,0x1D,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00, 
 0x1F,0x00,0x00,0x00,0x1F,0x00,0x00,0x00, 
 0x1F,0x00,0x00,0x00,0x00,0x00,0x1F,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x1D,0x00,0x00,0x00, 
 0x1D,0x00,0x00,0x1D,0x1D,0x1D,0x00,0x00, 
 0x1D,0x00,0x00,0x00,0x00,0x00,0x00,0x1D, 
 0x1D,0x1D,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00, 
 0x1F,0x00,0x00,0x1F,0x1F,0x1F,0x00,0x00, 
 0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x1F, 
 0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x1D,0x1D,0x00,0x1D,0x00,0x00, 
 0x00,0x1D,0x1D,0x1D,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x1F,0x1F,0x00,0x1F,0x00,0x00, 
 0x00,0x1F,0x1F,0x1F,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x1D,0x00,0x1D,0x00,0x1D,0x00, 
 0x1D,0x00,0x00,0x00,0x1D,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x1F,0x00,0x1F,0x00,0x1F,0x00, 
 0x1F,0x00,0x00,0x00,0x1F,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x1D,0x00,0x1D,0x00,0x1D,0x00, 
 0x1D,0x1D,0x1D,0x1D,0x1D,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x1F,0x00,0x1F,0x00,0x1F,0x00, 
 0x1F,0x1F,0x1F,0x1F,0x1F,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x1D,0x00,0x1D,0x00,0x1D,0x00, 
 0x1D,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x1F,0x00,0x1F,0x00,0x1F,0x00, 
 0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};


void loadMisc(int arg) {
    uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
    switch (arg) {
      case 0: 
        memcpy_P(ptr, db, sizeof(db));
        break;
      case 1: 
        memcpy_P(ptr, major, sizeof(major));
        break;
      case 2: 
        memcpy_P(ptr, hire, sizeof(hire));
        break;
    }
}
