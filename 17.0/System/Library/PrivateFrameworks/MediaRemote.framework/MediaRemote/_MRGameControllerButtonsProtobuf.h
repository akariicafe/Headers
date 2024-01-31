@interface _MRGameControllerButtonsProtobuf : PBCodable <NSCopying> {
    struct { unsigned char a : 1; unsigned char b : 1; unsigned char dPadX : 1; unsigned char dPadY : 1; unsigned char leftShoulder : 1; unsigned char leftThumbstickX : 1; unsigned char leftThumbstickY : 1; unsigned char leftTrigger : 1; unsigned char pause : 1; unsigned char rightShoulder : 1; unsigned char rightThumbstickX : 1; unsigned char rightThumbstickY : 1; unsigned char rightTrigger : 1; unsigned char x : 1; unsigned char y : 1; } _has;
}

@property (nonatomic) BOOL hasDPadX;
@property (nonatomic) float dPadX;
@property (nonatomic) BOOL hasDPadY;
@property (nonatomic) float dPadY;
@property (nonatomic) BOOL hasA;
@property (nonatomic) float a;
@property (nonatomic) BOOL hasB;
@property (nonatomic) float b;
@property (nonatomic) BOOL hasX;
@property (nonatomic) float x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) float y;
@property (nonatomic) BOOL hasLeftShoulder;
@property (nonatomic) float leftShoulder;
@property (nonatomic) BOOL hasRightShoulder;
@property (nonatomic) float rightShoulder;
@property (nonatomic) BOOL hasLeftThumbstickX;
@property (nonatomic) float leftThumbstickX;
@property (nonatomic) BOOL hasLeftThumbstickY;
@property (nonatomic) float leftThumbstickY;
@property (nonatomic) BOOL hasRightThumbstickX;
@property (nonatomic) float rightThumbstickX;
@property (nonatomic) BOOL hasRightThumbstickY;
@property (nonatomic) float rightThumbstickY;
@property (nonatomic) BOOL hasLeftTrigger;
@property (nonatomic) float leftTrigger;
@property (nonatomic) BOOL hasRightTrigger;
@property (nonatomic) float rightTrigger;
@property (nonatomic) BOOL hasPause;
@property (nonatomic) float pause;

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
