@interface BMPBDoNotDisturbWhileDrivingEvent : PBCodable <NSCopying> {
    struct { unsigned char reason : 1; unsigned char isStart : 1; } _has;
}

@property (nonatomic) BOOL hasIsStart;
@property (nonatomic) BOOL isStart;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;

- (id)reasonAsString:(int)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (int)StringAsReason:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
