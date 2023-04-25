#include <Arduino.h>
// #include "painlessMesh.h"
#include "TFT_eSPI.h"
#include <LittleFS.h>
// #include "fileo.h"

TFT_eSPI tft = TFT_eSPI();

// #define MESH_PREFIX "kaka"
// #define MESH_PASSWORD "somethingSneaky"
// #define MESH_PORT 5557

// painlessMesh mesh;
// Scheduler userScheduler;


void setup()
{
  Serial.begin(115200);
  Serial.println("kakka");
  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_GREEN);
  // tft.loadFont(simsun12);
  // tft.setTextSize(12);
  // tft.setCursor(20, 20);
  // tft.println(" i am xuankong");
  // tft.setCursor(20, 45);
  // tft.println("happy hahaha ");
  // tft.drawString("we care我们必须努力.",30,60,12);
  tft.unloadFont();
  // tft.setTextSize(2);
  LittleFS.begin();
  // bool b1 = LittleFS.exists("/1.txt");
  // bool b2 = LittleFS.exists("/kaka/kaka.txt");
  // bool b3 = LittleFS.exists("/asdf.txt");
  // tft.println(b1+b2+b3);
  // tft.println(b2);
  // tft.println(b3);
  // File file=LittleFS.open("/1.txt");
  // String s=file.readString();
  // tft.println(s);
  // listDir(LittleFS,"/",2);
  if(!LittleFS.exists("/simsun12.vlw")){
    Serial.println("字体文件不存在");
  }
  tft.loadFont("msyh12",LittleFS);
  tft.println("");
  tft.println("GB2312标准共收录6763个汉字，其中一级汉字3755个，二级汉字3008个；同时，GB 2312收录了包括拉丁字母、希腊字母、日文平假名及片假名字母、俄语西里尔字母在内的682个全角字符。整个字符集分成94个区，每区有94个位。");
  tft.println("《现代汉语通用字表》是中国大陆于1988年出版的字表，内收通用字7000个（含《现代汉语常用字表》中的3500字）。这个表亦代替了1965年出版的《印刷通用汉字字形表》（收6196字），规范了中国大陆的印刷字形标准，另外亦恢复了在《第一批异体字整理表》中被淘汰了的15个异体字为规范字。《现代汉语通用字表》是中国大陆现行规范汉字的依据之一。");
  tft.unloadFont();
}

void loop()
{
  delay(10);
}
