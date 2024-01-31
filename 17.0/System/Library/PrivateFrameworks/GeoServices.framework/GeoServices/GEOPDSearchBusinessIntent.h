@class NSString, GEOPDSearchTokenSet, GEOLatLng, NSMutableArray, PBDataReader;

@interface GEOPDSearchBusinessIntent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _keywordMuids;
    unsigned long long _businessId;
    GEOLatLng *_center;
    NSMutableArray *_keywordMappings;
    NSString *_name;
    GEOPDSearchTokenSet *_tokenSet;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _businessType;
    struct { unsigned char has_businessId : 1; unsigned char has_businessType : 1; unsigned char read_keywordMuids : 1; unsigned char read_center : 1; unsigned char read_keywordMappings : 1; unsigned char read_name : 1; unsigned char read_tokenSet : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
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
