@class NSString;

@interface TPSCallingLineIdRestrictionRequestController : TPSRequestController <CoreTelephonyClientSuppServicesDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)suppServicesEvent:(id)a0 event:(int)a1 settingsType:(int)a2 data:(id)a3;
- (void)executeRequest:(id)a0;
- (void)executeFetchForRequest:(id)a0;
- (void)executeSetForRequest:(id)a0;
- (void)respondWithSubscriptionContext:(id)a0 editable:(BOOL)a1 state:(long long)a2 error:(id)a3;

@end
