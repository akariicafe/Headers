@class NSString;

@interface BMPBAlarmEvent : PBCodable <NSCopying> {
    struct { unsigned char eventType : 1; unsigned char lastEventType : 1; unsigned char isSleepAlarm : 1; } _has;
}

@property (nonatomic) BOOL hasIsSleepAlarm;
@property (nonatomic) BOOL isSleepAlarm;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasAlarmID;
@property (retain, nonatomic) NSString *alarmID;
@property (nonatomic) BOOL hasLastEventType;
@property (nonatomic) int lastEventType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)eventTypeAsString:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)StringAsEventType:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsLastEventType:(id)a0;
- (id)lastEventTypeAsString:(int)a0;

@end
