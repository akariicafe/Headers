@class PBUnknownFields, NSString, PBDataReader;

@interface GEOPDResultRefinementRangeElement : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_displayName;
    NSString *_refinementKey;
    NSString *_stringValue;
    double _value;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _valueType;
    BOOL _isEnabled;
    struct { unsigned char has_value : 1; unsigned char has_valueType : 1; unsigned char has_isEnabled : 1; unsigned char read_unknownFields : 1; unsigned char read_displayName : 1; unsigned char read_refinementKey : 1; unsigned char read_stringValue : 1; unsigned char wrote_anyField : 1; } _flags;
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
