@class PBDataReader, NSString, GEOPDResultRefinementRangeContinuous, GEOPDResultRefinementRangeDiscrete, PBUnknownFields;

@interface GEOPDResultRefinementRange : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_displayName;
    GEOPDResultRefinementRangeContinuous *_rangeContinuous;
    GEOPDResultRefinementRangeDiscrete *_rangeDiscrete;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _rangeType;
    struct { unsigned char has_rangeType : 1; unsigned char read_unknownFields : 1; unsigned char read_displayName : 1; unsigned char read_rangeContinuous : 1; unsigned char read_rangeDiscrete : 1; unsigned char wrote_anyField : 1; } _flags;
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
