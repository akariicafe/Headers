@class GEOMapsServerMetadata;

@interface GEOMapsNearbyWidget : PBCodable <NSCopying> {
    GEOMapsServerMetadata *_serverMetadata;
    int _tappedItemIndex;
    struct { unsigned char has_tappedItemIndex : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasServerMetadata;
@property (retain, nonatomic) GEOMapsServerMetadata *serverMetadata;
@property (nonatomic) BOOL hasTappedItemIndex;
@property (nonatomic) int tappedItemIndex;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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

@end
