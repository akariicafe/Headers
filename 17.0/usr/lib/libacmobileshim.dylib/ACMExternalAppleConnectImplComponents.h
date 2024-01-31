@interface ACMExternalAppleConnectImplComponents : ACMAppleConnectImplComponents

+ (id)components;

- (id)preferences;
- (id)uiController;
- (id)createHandlerWithClass:(Class)a0 context:(id)a1;
- (id)twoSVController;
- (id)createAppleConnectImpl;
- (id)createAppleConnectImplWithMasterObject:(id)a0;
- (id)createAuthenticationRequest;
- (BOOL)uiControllerLoaded;
- (void)unloadUIController;

@end
