@class NSString;

@interface BMDeviceCellularQualityStatus : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) int rat;
@property (readonly, nonatomic) int deviceRegistrationState;
@property (readonly, nonatomic) int quality;
@property (nonatomic) BOOL hasQuality;
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
- (BOOL)isEqual:(id)a0;
- (id)initWithStarting:(id)a0 rat:(int)a1 deviceRegistrationState:(int)a2 quality:(id)a3;

@end
