@class NSString, HKProxyProvider;

@interface HKClinicalSharingClient : NSObject <_HKXPCExportable> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)initWithConnection:(id)a0;
- (void)_fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)shareHealthDataWithOptions:(unsigned long long)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)submitOnboardingAnalyticsForStepIdentifier:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)gatherQueryDiagnosticsWithOptions:(unsigned long long)a0 date:(id)a1 completion:(id /* block */)a2;
- (void)scheduleSharingHealthDataWithReason:(long long)a0 completion:(id /* block */)a1;
- (void)shareHealthDataWithOptions:(unsigned long long)a0 reason:(long long)a1 date:(id)a2 completion:(id /* block */)a3;
- (void)submitDailyAnalyticsWithCompletion:(id /* block */)a0;
- (void)uploadDAIIfNeededWithOptions:(unsigned long long)a0 reason:(long long)a1 completion:(id /* block */)a2;

@end
