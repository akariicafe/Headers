@class NSString, NSArray;

@interface BMDeviceBluetoothGATTSession : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSArray *serviceUUID;
@property (readonly, nonatomic) NSString *sessionType;
@property (readonly, nonatomic) int sessionState;
@property (readonly, nonatomic) BOOL supportsBackgrounding;
@property (nonatomic) BOOL hasSupportsBackgrounding;
@property (readonly, nonatomic) BOOL supportsStateRestoration;
@property (nonatomic) BOOL hasSupportsStateRestoration;
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
- (id)initWithBundleID:(id)a0 serviceUUID:(id)a1 sessionType:(id)a2 sessionState:(int)a3 supportsBackgrounding:(id)a4 supportsStateRestoration:(id)a5;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_serviceUUIDJSONArray;

@end
