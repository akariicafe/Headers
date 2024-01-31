@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchGeoParsingResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_droppedTokens;
    double _labelScore;
    NSMutableArray *_labelings;
    NSString *_taggerModelId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _tagSource;
    struct { unsigned char has_labelScore : 1; unsigned char has_tagSource : 1; unsigned char read_droppedTokens : 1; unsigned char read_labelings : 1; unsigned char read_taggerModelId : 1; unsigned char wrote_anyField : 1; } _flags;
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
