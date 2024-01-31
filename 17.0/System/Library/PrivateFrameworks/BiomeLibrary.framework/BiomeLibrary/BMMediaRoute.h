@class NSString, NSArray;

@interface BMMediaRoute : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int routeType;
@property (readonly, nonatomic) NSString *groupLeaderOutputDeviceID;
@property (readonly, nonatomic) BOOL isRemoteControl;
@property (nonatomic) BOOL hasIsRemoteControl;
@property (readonly, nonatomic) NSArray *outputDevices;
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
- (id)_outputDevicesJSONArray;
- (id)initWithRouteType:(int)a0 groupLeaderOutputDeviceID:(id)a1 isRemoteControl:(id)a2 outputDevices:(id)a3;

@end
