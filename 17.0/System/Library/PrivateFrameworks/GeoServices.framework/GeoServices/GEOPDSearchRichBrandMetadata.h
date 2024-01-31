@class GEOPDSearchBrandDensity, NSMutableArray, PBDataReader;

@interface GEOPDSearchRichBrandMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDSearchBrandDensity *_brandDensity;
    NSMutableArray *_brandRelationshipInfos;
    unsigned long long _muid;
    NSMutableArray *_preferredCategorys;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_muid : 1; unsigned char read_brandDensity : 1; unsigned char read_brandRelationshipInfos : 1; unsigned char read_preferredCategorys : 1; unsigned char wrote_anyField : 1; } _flags;
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
