@class PBDataReader, GEOPDGuidesHomeResultFilterTypeConcept, NSMutableArray, PBUnknownFields;

@interface GEOPDGuidesHomeResultFilter : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDGuidesHomeResultFilterTypeConcept *_filterConcept;
    NSMutableArray *_subFilters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _filterType;
    struct { unsigned char has_filterType : 1; unsigned char read_unknownFields : 1; unsigned char read_filterConcept : 1; unsigned char read_subFilters : 1; unsigned char wrote_anyField : 1; } _flags;
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
