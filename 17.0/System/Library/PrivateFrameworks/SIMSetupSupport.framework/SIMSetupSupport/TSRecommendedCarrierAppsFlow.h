@class NSString, CoreTelephonyClient, NSMutableArray;

@interface TSRecommendedCarrierAppsFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    NSMutableArray *_carrierApps;
}

@property (retain) CoreTelephonyClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)a0;
- (id)_createFirstViewController;
- (id)_getValueFromCountryBunbleByKey:(id)a0;
- (void)_requestCarrierAppsWithCompletion:(id /* block */)a0;

@end
