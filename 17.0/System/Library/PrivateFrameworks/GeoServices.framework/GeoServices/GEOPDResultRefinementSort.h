@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDResultRefinementSort : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_displayName;
    NSMutableArray *_sorts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _defaultSelectedElementIndex;
    unsigned int _selectedElementIndex;
    struct { unsigned char has_defaultSelectedElementIndex : 1; unsigned char has_selectedElementIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_displayName : 1; unsigned char read_sorts : 1; unsigned char wrote_anyField : 1; } _flags;
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
