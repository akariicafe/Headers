@class NSString, PBDataReader;

@interface GEOPDSearchQueryDirectionsIntentMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_directionPhrase;
    NSString *_place1;
    NSString *_place2;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _intentType;
    int _preposition1;
    int _preposition2;
    int _type;
    struct { unsigned char has_intentType : 1; unsigned char has_preposition1 : 1; unsigned char has_preposition2 : 1; unsigned char has_type : 1; unsigned char read_directionPhrase : 1; unsigned char read_place1 : 1; unsigned char read_place2 : 1; unsigned char wrote_anyField : 1; } _flags;
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
