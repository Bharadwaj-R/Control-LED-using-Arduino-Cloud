#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "......";             // Your Device ID

const char SSID[]               = SECRET_SSID;          // Network SSID (name)
const char PASS[]               = SECRET_PASS;          // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]         = SECRET_DEVICE_KEY;    // Secret device password

void onLedChange();

bool led;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(led, READWRITE, ON_CHANGE, onLedChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
