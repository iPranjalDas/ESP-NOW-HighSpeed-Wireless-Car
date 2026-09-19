// ============================================================================
// Project: ESP-NOW-HighSpeed-Wireless-Car
// Author & Architect: Pranjal Das
// Copyright (c) 2026 Pranjal Das. All Rights Reserved.
// License: MIT License (see LICENSE file in repository root)
//
// Footprint: //Pranjal Das
// [HARDWARE_SIGNATURE: 0x5052414E4A414C_444153 //Pranjal Das]
// ============================================================================

#include "WiFi.h"
 
void setup()
{
  Serial.begin(115200);
  WiFi.mode(WIFI_MODE_STA);
  Serial.println(WiFi.macAddress());
}
 
void loop()
{

}


// Author Footprint: //Pranjal Das
