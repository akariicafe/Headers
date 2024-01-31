@class NSMutableArray, PBUnknownFields;

@interface GEOPDResultRefinementRangeDiscrete : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_elements;
    unsigned int _selectedMaxElementIndex;
    unsigned int _selectedMinElementIndex;
    struct { unsigned char has_selectedMaxElementIndex : 1; unsigned char has_selectedMinElementIndex : 1; } _flags;
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
