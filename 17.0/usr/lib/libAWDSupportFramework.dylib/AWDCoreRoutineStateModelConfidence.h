@interface AWDCoreRoutineStateModelConfidence : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char confidence : 1; unsigned char impossibleTransitions : 1; unsigned char nearbyLocations : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasImpossibleTransitions;
@property (nonatomic) unsigned int impossibleTransitions;
@property (nonatomic) BOOL hasNearbyLocations;
@property (nonatomic) unsigned int nearbyLocations;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) unsigned int confidence;

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
