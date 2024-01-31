@class NSString, BMPBHomeKitClientBase, NSMutableArray;

@interface BMPBHomeKitClientMediaAccessoryControlEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) BMPBHomeKitClientBase *base;
@property (readonly, nonatomic) BOOL hasAccessoryUniqueIdentifier;
@property (retain, nonatomic) NSString *accessoryUniqueIdentifier;
@property (retain, nonatomic) NSMutableArray *accessoryStates;
@property (readonly, nonatomic) BOOL hasAccessoryMediaRouteIdentifier;
@property (retain, nonatomic) NSString *accessoryMediaRouteIdentifier;
@property (retain, nonatomic) NSMutableArray *zoneUniqueIdentifiers;
@property (readonly, nonatomic) BOOL hasRoomUniqueIdentifier;
@property (retain, nonatomic) NSString *roomUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasAccessoryName;
@property (retain, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) BOOL hasRoomName;
@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSMutableArray *zoneNames;
@property (readonly, nonatomic) BOOL hasHomeName;
@property (retain, nonatomic) NSString *homeName;

+ (Class)zoneNamesType;
+ (Class)accessoryStateType;
+ (Class)zoneUniqueIdentifiersType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addZoneNames:(id)a0;
- (void)clearZoneNames;
- (id)zoneNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)zoneNamesCount;
- (id)accessoryStateAtIndex:(unsigned long long)a0;
- (unsigned long long)accessoryStatesCount;
- (void)addAccessoryState:(id)a0;
- (void)addZoneUniqueIdentifiers:(id)a0;
- (void)clearAccessoryStates;
- (void)clearZoneUniqueIdentifiers;
- (id)zoneUniqueIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)zoneUniqueIdentifiersCount;

@end
