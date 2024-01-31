@interface _LTDConfigurationService : NSObject

+ (id)cache;
+ (id)_queue;
+ (void)textStreamingConfigurationWithCompletion:(id /* block */)a0;
+ (void)flushCache;
+ (id)fileNameForType:(long long)a0;
+ (void)aneConfigurationWithCompletion:(id /* block */)a0;
+ (void)asrConfigurationWithCompletion:(id /* block */)a0;
+ (id)aneConfigurationWithError:(id *)a0;
+ (id)asrConfigurationWithError:(id *)a0;
+ (void)assetConfigurationWithCompletion:(id /* block */)a0;
+ (id)assetConfigurationWithError:(id *)a0;
+ (void)configurationForType:(long long)a0 completion:(id /* block */)a1;
+ (id)configurationForType:(long long)a0 error:(id *)a1;
+ (id)deserializedPlistContentsOf:(id)a0 error:(id *)a1;
+ (void)offlineConfigurationWithCompletion:(id /* block */)a0;
+ (id)offlineConfigurationWithError:(id *)a0;
+ (id)overlay:(id)a0 with:(id)a1;
+ (id)preferenceOverridesFor:(long long)a0;
+ (void)siriConfigurationWithCompletion:(id /* block */)a0;
+ (id)siriConfigurationWithError:(id *)a0;
+ (void)supportedLocalePairsForTask:(long long)a0 completion:(id /* block */)a1;
+ (id)supportedLocalePairsForTask:(long long)a0 error:(id *)a1;
+ (id)textStreamingConfigurationWithError:(id *)a0;
+ (id)urlForType:(long long)a0 source:(long long)a1;

@end
