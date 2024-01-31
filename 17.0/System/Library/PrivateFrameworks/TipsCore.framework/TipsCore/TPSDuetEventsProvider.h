@class TPSDuetDataProvider;

@interface TPSDuetEventsProvider : TPSEventsProvider {
    TPSDuetDataProvider *_duetDataProvider;
}

+ (id)_eventSinceDateForContextualEvent:(id)a0;
+ (unsigned long long)_limitForDeliveryDuetEvent:(id)a0;
+ (id)_predicateForDeliveryDuetEvent:(id)a0 stateResults:(id)a1;
+ (id)_predicateForDeliveryDuetEventUserInfo:(id)a0;
+ (BOOL)_shouldQueryRemoteDevicesForEvent:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)deregisterAllEventsForCallback;
- (void)_deregisterToGetNotifiedWithEvents:(id)a0;
- (id)_duetRegistrationIDForEvent:(id)a0;
- (id)_duetWakingRegistrationIDForEvent:(id)a0;
- (void)_processProviderResults:(id)a0 forEvent:(id)a1;
- (void)_queryDuetWithEvent:(id)a0 limit:(unsigned long long)a1 stateResults:(id)a2 completion:(id /* block */)a3;
- (void)_queryDuetWithEvents:(id)a0;
- (void)_registerToGetNotifiedWithEvents:(id)a0 clientIdentifier:(id)a1;
- (id)_resolveGroupByKeyPathsForEvent:(id)a0;
- (void)deregisterEventsForCallback:(id)a0;
- (id)initWithDuetDataProvider:(id)a0;
- (void)queryEvents:(id)a0;
- (void)registerEventsForCallback:(id)a0;
- (void)registerEventsForWakingCallback:(id)a0 clientIdentifier:(id)a1;

@end
