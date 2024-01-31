@interface GEOProactiveItem : PBCodable <NSCopying> {
    int _proactiveItemType;
    int _timeSinceStart;
    BOOL _deleted;
    BOOL _edited;
    BOOL _shared;
    BOOL _tapped;
    BOOL _visible;
    struct { unsigned char has_proactiveItemType : 1; unsigned char has_timeSinceStart : 1; unsigned char has_deleted : 1; unsigned char has_edited : 1; unsigned char has_shared : 1; unsigned char has_tapped : 1; unsigned char has_visible : 1; } _flags;
}

@property (nonatomic) BOOL hasProactiveItemType;
@property (nonatomic) int proactiveItemType;
@property (nonatomic) BOOL hasTimeSinceStart;
@property (nonatomic) int timeSinceStart;
@property (nonatomic) BOOL hasVisible;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL hasTapped;
@property (nonatomic) BOOL tapped;
@property (nonatomic) BOOL hasShared;
@property (nonatomic) BOOL shared;
@property (nonatomic) BOOL hasEdited;
@property (nonatomic) BOOL edited;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsProactiveItemType:(id)a0;
- (id)proactiveItemTypeAsString:(int)a0;

@end
