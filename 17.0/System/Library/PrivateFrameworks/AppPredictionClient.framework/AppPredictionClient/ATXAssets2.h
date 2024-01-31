@interface ATXAssets2 : NSObject

+ (void)clearOverrides;
+ (id)rawDictionaryUsingMobileAssetsForResource:(id)a0 ofType:(id)a1;
+ (void)onUpdateRestartThisProcess;
+ (id)rawDictionaryForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1 specifiedABGroup:(id)a2;
+ (id)pathForResource:(id)a0 ofType:(id)a1;
+ (id)asset;
+ (void)updateMobileAssetMetadata;
+ (id)dictionaryForClass:(Class)a0;
+ (void)addOverridePath:(id)a0 forResource:(id)a1 ofType:(id)a2;
+ (id)rawDictionaryUsingTrialForResource:(id)a0 ofType:(id)a1;

@end
