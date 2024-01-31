@interface AMSPaymentSheetMetricsEvent : AMSMetricsEvent

+ (id)_propertyValueClassesForKnownProperties;
+ (id)_timestamp;
+ (id)dictionaryForBiometricMatchState:(long long)a0 didBiometricsLockout:(BOOL)a1 biometricsType:(long long)a2;
+ (id)dictionaryForCancellationEvent:(unsigned long long)a0 didBiometricsLockout:(BOOL)a1;
+ (id)dictionaryForUserAction:(long long)a0 didBiometricsLockout:(BOOL)a1;

- (void)addUserActions:(id)a0;
- (void)addBiometricMatchState:(long long)a0;
- (void)addBiometricsState:(long long)a0;
- (void)addClientMetadataForPaymentSheetRequest:(id)a0;
- (void)addClientMetadataForPurchaseInfo:(id)a0 metricsDictionary:(id)a1;
- (void)addDualActionSuccess:(BOOL)a0;

@end
