@class PBUnknownFields, GEOPDResultRefinementRangeElement, PBDataReader;

@interface GEOPDResultRefinementRangeContinuous : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _currentMaxValue;
    double _currentMinValue;
    GEOPDResultRefinementRangeElement *_elementMaximum;
    GEOPDResultRefinementRangeElement *_elementMinimum;
    double _increment;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_currentMaxValue : 1; unsigned char has_currentMinValue : 1; unsigned char has_increment : 1; unsigned char read_unknownFields : 1; unsigned char read_elementMaximum : 1; unsigned char read_elementMinimum : 1; unsigned char wrote_anyField : 1; } _flags;
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
