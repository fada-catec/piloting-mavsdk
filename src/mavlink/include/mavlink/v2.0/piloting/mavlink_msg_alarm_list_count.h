#pragma once
// MESSAGE ALARM_LIST_COUNT PACKING

#define MAVLINK_MSG_ID_ALARM_LIST_COUNT 195


typedef struct __mavlink_alarm_list_count_t {
 uint16_t count; /*<  Number of alarm items in the sequence*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
} mavlink_alarm_list_count_t;

#define MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN 4
#define MAVLINK_MSG_ID_ALARM_LIST_COUNT_MIN_LEN 4
#define MAVLINK_MSG_ID_195_LEN 4
#define MAVLINK_MSG_ID_195_MIN_LEN 4

#define MAVLINK_MSG_ID_ALARM_LIST_COUNT_CRC 225
#define MAVLINK_MSG_ID_195_CRC 225



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ALARM_LIST_COUNT { \
    195, \
    "ALARM_LIST_COUNT", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_alarm_list_count_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_alarm_list_count_t, target_component) }, \
         { "count", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_alarm_list_count_t, count) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ALARM_LIST_COUNT { \
    "ALARM_LIST_COUNT", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_alarm_list_count_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_alarm_list_count_t, target_component) }, \
         { "count", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_alarm_list_count_t, count) }, \
         } \
}
#endif

/**
 * @brief Pack a alarm_list_count message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param count  Number of alarm items in the sequence
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_alarm_list_count_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint16_t count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN];
    _mav_put_uint16_t(buf, 0, count);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN);
#else
    mavlink_alarm_list_count_t packet;
    packet.count = count;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ALARM_LIST_COUNT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ALARM_LIST_COUNT_MIN_LEN, MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN, MAVLINK_MSG_ID_ALARM_LIST_COUNT_CRC);
}

/**
 * @brief Pack a alarm_list_count message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param count  Number of alarm items in the sequence
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_alarm_list_count_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint16_t count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN];
    _mav_put_uint16_t(buf, 0, count);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN);
#else
    mavlink_alarm_list_count_t packet;
    packet.count = count;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ALARM_LIST_COUNT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ALARM_LIST_COUNT_MIN_LEN, MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN, MAVLINK_MSG_ID_ALARM_LIST_COUNT_CRC);
}

/**
 * @brief Encode a alarm_list_count struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param alarm_list_count C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_alarm_list_count_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_alarm_list_count_t* alarm_list_count)
{
    return mavlink_msg_alarm_list_count_pack(system_id, component_id, msg, alarm_list_count->target_system, alarm_list_count->target_component, alarm_list_count->count);
}

/**
 * @brief Encode a alarm_list_count struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param alarm_list_count C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_alarm_list_count_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_alarm_list_count_t* alarm_list_count)
{
    return mavlink_msg_alarm_list_count_pack_chan(system_id, component_id, chan, msg, alarm_list_count->target_system, alarm_list_count->target_component, alarm_list_count->count);
}

/**
 * @brief Send a alarm_list_count message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param count  Number of alarm items in the sequence
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_alarm_list_count_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint16_t count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN];
    _mav_put_uint16_t(buf, 0, count);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALARM_LIST_COUNT, buf, MAVLINK_MSG_ID_ALARM_LIST_COUNT_MIN_LEN, MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN, MAVLINK_MSG_ID_ALARM_LIST_COUNT_CRC);
#else
    mavlink_alarm_list_count_t packet;
    packet.count = count;
    packet.target_system = target_system;
    packet.target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALARM_LIST_COUNT, (const char *)&packet, MAVLINK_MSG_ID_ALARM_LIST_COUNT_MIN_LEN, MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN, MAVLINK_MSG_ID_ALARM_LIST_COUNT_CRC);
#endif
}

/**
 * @brief Send a alarm_list_count message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_alarm_list_count_send_struct(mavlink_channel_t chan, const mavlink_alarm_list_count_t* alarm_list_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_alarm_list_count_send(chan, alarm_list_count->target_system, alarm_list_count->target_component, alarm_list_count->count);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALARM_LIST_COUNT, (const char *)alarm_list_count, MAVLINK_MSG_ID_ALARM_LIST_COUNT_MIN_LEN, MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN, MAVLINK_MSG_ID_ALARM_LIST_COUNT_CRC);
#endif
}

#if MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_alarm_list_count_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint16_t count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, count);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALARM_LIST_COUNT, buf, MAVLINK_MSG_ID_ALARM_LIST_COUNT_MIN_LEN, MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN, MAVLINK_MSG_ID_ALARM_LIST_COUNT_CRC);
#else
    mavlink_alarm_list_count_t *packet = (mavlink_alarm_list_count_t *)msgbuf;
    packet->count = count;
    packet->target_system = target_system;
    packet->target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALARM_LIST_COUNT, (const char *)packet, MAVLINK_MSG_ID_ALARM_LIST_COUNT_MIN_LEN, MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN, MAVLINK_MSG_ID_ALARM_LIST_COUNT_CRC);
#endif
}
#endif

#endif

// MESSAGE ALARM_LIST_COUNT UNPACKING


/**
 * @brief Get field target_system from alarm_list_count message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_alarm_list_count_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field target_component from alarm_list_count message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_alarm_list_count_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field count from alarm_list_count message
 *
 * @return  Number of alarm items in the sequence
 */
static inline uint16_t mavlink_msg_alarm_list_count_get_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a alarm_list_count message into a struct
 *
 * @param msg The message to decode
 * @param alarm_list_count C-struct to decode the message contents into
 */
static inline void mavlink_msg_alarm_list_count_decode(const mavlink_message_t* msg, mavlink_alarm_list_count_t* alarm_list_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    alarm_list_count->count = mavlink_msg_alarm_list_count_get_count(msg);
    alarm_list_count->target_system = mavlink_msg_alarm_list_count_get_target_system(msg);
    alarm_list_count->target_component = mavlink_msg_alarm_list_count_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN? msg->len : MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN;
        memset(alarm_list_count, 0, MAVLINK_MSG_ID_ALARM_LIST_COUNT_LEN);
    memcpy(alarm_list_count, _MAV_PAYLOAD(msg), len);
#endif
}
