@interface AMDFeatureProvider : NSObject

+ (id)getProviderForSource:(id)a0 WithDomain:(id)a1;

- (id)getFeatureWithName:(id)a0 withColumn:(id)a1 error:(id *)a2;
- (void)storeFeatureData:(id)a0 error:(id *)a1;

@end
