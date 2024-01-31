@class NSString, NSMutableArray, PBDataReader;

@interface GEOLPRPowerType : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_key;
    NSMutableArray *_subtitles;
    NSMutableArray *_subtypes;
    NSMutableArray *_titles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_key : 1; unsigned char read_subtitles : 1; unsigned char read_subtypes : 1; unsigned char read_titles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *titles;
@property (retain, nonatomic) NSMutableArray *subtitles;
@property (retain, nonatomic) NSMutableArray *subtypes;

+ (Class)titleType;
+ (BOOL)isValid:(id)a0;
+ (Class)subtitleType;
+ (Class)subtypesType;

- (id)init;
- (unsigned long long)hash;
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
- (void)addSubtitle:(id)a0;
- (void)addSubtypes:(id)a0;
- (void)addTitle:(id)a0;
- (void)clearSubtitles;
- (void)clearSubtypes;
- (void)clearTitles;
- (id)subtitleAtIndex:(unsigned long long)a0;
- (unsigned long long)subtitlesCount;
- (id)subtypesAtIndex:(unsigned long long)a0;
- (unsigned long long)subtypesCount;
- (id)titleAtIndex:(unsigned long long)a0;
- (unsigned long long)titlesCount;

@end
