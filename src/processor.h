#ifndef _PROCESSOR_H
#define _PROCESSOR_H

#include <MicroNMEA.h>
#include <SPI.h>
#include <SD.h>

#define CSV_HEADER "date;time;lat;lon;alt;speed;cour"
#define LASTFILE "LASTFILE"

class Processor {
public:
  Processor(int);
  bool process(MicroNMEA &);
private:
  void dump(MicroNMEA &);
  const char *nextFilename();
  int cs_pin;
  File file;
};

#endif
