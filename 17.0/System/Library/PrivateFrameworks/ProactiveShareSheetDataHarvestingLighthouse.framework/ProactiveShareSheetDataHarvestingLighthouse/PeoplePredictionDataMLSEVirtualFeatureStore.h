@class NSString, NSMutableArray;

@interface PeoplePredictionDataMLSEVirtualFeatureStore : PBCodable <NSCopying> {
    struct { unsigned char featureVersion : 1; } _has;
}

@property (nonatomic) BOOL hasFeatureVersion;
@property (nonatomic) unsigned int featureVersion;
@property (retain, nonatomic) NSMutableArray *featureVectors;
@property (readonly, nonatomic) BOOL hasDeviceIdentifier;
@property (retain, nonatomic) NSString *deviceIdentifier;

+ (Class)featureVectorType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addFeatureVector:(id)a0;
- (void)clearFeatureVectors;
- (id)featureVectorAtIndex:(unsigned long long)a0;
- (unsigned long long)featureVectorsCount;

@end
