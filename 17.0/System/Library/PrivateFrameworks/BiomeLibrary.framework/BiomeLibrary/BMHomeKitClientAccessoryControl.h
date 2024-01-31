@class NSString, NSArray, BMHomeKitBase, BMHomeKitAccessoryState;

@interface BMHomeKitClientAccessoryControl : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BMHomeKitBase *base;
@property (readonly, nonatomic) NSString *accessoryUniqueIdentifier;
@property (readonly, nonatomic) BMHomeKitAccessoryState *accessoryState;
@property (readonly, nonatomic) NSString *serviceUniqueIdentifier;
@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) NSString *characteristicType;
@property (readonly, nonatomic) NSString *serviceGroupUniqueIdentifier;
@property (readonly, nonatomic) NSArray *zoneUniqueIdentifiers;
@property (readonly, nonatomic) NSString *roomUniqueIdentifier;
@property (readonly, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *roomName;
@property (readonly, nonatomic) NSString *serviceGroupName;
@property (readonly, nonatomic) NSArray *zoneNames;
@property (readonly, nonatomic) NSString *homeName;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_zoneUniqueIdentifiersJSONArray;
- (id)_zoneNamesJSONArray;
- (id)initWithBase:(id)a0 accessoryUniqueIdentifier:(id)a1 accessoryState:(id)a2 serviceUniqueIdentifier:(id)a3 serviceType:(id)a4 characteristicType:(id)a5 serviceGroupUniqueIdentifier:(id)a6 zoneUniqueIdentifiers:(id)a7 roomUniqueIdentifier:(id)a8 accessoryName:(id)a9 serviceName:(id)a10 roomName:(id)a11 serviceGroupName:(id)a12 zoneNames:(id)a13 homeName:(id)a14;

@end
