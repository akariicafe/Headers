@class NSString;

@interface BMContextualUnderstandingAmbientLight : BMEventBase <BMStoreData>

@property (readonly, nonatomic) double ambientLightColorComponent0;
@property (nonatomic) BOOL hasAmbientLightColorComponent0;
@property (readonly, nonatomic) double ambientLightColorComponent1;
@property (nonatomic) BOOL hasAmbientLightColorComponent1;
@property (readonly, nonatomic) double ambientLightColorComponent2;
@property (nonatomic) BOOL hasAmbientLightColorComponent2;
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
- (id)initWithAmbientLightColorComponent0:(id)a0 ambientLightColorComponent1:(id)a1 ambientLightColorComponent2:(id)a2;
- (BOOL)isEqual:(id)a0;

@end
