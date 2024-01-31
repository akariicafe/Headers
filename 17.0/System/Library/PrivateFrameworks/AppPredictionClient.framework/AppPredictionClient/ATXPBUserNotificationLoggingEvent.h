@class NSString, ATXPBUserNotification;

@interface ATXPBUserNotificationLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char deliveryReason : 1; unsigned char eventType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasNotification;
@property (retain, nonatomic) ATXPBUserNotification *notification;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasModeIdentifier;
@property (retain, nonatomic) NSString *modeIdentifier;
@property (nonatomic) BOOL hasDeliveryReason;
@property (nonatomic) int deliveryReason;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)eventTypeAsString:(int)a0;
- (id)initFromJSON:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (int)StringAsDeliveryReason:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)deliveryReasonAsString:(int)a0;
- (int)StringAsEventType:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
