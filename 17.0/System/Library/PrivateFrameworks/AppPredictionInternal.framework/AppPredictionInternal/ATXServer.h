@class NSXPCListener, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, ATXPredictionContextBuilderProtocol;

@interface ATXServer : NSObject <ATXClientXPCInterface, NSXPCListenerDelegate> {
    NSString *_cacheFileBasePath;
    NSString *_machServiceName;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableDictionary *_cacheFileDescriptors;
    id<ATXPredictionContextBuilderProtocol> _contextBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)consumerSubTypesToUpdate;

- (id)init;
- (void)updateBlendingLayerForAllConsumerSubTypes;
- (void)dealloc;
- (void)overwriteWebsitePredictionsCacheWithWebsiteString:(id)a0 contextType:(id)a1;
- (id)consumerSubTypesToUpdateWithRefreshRate:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (id)initWithCacheFileBasePath:(id)a0 machServiceName:(id)a1 predictionContextBuilder:(id)a2;
- (void)getAppPredictorAssetMappingDescriptionWithReply:(id /* block */)a0;
- (void)approvedSiriKitIntentsWithReply:(id /* block */)a0;
- (void)getWebsitePredictionsForContextType:(id)a0 limit:(unsigned long long)a1 reply:(id /* block */)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)generateNewAppPredictionsForConsumerSubType:(unsigned char)a0 intent:(id)a1 candidateBundleIdentifiers:(id)a2 candidateIntentTypeIdentifiers:(id)a3 featureCache:(id)a4 reply:(id /* block */)a5;
- (void)sortAppsByLaunches:(id)a0 reply:(id /* block */)a1;
- (void)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1 forPrimaryShortcuts:(BOOL)a2 reply:(id /* block */)a3;
- (BOOL)syncGenerateNewAppPredictionsForConsumerSubType:(unsigned char)a0 intent:(id)a1 candidateBundleIdentifiers:(id)a2 candidateIntentTypeIdentifiers:(id)a3 featureCache:(id)a4;
- (void).cxx_destruct;
- (BOOL)updateAppPredictionsWithConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (void)generateNewAppPredictionsForConsumerSubType:(unsigned char)a0 intent:(id)a1 candidateBundleIdentifiers:(id)a2 candidateIntentTypeIdentifiers:(id)a3 reply:(id /* block */)a4;
- (void)sendFeedbackForConsumerType:(unsigned long long)a0 consumerSubType:(unsigned char)a1 atxResponse:(id)a2 engagementType:(unsigned long long)a3 engagedBundleId:(id)a4 bundleIdsShown:(id)a5 explicitlyRejectedBundleIds:(id)a6 reply:(id /* block */)a7;
- (void)shouldPredictAppBundleId:(id)a0 reply:(id /* block */)a1;

@end
