@interface SNMemoizedMLModel : NSObject <MLCustomModel> {
    void /* unknown type, empty encoding */ wrappedModel;
    void /* unknown type, empty encoding */ maxCacheSize;
    void /* unknown type, empty encoding */ cacheStorage;
    void /* unknown type, empty encoding */ cacheAccessRecency;
}

+ (id)withWrappedModel:(id)a0;
+ (id)withWrappedModel:(id)a0 maxCacheSize:(long long)a1;

- (id)init;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)modelDescription;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;
- (id)initWithWrappedModel:(id)a0;
- (id)initWithWrappedModel:(id)a0 maxCacheSize:(long long)a1;

@end
