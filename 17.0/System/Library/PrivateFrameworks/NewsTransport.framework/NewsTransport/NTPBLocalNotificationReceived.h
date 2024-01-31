@interface NTPBLocalNotificationReceived : PBCodable <NSCopying> {
    struct { unsigned char localNotificationNumberReceived : 1; } _has;
}

@property (nonatomic) BOOL hasLocalNotificationNumberReceived;
@property (nonatomic) int localNotificationNumberReceived;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
