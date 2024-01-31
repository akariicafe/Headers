@class NSMutableDictionary;

@interface AMDMemoryBasedProvider : AMDFeatureProvider

@property (retain, nonatomic) NSMutableDictionary *featureStore;

+ (id)sharedProvider;
+ (BOOL)isValidFeatureObject:(id)a0;
+ (BOOL)isValidMultiArray:(id)a0;

- (void).cxx_destruct;
- (id)getFeatureWithName:(id)a0 withColumn:(id)a1 error:(id *)a2;
- (void)storeFeatureData:(id)a0 error:(id *)a1;

@end
