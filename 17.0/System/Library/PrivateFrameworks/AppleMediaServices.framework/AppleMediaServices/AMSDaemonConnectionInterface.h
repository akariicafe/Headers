@interface AMSDaemonConnectionInterface : NSObject

+ (id)interface;
+ (void)_setUpSecurityInterfaceBiometricSelectors:(id)a0;
+ (void)_setUpSecurityInterfaceSignedHeadersSelector:(id)a0;
+ (void)_configureURLPresentationDelegateClasses:(id)a0;
+ (id)_deviceMessengerServiceInterface;
+ (id)_deviceMessengerClientInterface;
+ (id)_accountCachedServerDataInterface;
+ (void)_setUpSecurityInterfaceHandleResponseSelector:(id)a0;
+ (id)_cookieServiceInterface;
+ (id)_purchaseServiceInterface;
+ (id)_fraudReportServiceInterface;
+ (void)_setUpSecurityInterfaceDeviceIdentitySelectors:(id)a0;
+ (id)_securityServiceInterface;
+ (void)_setUpSecurityInterfaceSilentEnrollmentSelector:(id)a0;
+ (void)_setUpSecurityInterfaceApplePayClassic:(id)a0;
+ (id)_dismissQRDialogServiceInterface;
+ (id)_accountSignOutInterface;
+ (id)_keychainServiceInterface;
+ (id)_securityClientInterface;

@end
