@class NSMutableArray, PBDataReader;

@interface GEORPFeedbackMultiSelectField : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_options;
    NSMutableArray *_selecteds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_options : 1; unsigned char read_selecteds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *options;
@property (retain, nonatomic) NSMutableArray *selecteds;

+ (BOOL)isValid:(id)a0;
+ (Class)optionsType;
+ (Class)selectedType;

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
- (id)optionsAtIndex:(unsigned long long)a0;
- (void)addOptions:(id)a0;
- (void)addSelected:(id)a0;
- (void)clearOptions;
- (void)clearSelecteds;
- (unsigned long long)optionsCount;
- (id)selectedAtIndex:(unsigned long long)a0;
- (unsigned long long)selectedsCount;

@end
