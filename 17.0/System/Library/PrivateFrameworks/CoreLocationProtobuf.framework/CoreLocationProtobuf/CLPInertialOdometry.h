@interface CLPInertialOdometry : PBCodable <NSCopying> {
    struct { unsigned char deltaPositionX : 1; unsigned char deltaPositionY : 1; unsigned char deltaPositionZ : 1; unsigned char deltaVelocityX : 1; unsigned char deltaVelocityY : 1; unsigned char deltaVelocityZ : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasDeltaPositionX;
@property (nonatomic) double deltaPositionX;
@property (nonatomic) BOOL hasDeltaPositionY;
@property (nonatomic) double deltaPositionY;
@property (nonatomic) BOOL hasDeltaPositionZ;
@property (nonatomic) double deltaPositionZ;
@property (nonatomic) BOOL hasDeltaVelocityX;
@property (nonatomic) double deltaVelocityX;
@property (nonatomic) BOOL hasDeltaVelocityY;
@property (nonatomic) double deltaVelocityY;
@property (nonatomic) BOOL hasDeltaVelocityZ;
@property (nonatomic) double deltaVelocityZ;

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
