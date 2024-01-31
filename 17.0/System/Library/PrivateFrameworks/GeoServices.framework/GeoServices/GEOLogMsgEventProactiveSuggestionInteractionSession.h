@class NSMutableArray;

@interface GEOLogMsgEventProactiveSuggestionInteractionSession : PBCodable <NSCopying> {
    NSMutableArray *_proactiveItems;
    int _duration;
    int _interactedItemIndex;
    int _listType;
    struct { unsigned char has_duration : 1; unsigned char has_interactedItemIndex : 1; unsigned char has_listType : 1; } _flags;
}

@property (nonatomic) BOOL hasListType;
@property (nonatomic) int listType;
@property (retain, nonatomic) NSMutableArray *proactiveItems;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) int duration;
@property (nonatomic) BOOL hasInteractedItemIndex;
@property (nonatomic) int interactedItemIndex;

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
- (int)StringAsListType:(id)a0;
- (void)addProactiveItem:(id)a0;
- (void)clearProactiveItems;
- (id)listTypeAsString:(int)a0;
- (id)proactiveItemAtIndex:(unsigned long long)a0;
- (unsigned long long)proactiveItemsCount;

@end
