/*
 *  Copyright (C) 2020, Samsung Electronics Co. Ltd. All Rights Reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 */

#ifndef __SHUB_SENSOR_TYPE_H_
#define __SHUB_SENSOR_TYPE_H_

#define TYPE_HUB				(255)

enum sensor_type {
	SENSOR_TYPE_ACCELEROMETER = 1,
	SENSOR_TYPE_GEOMAGNETIC_FIELD,
	SENSOR_TYPE_ORIENTATION,
	SENSOR_TYPE_GYROSCOPE,
	SENSOR_TYPE_LIGHT,
	SENSOR_TYPE_PRESSURE,
	SENSOR_TYPE_TEMPERATURE, // Deprecated
	SENSOR_TYPE_PROXIMITY,
	SENSOR_TYPE_GRAVITY,
	SENSOR_TYPE_LINEAR_ACCELERATION = 10,
	SENSOR_TYPE_ROTATION_VECTOR,
	SENSOR_TYPE_RELATIVE_HUMIDITY,
	SENSOR_TYPE_AMBIENT_TEMPERATURE,
	SENSOR_TYPE_MAGNETIC_FIELD_UNCALIBRATED,
	SENSOR_TYPE_GAME_ROTATION_VECTOR,
	SENSOR_TYPE_GYROSCOPE_UNCALIBRATED,
	SENSOR_TYPE_SIGNIFICANT_MOTION,
	SENSOR_TYPE_STEP_DETECTOR,
	SENSOR_TYPE_STEP_COUNTER,
	SENSOR_TYPE_GEOMAGNETIC_ROTATION_VECTOR = 20,
	SENSOR_TYPE_HEART_RATE,
	SENSOR_TYPE_TILT_DETECTOR,
	SENSOR_TYPE_WAKE_GESTURE,
	SENSOR_TYPE_GLANCE_GESTURE,
	SENSOR_TYPE_PICK_UP_GESTURE,
	SENSOR_TYPE_WRIST_TILT_GESTURE,
	SENSOR_TYPE_DEVICE_ORIENTATION,
	SENSOR_TYPE_ACCELEROMETER_INT,
	SENSOR_TYPE_PROXIMITY_RAW,
	SENSOR_TYPE_GEOMAGNETIC_POWER = 30,
	SENSOR_TYPE_INTERRUPT_GYRO,
	SENSOR_TYPE_SCONTEXT,
	SENSOR_TYPE_SENSORHUB,
	SENSOR_TYPE_LIGHT_CCT,
	SENSOR_TYPE_CALL_GESTURE,
	SENSOR_TYPE_WAKE_UP_MOTION,
	SENSOR_TYPE_LIGHT_AUTOBRIGHTNESS,
	SENSOR_TYPE_VDIS_GYROSCOPE,
	SENSOR_TYPE_POCKET_MODE_LITE,
	SENSOR_TYPE_PROXIMITY_CALIBRATION = 40,
	SENSOR_TYPE_PROTOS_MOTION,
	SENSOR_TYPE_FLIP_COVER_DETECTOR,
	SENSOR_TYPE_ACCELEROMETER_UNCALIBRATED = 43,
	SENSOR_TYPE_AOIS = 49,
	SENSOR_TYPE_SUPER_STEADY_GYROSCOPE,
	SENSOR_TYPE_POGO_REQUEST_HANDLER,
	SENSOR_TYPE_DEVICE_ORIENTATION_WU,
	SENSOR_TYPE_HUB_DEBUGGER,
	SENSOR_TYPE_SAR_BACKOFF_MOTION = 54,
	SENSOR_TYPE_LIGHT_SEAMLESS,
	SENSOR_TYPE_LED_COVER_EVENT,
	SENSOR_TYPE_LEGACY_MAX,
};
#define LEGACY_SENSOR_COUNT                       (SENSOR_TYPE_LEGACY_MAX)

/*****************************
 * Samsung sensor types
******************************/

/* sensor types defined by samsung */
#define SENSOR_TYPE_SS_BASE                       (128)
#define SENSOR_TYPE_SS_CALL_POSE                  (SENSOR_TYPE_SS_BASE + 2)
#define SENSOR_TYPE_SS_PEDOMETER                  (SENSOR_TYPE_SS_BASE + 3)
#define SENSOR_TYPE_SS_MOTION                     (SENSOR_TYPE_SS_BASE + 4)
#define SENSOR_TYPE_SS_GESTURE_APPROACH           (SENSOR_TYPE_SS_BASE + 5)
#define SENSOR_TYPE_SS_STEP_COUNT_ALERT           (SENSOR_TYPE_SS_BASE + 6)
#define SENSOR_TYPE_SS_AUTO_ROTATION              (SENSOR_TYPE_SS_BASE + 7)
#define SENSOR_TYPE_SS_MOVEMENT                   (SENSOR_TYPE_SS_BASE + 8)
#define SENSOR_TYPE_SS_MOVEMENT_FOR_POSITIONING   (SENSOR_TYPE_SS_BASE + 9)  // 50
#define SENSOR_TYPE_SS_DIRECT_CALL                (SENSOR_TYPE_SS_BASE + 10)
#define SENSOR_TYPE_SS_STOP_ALERT                 (SENSOR_TYPE_SS_BASE + 11)
#define SENSOR_TYPE_SS_ENVIRONMENT_SENSOR         (SENSOR_TYPE_SS_BASE + 12)
#define SENSOR_TYPE_SS_SHAKE_MOTION               (SENSOR_TYPE_SS_BASE + 13)
#define SENSOR_TYPE_SS_FLIP_COVER_ACTION          (SENSOR_TYPE_SS_BASE + 14)
#define SENSOR_TYPE_SS_GYRO_TEMPERATURE           (SENSOR_TYPE_SS_BASE + 15)
#define SENSOR_TYPE_SS_PUT_DOWN_MOTION            (SENSOR_TYPE_SS_BASE + 16)
#define SENSOR_TYPE_SS_BOUNCE_SHORT_MOTION        (SENSOR_TYPE_SS_BASE + 18)
#define SENSOR_TYPE_SS_WRIST_UP_MOTION            (SENSOR_TYPE_SS_BASE + 19) // 60
#define SENSOR_TYPE_SS_BOUNCE_LONG_MOTION         (SENSOR_TYPE_SS_BASE + 20)
#define SENSOR_TYPE_SS_FLAT_MOTION                (SENSOR_TYPE_SS_BASE + 21)
#define SENSOR_TYPE_SS_MOVEMENT_ALERT             (SENSOR_TYPE_SS_BASE + 22)
#define SENSOR_TYPE_SS_DEVICE_POSITION            (SENSOR_TYPE_SS_BASE + 23)
#define SENSOR_TYPE_SS_TEMPERATURE_ALERT          (SENSOR_TYPE_SS_BASE + 24)
#define SENSOR_TYPE_SS_SPECIFIC_POSE_ALERT        (SENSOR_TYPE_SS_BASE + 25)
#define SENSOR_TYPE_SS_ACTIVITY_TRACKER           (SENSOR_TYPE_SS_BASE + 26)
#define SENSOR_TYPE_SS_STAYING_ALERT              (SENSOR_TYPE_SS_BASE + 27)
#define SENSOR_TYPE_SS_APDR                       (SENSOR_TYPE_SS_BASE + 28)
#define SENSOR_TYPE_SS_LIFE_LOG_COMPONENT         (SENSOR_TYPE_SS_BASE + 29) // 70
#define SENSOR_TYPE_SS_CARE_GIVER                 (SENSOR_TYPE_SS_BASE + 30)
#define SENSOR_TYPE_SS_STEP_DETECTOR              (SENSOR_TYPE_SS_BASE + 31)
#define SENSOR_TYPE_SS_SIGNIFICANT_MOTION         (SENSOR_TYPE_SS_BASE + 32)
#define SENSOR_TYPE_SS_UNCALIBRATED_GYRO          (SENSOR_TYPE_SS_BASE + 33)
#define SENSOR_TYPE_SS_ROTATION_VECTOR            (SENSOR_TYPE_SS_BASE + 35)
#define SENSOR_TYPE_SS_STEP_COUNTER               (SENSOR_TYPE_SS_BASE + 36)
#define SENSOR_TYPE_SS_SLEEP_MONITOR              (SENSOR_TYPE_SS_BASE + 37)
#define SENSOR_TYPE_SS_ABNORMAL_SHOCK             (SENSOR_TYPE_SS_BASE + 38)
#define SENSOR_TYPE_SS_CAPTURE_MOTION             (SENSOR_TYPE_SS_BASE + 39) // 80
#define SENSOR_TYPE_SS_CALL_MOTION                (SENSOR_TYPE_SS_BASE + 41)
#define SENSOR_TYPE_SS_STEP_LEVEL_MONITOR         (SENSOR_TYPE_SS_BASE + 44)
#define SENSOR_TYPE_SS_FLAT_MOTION_FOR_TABLE_MODE (SENSOR_TYPE_SS_BASE + 45)
#define SENSOR_TYPE_SS_EXERCISE                   (SENSOR_TYPE_SS_BASE + 46)
#define SENSOR_TYPE_SS_PHONE_STATE_MONITOR        (SENSOR_TYPE_SS_BASE + 47)
#define SENSOR_TYPE_SS_AUTO_BRIGHTNESS            (SENSOR_TYPE_SS_BASE + 48)
#define SENSOR_TYPE_SS_ABNORMAL_PRESSURE_MONITOR  (SENSOR_TYPE_SS_BASE + 49) // 90
#define SENSOR_TYPE_SS_HALL_SENSOR                (SENSOR_TYPE_SS_BASE + 50)
#define SENSOR_TYPE_SS_EAD                        (SENSOR_TYPE_SS_BASE + 52)
#define SENSOR_TYPE_SS_DUAL_DISPLAY_ANGLE         (SENSOR_TYPE_SS_BASE + 53)
#define SENSOR_TYPE_SS_WIRELESS_CHARGING_MONITOR  (SENSOR_TYPE_SS_BASE + 54)
#define SENSOR_TYPE_SS_SLOCATION                  (SENSOR_TYPE_SS_BASE + 55)
#define SENSOR_TYPE_SS_DPCM                       (SENSOR_TYPE_SS_BASE + 56)
#define SENSOR_TYPE_SS_MAIN_SCREEN_DETECTION      (SENSOR_TYPE_SS_BASE + 57)
#define SENSOR_TYPE_SS_ANY_MOTION_DETECTOR        (SENSOR_TYPE_SS_BASE + 58)
#define SENSOR_TYPE_SS_SENSOR_STATUS_CHECK        (SENSOR_TYPE_SS_BASE + 59) // 100
#define SENSOR_TYPE_SS_ACTIVITY_CALIBRATION       (SENSOR_TYPE_SS_BASE + 60)
#define SENSOR_TYPE_SS_CHANGE_LOCATION_TRIGGER    (SENSOR_TYPE_SS_BASE + 61)
#define SENSOR_TYPE_SS_FREE_FALL_DETECTION        (SENSOR_TYPE_SS_BASE + 62)
#define SENSOR_TYPE_SS_GPS                        (SENSOR_TYPE_SS_BASE + 63)
#define SENSOR_TYPE_SS_SLC_CURRENTLOCATION        (SENSOR_TYPE_SS_BASE + 75)
#define SENSOR_TYPE_SS_MAX                        (SENSOR_TYPE_SS_BASE + 76)

#define SENSOR_TYPE_SS_COUNT                      (SENSOR_TYPE_SS_MAX - SENSOR_TYPE_SS_BASE)
#define SENSOR_TYPE_MAX                           (SENSOR_TYPE_SS_MAX)

#endif /* __SHUB_SENSOR_TYPE_H_*/