@interface AWDCoreRoutineModelAlgorithmInstance : PBCodable <NSCopying> {
    struct { unsigned char addressComponentMatches : 1; unsigned char distanceFromTruth : 1; unsigned char uncertainty : 1; unsigned char efficacy : 1; unsigned char previousType : 1; unsigned char source : 1; unsigned char truthSource : 1; unsigned char truthType : 1; unsigned char type : 1; unsigned char isRotted : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL hasEfficacy;
@property (nonatomic) unsigned int efficacy;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) unsigned int source;
@property (nonatomic) BOOL hasUncertainty;
@property (nonatomic) double uncertainty;
@property (nonatomic) BOOL hasDistanceFromTruth;
@property (nonatomic) double distanceFromTruth;
@property (nonatomic) BOOL hasAddressComponentMatches;
@property (nonatomic) unsigned long long addressComponentMatches;
@property (nonatomic) BOOL hasPreviousType;
@property (nonatomic) unsigned int previousType;
@property (nonatomic) BOOL hasTruthType;
@property (nonatomic) unsigned int truthType;
@property (nonatomic) BOOL hasTruthSource;
@property (nonatomic) unsigned int truthSource;
@property (nonatomic) BOOL hasIsRotted;
@property (nonatomic) BOOL isRotted;

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
