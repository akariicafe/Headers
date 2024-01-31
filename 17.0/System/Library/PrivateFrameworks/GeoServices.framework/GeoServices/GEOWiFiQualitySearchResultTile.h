@class NSString, NSMutableArray, PBDataReader;

@interface GEOWiFiQualitySearchResultTile : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_ess;
    NSString *_etag;
    unsigned long long _tileKey;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_tileKey : 1; unsigned char read_ess : 1; unsigned char read_etag : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasTileKey;
@property (nonatomic) unsigned long long tileKey;
@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSMutableArray *ess;

+ (BOOL)isValid:(id)a0;
+ (Class)essType;

- (unsigned long long)essCount;
- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)addEss:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)essAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearEss;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
