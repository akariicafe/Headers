@class PeoplePredictionDataFeatureValue;

@interface PeoplePredictionDataFeature : PBCodable <NSCopying> {
    struct { unsigned char eventVolumeToComputeFeature : 1; unsigned char featureFreshnessInHours : 1; unsigned char featureItselfVersion : 1; unsigned char featureName : 1; unsigned char timeSpentToComputeFeature : 1; } _has;
}

@property (nonatomic) BOOL hasFeatureName;
@property (nonatomic) int featureName;
@property (readonly, nonatomic) BOOL hasFeatureValue;
@property (retain, nonatomic) PeoplePredictionDataFeatureValue *featureValue;
@property (nonatomic) BOOL hasFeatureItselfVersion;
@property (nonatomic) unsigned int featureItselfVersion;
@property (nonatomic) BOOL hasFeatureFreshnessInHours;
@property (nonatomic) unsigned int featureFreshnessInHours;
@property (nonatomic) BOOL hasEventVolumeToComputeFeature;
@property (nonatomic) unsigned int eventVolumeToComputeFeature;
@property (nonatomic) BOOL hasTimeSpentToComputeFeature;
@property (nonatomic) unsigned int timeSpentToComputeFeature;

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
- (int)StringAsFeatureName:(id)a0;
- (id)featureNameAsString:(int)a0;

@end
