@interface PKPaymentNotificationAppURLHelper : NSObject

+ (id)_appURLForNotificationOfType:(id)a0 paymentPass:(id)a1 serviceIdentifier:(id)a2 appLaunchToken:(id)a3 pathSuffix:(id)a4 usingDeviceAccountNumber:(BOOL)a5;
+ (id)appURLForMessageNotification:(id)a0 pass:(id)a1 appLaunchToken:(id)a2;
+ (id)appURLForTransactionNotification:(id)a0 excludeTransactionIdentifier:(BOOL)a1 pass:(id)a2 pathSuffix:(id)a3 appLaunchToken:(id)a4;
+ (id)appURLForTransactionNotification:(id)a0 pass:(id)a1 appLaunchToken:(id)a2;
+ (BOOL)applicationExistsToHandleNotificationsForPaymentPass:(id)a0;

@end
