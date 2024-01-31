@class NSString, BMIntelligencePlatformFeatureStoreFeatureVector;

@interface BMIntelligencePlatformFeatureStore : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *labelName;
@property (readonly, nonatomic) NSString *labelValue;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int category;
@property (readonly, nonatomic) BMIntelligencePlatformFeatureStoreFeatureVector *featureVector;
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
- (id)initWithLabelName:(id)a0 labelValue:(id)a1 taskName:(id)a2 category:(int)a3 featureVector:(id)a4;

@end
