@class NSString, ASDServiceBroker;

@interface ASDInstallAttribution : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)interface;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithServiceBroker:(id)a0;
- (void)addInstallWebAttributionParamsWithConfig:(id)a0 completionHandler:(id /* block */)a1;
- (void)addInstallAttributionParamsWithConfig:(id)a0;
- (void)addInstallAttributionParamsWithConfig:(id)a0 completionHandler:(id /* block */)a1;
- (void)endImpressionWithConfig:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerInstallAttributionPingbackForApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)startGhostFetchTaskWithCompletionHandler:(id /* block */)a0;
- (void)startImpressionWithConfig:(id)a0 completionHandler:(id /* block */)a1;
- (void)startPingbackTaskWithCompletionHandler:(id /* block */)a0;
- (void)updateConversionValueForInstallAttributionPingbackForApp:(id)a0 conversionValue:(id)a1 completionHandler:(id /* block */)a2;
- (void)updatePostbackConversionValuesForApp:(id)a0 fineConversionValue:(id)a1 coarseConversionValue:(id)a2 completionHandler:(id /* block */)a3;
- (void)updatePostbackConversionValuesForApp:(id)a0 fineConversionValue:(id)a1 coarseConversionValue:(id)a2 lockWindow:(BOOL)a3 completionHandler:(id /* block */)a4;

@end
