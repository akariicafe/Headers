@class NSString, GEOPDSearchTokenSet, NSMutableArray, PBDataReader;

@interface GEOPDSearchChainIntent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _brandMuids;
    unsigned long long _brandMuid;
    NSMutableArray *_brandRelationshipInfos;
    NSMutableArray *_categoryIds;
    NSString *_chainId;
    NSMutableArray *_featureMaps;
    NSString *_geminiBrand;
    NSMutableArray *_prefCategoryIds;
    NSMutableArray *_relatedBrands;
    GEOPDSearchTokenSet *_tokenSet;
    NSString *_trigger;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isChainInSameCountry;
    BOOL _isLocalChain;
    BOOL _isFromBrandProfile;
    struct { unsigned char has_brandMuid : 1; unsigned char has_isChainInSameCountry : 1; unsigned char has_isLocalChain : 1; unsigned char has_isFromBrandProfile : 1; unsigned char read_brandMuids : 1; unsigned char read_brandRelationshipInfos : 1; unsigned char read_categoryIds : 1; unsigned char read_chainId : 1; unsigned char read_featureMaps : 1; unsigned char read_geminiBrand : 1; unsigned char read_prefCategoryIds : 1; unsigned char read_relatedBrands : 1; unsigned char read_tokenSet : 1; unsigned char read_trigger : 1; unsigned char wrote_anyField : 1; } _flags;
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
