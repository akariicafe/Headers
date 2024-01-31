@interface CLPLOGENTRYVISIONVIOInertialStateInfo : PBCodable <NSCopying> {
    struct { unsigned char stateLengthInBytes : 1; unsigned char accelBiasLength : 1; unsigned char accelBiasOffset : 1; unsigned char gyroBiasLength : 1; unsigned char gyroBiasOffset : 1; unsigned char orientationLength : 1; unsigned char orientationOffset : 1; unsigned char positionLength : 1; unsigned char positionOffset : 1; unsigned char stateLength : 1; unsigned char velocityLength : 1; unsigned char velocityOffset : 1; } _has;
}

@property (nonatomic) BOOL hasStateLengthInBytes;
@property (nonatomic) unsigned long long stateLengthInBytes;
@property (nonatomic) BOOL hasStateLength;
@property (nonatomic) unsigned int stateLength;
@property (nonatomic) BOOL hasOrientationOffset;
@property (nonatomic) unsigned int orientationOffset;
@property (nonatomic) BOOL hasOrientationLength;
@property (nonatomic) unsigned int orientationLength;
@property (nonatomic) BOOL hasGyroBiasOffset;
@property (nonatomic) unsigned int gyroBiasOffset;
@property (nonatomic) BOOL hasGyroBiasLength;
@property (nonatomic) unsigned int gyroBiasLength;
@property (nonatomic) BOOL hasVelocityOffset;
@property (nonatomic) unsigned int velocityOffset;
@property (nonatomic) BOOL hasVelocityLength;
@property (nonatomic) unsigned int velocityLength;
@property (nonatomic) BOOL hasAccelBiasOffset;
@property (nonatomic) unsigned int accelBiasOffset;
@property (nonatomic) BOOL hasAccelBiasLength;
@property (nonatomic) unsigned int accelBiasLength;
@property (nonatomic) BOOL hasPositionOffset;
@property (nonatomic) unsigned int positionOffset;
@property (nonatomic) BOOL hasPositionLength;
@property (nonatomic) unsigned int positionLength;

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
