@class PBUnknownFields;

@interface GEOPDClientRankingFeatureFunctionTypeDiscrete : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    float _featureValueThresholdHigh;
    float _featureValueThresholdLow;
    float _featureWeightHigh;
    float _featureWeightLow;
    struct { unsigned char has_featureValueThresholdHigh : 1; unsigned char has_featureValueThresholdLow : 1; unsigned char has_featureWeightHigh : 1; unsigned char has_featureWeightLow : 1; } _flags;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
