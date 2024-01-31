@interface SMInitiatorEligibility : NSObject

+ (id)_getRegulatoryDomainCountryCodes;
+ (BOOL)checkCellularEnabledWithQueue:(id)a0;
+ (BOOL)checkDevicePlatformEnabled;
+ (void)checkIMessageAccountEnabledWithQueue:(id)a0 handler:(id /* block */)a1;
+ (void)checkInitiatorEligibilityWithQueue:(id)a0 authorizationManager:(id)a1 handler:(id /* block */)a2;
+ (void)checkLocationAuthorizationWithQueue:(id)a0 handler:(id /* block */)a1;
+ (BOOL)checkLocationServicesEnabledWithAuthorizationManager:(id)a0;
+ (void)checkManateeEnabledWithQueue:(id)a0 handler:(id /* block */)a1;
+ (BOOL)checkRegulatoryDomainPassedWithQueue:(id)a0;

@end
