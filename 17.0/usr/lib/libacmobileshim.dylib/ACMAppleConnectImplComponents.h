@protocol ACC2SVControllerProtocol, ACMSystemInfoProtocol, ACMAppleConnectPreferences, ACMTicketManagerProtocol, ACMUIControllerProtocol, ACMUIControllerDelegate, ACFKeychainManagerProtocol;

@interface ACMAppleConnectImplComponents : ACCComponents {
    id<ACFKeychainManagerProtocol> _keychain;
    id<ACMUIControllerDelegate> _uiControllerDelegate;
}

@property (retain, nonatomic) id<ACMAppleConnectPreferences> preferences;
@property (retain, nonatomic) id<ACC2SVControllerProtocol> twoSVController;
@property (retain, nonatomic) id<ACMTicketManagerProtocol> ticketManager;
@property (retain, nonatomic) id<ACMSystemInfoProtocol> systemInfo;
@property (retain, nonatomic) id<ACMUIControllerProtocol> uiController;
@property (setter=setUIControllerDelegate:) id<ACMUIControllerDelegate> uiControllerDelegate;
@property (readonly) BOOL uiControllerLoaded;

+ (id)components;
+ (id)defaultComponents;

- (void)dealloc;
- (id)createTicketVerificationRequest;
- (id)createHandlerWithClass:(Class)a0 context:(id)a1;
- (void)cleanupOnMemoryWarning;
- (id)createAuthenticationRequest;
- (id)uiControllerDelegate;
- (void)unloadUIController;

@end
