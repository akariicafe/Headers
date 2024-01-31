@interface RegulatorAverageCurrent : PBCodable <NSCopying> {
    struct { unsigned char averageCurrentMa : 1; unsigned char duration64ms : 1; unsigned char regulatorId : 1; unsigned char sampleCount : 1; } _has;
}

@property (nonatomic) BOOL hasRegulatorId;
@property (nonatomic) unsigned int regulatorId;
@property (nonatomic) BOOL hasSampleCount;
@property (nonatomic) unsigned int sampleCount;
@property (nonatomic) BOOL hasDuration64ms;
@property (nonatomic) unsigned int duration64ms;
@property (nonatomic) BOOL hasAverageCurrentMa;
@property (nonatomic) unsigned int averageCurrentMa;

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
