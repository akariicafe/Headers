@class NSString, BMHomeKitBase, NSArray;

@interface BMHomeKitClientMediaAccessoryControl : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BMHomeKitBase *base;
@property (readonly, nonatomic) NSString *accessoryUniqueIdentifier;
@property (readonly, nonatomic) NSArray *accessoryState;
@property (readonly, nonatomic) NSString *accessoryMediaRouteIdentifier;
@property (readonly, nonatomic) NSArray *zoneUniqueIdentifiers;
@property (readonly, nonatomic) NSString *roomUniqueIdentifier;
@property (readonly, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) NSString *roomName;
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
- (id)_accessoryStateJSONArray;
- (id)_zoneNamesJSONArray;
- (id)initWithBase:(id)a0 accessoryUniqueIdentifier:(id)a1 accessoryState:(id)a2 accessoryMediaRouteIdentifier:(id)a3 zoneUniqueIdentifiers:(id)a4 roomUniqueIdentifier:(id)a5 accessoryName:(id)a6 roomName:(id)a7 zoneNames:(id)a8 homeName:(id)a9;

@end
