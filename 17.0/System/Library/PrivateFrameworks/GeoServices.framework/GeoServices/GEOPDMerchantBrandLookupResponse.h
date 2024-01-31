@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDMerchantBrandLookupResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _abstractOfBrandMuids;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _childBrandMuids;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _variantBrandMuids;
    NSMutableArray *_geoHashs;
    unsigned long long _muid;
    unsigned long long _relatedGlobalBrandMuid;
    NSString *_scope;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isPrimaryVariant;
    struct { unsigned char has_muid : 1; unsigned char has_relatedGlobalBrandMuid : 1; unsigned char has_isPrimaryVariant : 1; unsigned char read_unknownFields : 1; unsigned char read_abstractOfBrandMuids : 1; unsigned char read_childBrandMuids : 1; unsigned char read_variantBrandMuids : 1; unsigned char read_geoHashs : 1; unsigned char read_scope : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasScope;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSMutableArray *geoHashs;
@property (readonly, nonatomic) unsigned long long childBrandMuidsCount;
@property (readonly, nonatomic) unsigned long long *childBrandMuids;
@property (readonly, nonatomic) unsigned long long variantBrandMuidsCount;
@property (readonly, nonatomic) unsigned long long *variantBrandMuids;
@property (nonatomic) BOOL hasIsPrimaryVariant;
@property (nonatomic) BOOL isPrimaryVariant;
@property (nonatomic) BOOL hasRelatedGlobalBrandMuid;
@property (nonatomic) unsigned long long relatedGlobalBrandMuid;
@property (readonly, nonatomic) unsigned long long abstractOfBrandMuidsCount;
@property (readonly, nonatomic) unsigned long long *abstractOfBrandMuids;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)geoHashType;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (id)geoHashAtIndex:(unsigned long long)a0;
- (unsigned long long)abstractOfBrandMuidAtIndex:(unsigned long long)a0;
- (void)addAbstractOfBrandMuid:(unsigned long long)a0;
- (void)addChildBrandMuid:(unsigned long long)a0;
- (void)addGeoHash:(id)a0;
- (void)addVariantBrandMuid:(unsigned long long)a0;
- (unsigned long long)childBrandMuidAtIndex:(unsigned long long)a0;
- (void)clearAbstractOfBrandMuids;
- (void)clearChildBrandMuids;
- (void)clearGeoHashs;
- (void)clearVariantBrandMuids;
- (unsigned long long)geoHashsCount;
- (void)setAbstractOfBrandMuids:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setChildBrandMuids:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setVariantBrandMuids:(unsigned long long *)a0 count:(unsigned long long)a1;
- (unsigned long long)variantBrandMuidAtIndex:(unsigned long long)a0;

@end
