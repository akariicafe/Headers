@interface CDPAuthenticationHelper : NSObject

+ (id)_contextForPrimaryAccount;
+ (id)_authContextForContext:(id)a0;
+ (void)_authWithContext:(id)a0 completion:(id /* block */)a1;
+ (id)_contextForPrimaryAccountSilentAuth;
+ (id)authController;
+ (void)silentAuthenticationForContext:(id)a0 withCompletion:(id /* block */)a1;
+ (void)silentAuthenticationForPrimaryAccountWithClientAppName:(id)a0 clientAppBundleId:(id)a1 withCompletion:(id /* block */)a2;
+ (void)silentAuthenticationForPrimaryAccountWithCompletion:(id /* block */)a0;

@end
