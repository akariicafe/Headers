@class PBUnknownFields;

@interface GEOPDClientRankingFeatureFunctionTypeLinear : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    float _featureMaxRelativeValue;
    float _featureMeanValue;
    float _featureWeight;
    struct { unsigned char has_featureMaxRelativeValue : 1; unsigned char has_featureMeanValue : 1; unsigned char has_featureWeight : 1; } _flags;
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
