@class NSString;

@interface BMDeviceBluetooth : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int productID;
@property (nonatomic) BOOL hasProductID;
@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) int deviceType;
@property (readonly, nonatomic) int batteryLevelHeadphoneCase;
@property (nonatomic) BOOL hasBatteryLevelHeadphoneCase;
@property (readonly, nonatomic) int batteryLevelHeadphoneRight;
@property (nonatomic) BOOL hasBatteryLevelHeadphoneRight;
@property (readonly, nonatomic) int batteryLevelHeadphoneLeft;
@property (nonatomic) BOOL hasBatteryLevelHeadphoneLeft;
@property (readonly, nonatomic) BOOL appleAudioDevice;
@property (nonatomic) BOOL hasAppleAudioDevice;
@property (readonly, nonatomic) BOOL userWearing;
@property (nonatomic) BOOL hasUserWearing;
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
- (id)initWithAddress:(id)a0 name:(id)a1 productID:(id)a2 starting:(id)a3 deviceType:(int)a4 batteryLevelHeadphoneCase:(id)a5 batteryLevelHeadphoneRight:(id)a6 batteryLevelHeadphoneLeft:(id)a7 appleAudioDevice:(id)a8 userWearing:(id)a9;

@end
