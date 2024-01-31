@class NSMutableArray, PBDataReader;

@interface GEOPDPlaceSummaryLayoutTemplateEntry : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _trailingEntityTypeOrders;
    NSMutableArray *_lines;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _platformType;
    int _trailingEntityType;
    struct { unsigned char has_platformType : 1; unsigned char has_trailingEntityType : 1; unsigned char read_trailingEntityTypeOrders : 1; unsigned char read_lines : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasPlatformType;
@property (nonatomic) int platformType;
@property (retain, nonatomic) NSMutableArray *lines;
@property (nonatomic) BOOL hasTrailingEntityType;
@property (nonatomic) int trailingEntityType;
@property (readonly, nonatomic) unsigned long long trailingEntityTypeOrdersCount;
@property (readonly, nonatomic) int *trailingEntityTypeOrders;

+ (BOOL)isValid:(id)a0;
+ (Class)lineType;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)linesCount;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsTrailingEntityTypeOrders:(id)a0;
- (int)StringAsPlatformType:(id)a0;
- (int)StringAsTrailingEntityType:(id)a0;
- (int)trailingEntityTypeOrderAtIndex:(unsigned long long)a0;
- (void)addLine:(id)a0;
- (void)addTrailingEntityTypeOrder:(int)a0;
- (void)clearLines;
- (void)clearTrailingEntityTypeOrders;
- (id)lineAtIndex:(unsigned long long)a0;
- (id)platformTypeAsString:(int)a0;
- (void)setTrailingEntityTypeOrders:(int *)a0 count:(unsigned long long)a1;
- (id)trailingEntityTypeAsString:(int)a0;
- (id)trailingEntityTypeOrdersAsString:(int)a0;

@end
