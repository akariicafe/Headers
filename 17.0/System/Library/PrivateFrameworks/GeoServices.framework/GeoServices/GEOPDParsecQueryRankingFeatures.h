@class PBUnknownFields;

@interface GEOPDParsecQueryRankingFeatures : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _geoScore;
    double _poiScore;
    struct { unsigned char has_geoScore : 1; unsigned char has_poiScore : 1; } _flags;
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
