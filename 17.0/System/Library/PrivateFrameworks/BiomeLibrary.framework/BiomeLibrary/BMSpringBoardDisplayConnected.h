@class NSString;

@interface BMSpringBoardDisplayConnected : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) BOOL mirroringMode;
@property (nonatomic) BOOL hasMirroringMode;
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
- (id)initWithStarting:(id)a0 deviceName:(id)a1 uniqueId:(id)a2 productName:(id)a3 mirroringMode:(id)a4;

@end
