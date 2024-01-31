@interface SSAuthorizationMetricsController : NSObject

+ (id)_clientIDForAccount:(id)a0 orUserID:(id)a1;
+ (id)_clientIdForMetrics;
+ (id)_dialogEventForBiometricAuthorizationWithDialogId:(id)a0 buyParams:(id)a1 matchState:(long long)a2 topicName:(id)a3 userAgent:(id)a4;
+ (id)_dialogEventForBiometricOptInWithResult:(BOOL)a0 message:(id)a1 topicName:(id)a2 userAgent:(id)a3 error:(id)a4;
+ (id)_dialogEventForPasswordAuthorizationWithDialogId:(id)a0 buyParams:(id)a1 topicName:(id)a2 userAgent:(id)a3;
+ (id)_dialogEventForPaymentSheetPresentationErrorWithBuyParams:(id)a0 error:(id)a1;
+ (id)_mtTopicForBuyParams:(id)a0;
+ (id)authorizationDialogEventForParameters:(id)a0;
+ (id)dialogIdForMetricsDictionary:(id)a0;
+ (id)userActionDictionaryForBiometricMatchState:(unsigned long long)a0 didBiometricsLockout:(BOOL)a1;
+ (id)userActionDictionaryForUserAction:(long long)a0 didBiometricsLockout:(BOOL)a1;

@end
