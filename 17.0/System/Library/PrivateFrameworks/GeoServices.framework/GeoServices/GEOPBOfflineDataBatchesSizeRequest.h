@class GEOMapRegion, NSMutableArray, PBDataReader;

@interface GEOPBOfflineDataBatchesSizeRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    GEOMapRegion *_region;
    NSMutableArray *_supportedLanguages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_region : 1; unsigned char read_supportedLanguages : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasRegion;
@property (retain, nonatomic) GEOMapRegion *region;
@property (retain, nonatomic) NSMutableArray *supportedLanguages;

+ (BOOL)isValid:(id)a0;
+ (Class)supportedLanguageType;

- (unsigned long long)supportedLanguagesCount;
- (id)init;
- (unsigned long long)hash;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (void)addSupportedLanguage:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)clearSupportedLanguages;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)supportedLanguageAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
