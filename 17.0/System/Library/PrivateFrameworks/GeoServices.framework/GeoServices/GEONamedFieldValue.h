@class GEONamedField, PBDataReader, NSString, PBUnknownFields;

@interface GEONamedFieldValue : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _doubleValue;
    long long _intValue;
    GEONamedField *_mapValue;
    NSString *_stringValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _boolValue;
    struct { unsigned char has_doubleValue : 1; unsigned char has_intValue : 1; unsigned char has_boolValue : 1; unsigned char read_unknownFields : 1; unsigned char read_mapValue : 1; unsigned char read_stringValue : 1; unsigned char wrote_anyField : 1; } _flags;
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
