@class PBDataReader, NSMutableArray, GEORPFeedbackFieldOption;

@interface GEORPFeedbackSingleSelectField : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_options;
    GEORPFeedbackFieldOption *_selected;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_options : 1; unsigned char read_selected : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *options;
@property (readonly, nonatomic) BOOL hasSelected;
@property (retain, nonatomic) GEORPFeedbackFieldOption *selected;

+ (BOOL)isValid:(id)a0;
+ (Class)optionsType;

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
- (void)clearOptions;
- (unsigned long long)optionsCount;

@end
