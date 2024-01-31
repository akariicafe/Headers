@class NSString, GEOPDSearchTokenSet, PBDataReader;

@interface GEOPDSearchKeywordIntent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_keyword;
    GEOPDSearchTokenSet *_tokenSet;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isOptionalKeyword;
    struct { unsigned char has_isOptionalKeyword : 1; unsigned char read_keyword : 1; unsigned char read_tokenSet : 1; unsigned char wrote_anyField : 1; } _flags;
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
