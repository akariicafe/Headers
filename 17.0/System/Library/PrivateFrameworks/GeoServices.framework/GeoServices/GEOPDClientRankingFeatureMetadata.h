@class PBDataReader, GEOPDClientRankingFeatureTypeSource, GEOPDClientRankingFeatureTypeResult, GEOPDClientRankingFeatureFunctionTypeDiscrete, GEOPDClientRankingFeatureFunctionTypeLinear, GEOPDClientRankingFeatureTypeComposite, PBUnknownFields;

@interface GEOPDClientRankingFeatureMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDClientRankingFeatureTypeComposite *_featureTypeComposite;
    GEOPDClientRankingFeatureTypeResult *_featureTypeResult;
    GEOPDClientRankingFeatureTypeSource *_featureTypeSource;
    GEOPDClientRankingFeatureFunctionTypeDiscrete *_functionTypeDiscrete;
    GEOPDClientRankingFeatureFunctionTypeLinear *_functionTypeLinear;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _featureType;
    int _functionType;
    struct { unsigned char has_featureType : 1; unsigned char has_functionType : 1; unsigned char read_unknownFields : 1; unsigned char read_featureTypeComposite : 1; unsigned char read_featureTypeResult : 1; unsigned char read_featureTypeSource : 1; unsigned char read_functionTypeDiscrete : 1; unsigned char read_functionTypeLinear : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
