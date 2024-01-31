@class NSMutableArray, AWDCoreRoutineMapItem;

@interface AWDCoreRoutinePlace : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMapItem;
@property (retain, nonatomic) AWDCoreRoutineMapItem *mapItem;
@property (retain, nonatomic) NSMutableArray *distanceToOtherPlaces;

+ (Class)distanceToOtherPlacesType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addDistanceToOtherPlaces:(id)a0;
- (void)clearDistanceToOtherPlaces;
- (id)distanceToOtherPlacesAtIndex:(unsigned long long)a0;
- (unsigned long long)distanceToOtherPlacesCount;

@end
