@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchBrandCountInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_brandKey;
    NSMutableArray *_brandRelationships;
    NSMutableArray *_countryOccurrences;
    NSString *_legacyBrandName;
    unsigned long long _muid;
    unsigned long long _parentMuid;
    unsigned long long _total;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_muid : 1; unsigned char has_parentMuid : 1; unsigned char has_total : 1; unsigned char read_brandKey : 1; unsigned char read_brandRelationships : 1; unsigned char read_countryOccurrences : 1; unsigned char read_legacyBrandName : 1; unsigned char wrote_anyField : 1; } _flags;
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
