@class NSMutableArray;

@interface GEOMapsDestinationsWidget : PBCodable <NSCopying> {
    NSMutableArray *_proactiveItems;
    int _tappedItemIndex;
    BOOL _everExpanded;
    BOOL _initiallyExpanded;
    struct { unsigned char has_tappedItemIndex : 1; unsigned char has_everExpanded : 1; unsigned char has_initiallyExpanded : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *proactiveItems;
@property (nonatomic) BOOL hasInitiallyExpanded;
@property (nonatomic) BOOL initiallyExpanded;
@property (nonatomic) BOOL hasEverExpanded;
@property (nonatomic) BOOL everExpanded;
@property (nonatomic) BOOL hasTappedItemIndex;
@property (nonatomic) int tappedItemIndex;

+ (BOOL)isValid:(id)a0;
+ (Class)proactiveItemType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
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
- (void)addProactiveItem:(id)a0;
- (void)clearProactiveItems;
- (id)proactiveItemAtIndex:(unsigned long long)a0;
- (unsigned long long)proactiveItemsCount;

@end
