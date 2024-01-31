@interface UAFInstrumentationProvider : NSObject

+ (id)_constructNamespaceStatusEventForNamespace:(unsigned int)a0 withClient:(id)a1;
+ (id)_constructSelfAssetSet:(id)a0 storeManager:(id)a1;
+ (int)_getAssetSource:(id)a0;
+ (void)logAvailableAssetDailyStatus;
+ (id)logSubscriptionsStatus;
+ (void)logUAFAssetSetDailyStatus:(id)a0 assetSetID:(id)a1;

@end
