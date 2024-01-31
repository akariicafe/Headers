@class NSString, NSArray, NSData, BMHomeKitClientBase, NSNumber;

@interface BMHomeKitClientAccessoryControlEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSString *accessoryName;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *roomName;
@property (readonly, copy, nonatomic) NSString *serviceGroupName;
@property (readonly, copy, nonatomic) NSArray *zoneNames;
@property (readonly, copy, nonatomic) NSString *homeName;
@property (readonly, copy, nonatomic) BMHomeKitClientBase *base;
@property (readonly, copy, nonatomic) NSString *accessoryUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *accessoryStateString;
@property (readonly, copy, nonatomic) NSNumber *accessoryStateNumber;
@property (readonly, copy, nonatomic) NSData *accessoryStateData;
@property (readonly, copy, nonatomic) NSString *serviceUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *serviceType;
@property (readonly, copy, nonatomic) NSString *characteristicType;
@property (readonly, copy, nonatomic) NSString *serviceGroupUniqueIdentifier;
@property (readonly, copy, nonatomic) NSArray *zoneUniqueIdentifiers;
@property (readonly, copy, nonatomic) NSString *roomUniqueIdentifier;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBase:(id)a0 dataAccessoryState:(id)a1 accessoryUniqueIdentifier:(id)a2 serviceUniqueIdentifier:(id)a3 serviceType:(id)a4 characteristicType:(id)a5 serviceGroupUniqueIdentifier:(id)a6 zoneUniqueIdentifiers:(id)a7 roomUniqueIdentifier:(id)a8 accessoryName:(id)a9 serviceName:(id)a10 roomName:(id)a11 serviceGroupName:(id)a12 zoneNames:(id)a13 homeName:(id)a14;
- (id)initWithBase:(id)a0 numberAccessoryState:(id)a1 accessoryUniqueIdentifier:(id)a2 serviceUniqueIdentifier:(id)a3 serviceType:(id)a4 characteristicType:(id)a5 serviceGroupUniqueIdentifier:(id)a6 zoneUniqueIdentifiers:(id)a7 roomUniqueIdentifier:(id)a8 accessoryName:(id)a9 serviceName:(id)a10 roomName:(id)a11 serviceGroupName:(id)a12 zoneNames:(id)a13 homeName:(id)a14;
- (id)initWithBase:(id)a0 stringAccessoryState:(id)a1 accessoryUniqueIdentifier:(id)a2 serviceUniqueIdentifier:(id)a3 serviceType:(id)a4 characteristicType:(id)a5 serviceGroupUniqueIdentifier:(id)a6 zoneUniqueIdentifiers:(id)a7 roomUniqueIdentifier:(id)a8 accessoryName:(id)a9 serviceName:(id)a10 roomName:(id)a11 serviceGroupName:(id)a12 zoneNames:(id)a13 homeName:(id)a14;

@end
