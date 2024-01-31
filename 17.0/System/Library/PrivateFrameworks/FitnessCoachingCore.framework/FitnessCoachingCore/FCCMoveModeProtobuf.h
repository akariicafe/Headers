@interface FCCMoveModeProtobuf : PBCodable <NSCopying> {
    struct { unsigned char nextActivityMoveMode : 1; unsigned char nextActivityMoveModeStartDate : 1; unsigned char notificationType : 1; unsigned char delay : 1; } _has;
}

@property (nonatomic) BOOL hasNotificationType;
@property (nonatomic) long long notificationType;
@property (nonatomic) BOOL hasNextActivityMoveMode;
@property (nonatomic) long long nextActivityMoveMode;
@property (nonatomic) BOOL hasNextActivityMoveModeStartDate;
@property (nonatomic) double nextActivityMoveModeStartDate;
@property (nonatomic) BOOL hasDelay;
@property (nonatomic) int delay;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
