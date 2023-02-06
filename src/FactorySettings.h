#pragma once

// Wifi settings
#ifndef FACTORY_WIFI_SSID
#define FACTORY_WIFI_SSID ""
#endif
#ifndef FACTORY_WIFI_PASSWORD
#define FACTORY_WIFI_PASSWORD ""
#endif
#ifndef FACTORY_WIFI_HOSTNAME
#define FACTORY_WIFI_HOSTNAME "#{platform}-#{unique_id}"
#endif

// AP settings
#ifndef FACTORY_AP_PROVISION_MODE
#define FACTORY_AP_PROVISION_MODE AP_MODE_DISCONNECTED
#endif
#ifndef FACTORY_AP_SSID
#define FACTORY_AP_SSID "esp-rest-#{unique_id}"
#endif
#ifndef FACTORY_AP_PASSWORD
#define FACTORY_AP_PASSWORD "esp-rest"
#endif
#ifndef FACTORY_AP_CHANNEL
#define FACTORY_AP_CHANNEL 1
#endif
#ifndef FACTORY_AP_SSID_HIDDEN
#define FACTORY_AP_SSID_HIDDEN false
#endif
#ifndef FACTORY_AP_MAX_CLIENTS
#define FACTORY_AP_MAX_CLIENTS 4
#endif
#ifndef FACTORY_AP_LOCAL_IP
#define FACTORY_AP_LOCAL_IP "192.168.4.1"
#endif
#ifndef FACTORY_AP_GATEWAY_IP
#define FACTORY_AP_GATEWAY_IP "192.168.4.1"
#endif
#ifndef FACTORY_AP_SUBNET_MASK
#define FACTORY_AP_SUBNET_MASK "255.255.255.0"
#endif

// User credentials for admin and guest user
#ifndef FACTORY_ADMIN_USERNAME
#define FACTORY_ADMIN_USERNAME "admin"
#endif
#ifndef FACTORY_ADMIN_PASSWORD
#define FACTORY_ADMIN_PASSWORD "admin"
#endif
#ifndef FACTORY_GUEST_USERNAME
#define FACTORY_GUEST_USERNAME "guest"
#endif
#ifndef FACTORY_GUEST_PASSWORD
#define FACTORY_GUEST_PASSWORD "guest"
#endif

// NTP settings
#ifndef FACTORY_NTP_ENABLED
#define FACTORY_NTP_ENABLED true
#endif
#ifndef FACTORY_NTP_TIME_ZONE_LABEL
#define FACTORY_NTP_TIME_ZONE_LABEL "Europe/London"
#endif
#ifndef FACTORY_NTP_TIME_ZONE_FORMAT
#define FACTORY_NTP_TIME_ZONE_FORMAT "GMT0BST,M3.5.0/1,M10.5.0"
#endif
#ifndef FACTORY_NTP_SERVER
#define FACTORY_NTP_SERVER "time.google.com"
#endif

// OTA settings
#ifndef FACTORY_OTA_PORT
#define FACTORY_OTA_PORT 8266
#endif
#ifndef FACTORY_OTA_PASSWORD
#define FACTORY_OTA_PASSWORD "esp-react"
#endif
#ifndef FACTORY_OTA_ENABLED
#define FACTORY_OTA_ENABLED true
#endif

// MQTT settings
#ifndef FACTORY_MQTT_ENABLED
#define FACTORY_MQTT_ENABLED true
#endif
#ifndef FACTORY_MQTT_HOST
#define FACTORY_MQTT_HOST "test.mosquitto.org"
#endif
#ifndef FACTORY_MQTT_PORT
#define FACTORY_MQTT_PORT 1883
#endif
#ifndef FACTORY_MQTT_USERNAME
#define FACTORY_MQTT_USERNAME ""
#endif
#ifndef FACTORY_MQTT_PASSWORD
#define FACTORY_MQTT_PASSWORD ""
#endif
#ifndef FACTORY_MQTT_CLIENT_ID
#define FACTORY_MQTT_CLIENT_ID "#{platform}-#{unique_id}"
#endif
#ifndef FACTORY_MQTT_KEEP_ALIVE
#define FACTORY_MQTT_KEEP_ALIVE 60
#endif
#ifndef FACTORY_MQTT_CLEAN_SESSION
#define FACTORY_MQTT_CLEAN_SESSION true
#endif
#ifndef FACTORY_MQTT_MAX_TOPIC_LENGTH
#define FACTORY_MQTT_MAX_TOPIC_LENGTH 128
#endif

// JWT Secret
#ifndef FACTORY_JWT_SECRET
#define FACTORY_JWT_SECRET "#{random}-#{random}"
#endif
