@class NSString, BMPBAccessoryState, BMPBHomeKitClientBase, NSMutableArray;

@interface BMPBHomeKitClientAccessoryControlEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) BMPBHomeKitClientBase *base;
@property (readonly, nonatomic) BOOL hasAccessoryUniqueIdentifier;
@property (retain, nonatomic) NSString *accessoryUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasAccessoryState;
@property (retain, nonatomic) BMPBAccessoryState *accessoryState;
@property (readonly, nonatomic) BOOL hasServiceUniqueIdentifier;
@property (retain, nonatomic) NSString *serviceUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasServiceType;
@property (retain, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) BOOL hasCharacteristicType;
@property (retain, nonatomic) NSString *characteristicType;
@property (readonly, nonatomic) BOOL hasServiceGroupUniqueIdentifier;
@property (retain, nonatomic) NSString *serviceGroupUniqueIdentifier;
@property (retain, nonatomic) NSMutableArray *zoneUniqueIdentifiers;
@property (readonly, nonatomic) BOOL hasRoomUniqueIdentifier;
@property (retain, nonatomic) NSString *roomUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasAccessoryName;
@property (retain, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL hasRoomName;
@property (retain, nonatomic) NSString *roomName;
@property (readonly, nonatomic) BOOL hasServiceGroupName;
@property (retain, nonatomic) NSString *serviceGroupName;
@property (retain, nonatomic) NSMutableArray *zoneNames;
@property (readonly, nonatomic) BOOL hasHomeName;
@property (retain, nonatomic) NSString *homeName;

+ (Class)zoneNamesType;
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
- (void)addZoneUniqueIdentifiers:(id)a0;
- (void)clearZoneUniqueIdentifiers;
- (id)zoneUniqueIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)zoneUniqueIdentifiersCount;

@end
