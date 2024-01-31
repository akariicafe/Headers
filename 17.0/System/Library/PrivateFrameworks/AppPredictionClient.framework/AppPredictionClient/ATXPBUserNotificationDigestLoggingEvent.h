@class ATXPBUserNotificationDigest;

@interface ATXPBUserNotificationDigestLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char eventType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDigest;
@property (retain, nonatomic) ATXPBUserNotificationDigest *digest;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)eventTypeAsString:(int)a0;
- (id)initFromJSON:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)StringAsEventType:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
