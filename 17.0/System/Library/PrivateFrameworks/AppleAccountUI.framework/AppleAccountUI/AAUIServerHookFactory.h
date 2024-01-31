@interface AAUIServerHookFactory : NSObject

- (id)_defaultHooks:(id)a0;
- (id)_iCloudDataRecoveryServiceHooksFor:(id)a0 accountManager:(id)a1;
- (id)_passwordAndSecurityHooksForAccount:(id)a0 accountManager:(id)a1;
- (id)hooksFor:(unsigned long long)a0 accountManager:(id)a1;

@end
