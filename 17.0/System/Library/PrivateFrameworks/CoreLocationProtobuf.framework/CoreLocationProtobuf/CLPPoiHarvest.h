@class CLPPoiTriggerEvent, NSMutableArray;

@interface CLPPoiHarvest : PBCodable <NSCopying>

@property (retain, nonatomic) CLPPoiTriggerEvent *triggerEvent;
@property (retain, nonatomic) NSMutableArray *locations;
@property (retain, nonatomic) NSMutableArray *accessPoints;

+ (Class)locationsType;
+ (Class)accessPointsType;

- (void)clearLocations;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addLocations:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)accessPointsCount;
- (void)clearAccessPoints;
- (unsigned long long)locationsCount;
- (id)locationsAtIndex:(unsigned long long)a0;
- (void)addAccessPoints:(id)a0;
- (id)accessPointsAtIndex:(unsigned long long)a0;

@end
