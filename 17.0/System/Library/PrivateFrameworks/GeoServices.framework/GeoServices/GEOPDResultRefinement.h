@class GEOPDResultRefinementGuidesHome, PBDataReader, GEOPDResultRefinementMultiSelect, GEOPDResultRefinementRange, GEOPDResultRefinementToggle, GEOPDResultRefinementSort, PBUnknownFields;

@interface GEOPDResultRefinement : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDResultRefinementGuidesHome *_guidesHome;
    GEOPDResultRefinementMultiSelect *_multiSelect;
    GEOPDResultRefinementRange *_range;
    GEOPDResultRefinementSort *_sort;
    GEOPDResultRefinementToggle *_toggle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _resultRefinementType;
    struct { unsigned char has_resultRefinementType : 1; unsigned char read_unknownFields : 1; unsigned char read_guidesHome : 1; unsigned char read_multiSelect : 1; unsigned char read_range : 1; unsigned char read_sort : 1; unsigned char read_toggle : 1; unsigned char wrote_anyField : 1; } _flags;
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
