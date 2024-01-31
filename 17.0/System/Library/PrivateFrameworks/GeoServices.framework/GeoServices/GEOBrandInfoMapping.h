@class NSMutableArray, PBDataReader;

@interface GEOBrandInfoMapping : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { BOOL *list; unsigned long long count; unsigned long long size; } _isSuggesteds;
    unsigned long long _globalBrandId;
    NSMutableArray *_isoCountryCodes;
    NSMutableArray *_scopedBrandInfos;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_globalBrandId : 1; unsigned char read_isSuggesteds : 1; unsigned char read_isoCountryCodes : 1; unsigned char read_scopedBrandInfos : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasGlobalBrandId;
@property (nonatomic) unsigned long long globalBrandId;
@property (retain, nonatomic) NSMutableArray *scopedBrandInfos;
@property (retain, nonatomic) NSMutableArray *isoCountryCodes;
@property (readonly, nonatomic) unsigned long long isSuggestedsCount;
@property (readonly, nonatomic) BOOL *isSuggesteds;

+ (BOOL)isValid:(id)a0;
+ (Class)isoCountryCodeType;
+ (Class)scopedBrandInfoType;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addIsSuggested:(BOOL)a0;
- (void)addIsoCountryCode:(id)a0;
- (void)addScopedBrandInfo:(id)a0;
- (void)clearIsSuggesteds;
- (void)clearIsoCountryCodes;
- (void)clearScopedBrandInfos;
- (BOOL)isSuggestedAtIndex:(unsigned long long)a0;
- (id)isoCountryCodeAtIndex:(unsigned long long)a0;
- (unsigned long long)isoCountryCodesCount;
- (id)scopedBrandInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)scopedBrandInfosCount;
- (void)setIsSuggesteds:(BOOL *)a0 count:(unsigned long long)a1;

@end
