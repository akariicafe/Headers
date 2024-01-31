@interface CLPIndoorCMPedometer : PBCodable <NSCopying> {
    struct { unsigned char firstStepTime : 1; unsigned char timestamp : 1; unsigned char activeTime : 1; unsigned char distance : 1; unsigned char floorsAscended : 1; unsigned char floorsDescended : 1; unsigned char numberOfSteps : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) float distance;
@property (nonatomic) BOOL hasNumberOfSteps;
@property (nonatomic) int numberOfSteps;
@property (nonatomic) BOOL hasFloorsAscended;
@property (nonatomic) int floorsAscended;
@property (nonatomic) BOOL hasFloorsDescended;
@property (nonatomic) int floorsDescended;
@property (nonatomic) BOOL hasFirstStepTime;
@property (nonatomic) double firstStepTime;
@property (nonatomic) BOOL hasActiveTime;
@property (nonatomic) float activeTime;

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
