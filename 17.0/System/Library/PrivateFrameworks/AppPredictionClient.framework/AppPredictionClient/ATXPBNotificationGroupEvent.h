@class NSString;

@interface ATXPBNotificationGroupEvent : PBCodable <NSCopying> {
    double _secondsSinceReferenceDate;
    int _eventType;
    NSString *_uuid;
    struct { unsigned char secondsSinceReferenceDate : 1; unsigned char eventType : 1; } _has;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
