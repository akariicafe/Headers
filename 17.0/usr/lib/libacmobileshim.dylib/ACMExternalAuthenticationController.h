@class ACCComponents;
@protocol ACCTicketManagerProtocol, ACFLocalAuthenticationContextProtocol, ACFKeychainManagerProtocol, ACMExternalAuthenticationControllerDelegate;

@interface ACMExternalAuthenticationController : NSObject

@property (readonly, nonatomic) ACCComponents *components;
@property (readonly, nonatomic) id<ACFKeychainManagerProtocol> keychainManager;
@property (readonly, nonatomic) id<ACCTicketManagerProtocol> ticketManager;
@property (retain, nonatomic) id<ACFLocalAuthenticationContextProtocol> localAuthenticationContext;
@property (nonatomic) id<ACMExternalAuthenticationControllerDelegate> delegate;

- (void)dealloc;
- (id)convertLAError:(id)a0;
- (void)authenticate2SVWithSSOTokenIfRequired:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)authenticateWithRequest:(id)a0 password:(id)a1 completion:(id /* block */)a2;
- (void)cleanSSOStorageWithRequest:(id)a0;
- (void)evaluateSSOWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)evaluateTouchIDIfNeededWithSSOToken:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)evaluateTouchIDWithToken:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (BOOL)isCriticalError:(id)a0;
- (BOOL)isValidToken:(id)a0 duration:(double)a1;
- (id)localizedReasonForUsername:(id)a0;
- (void)saveSSOIfNeeded:(id)a0 withRequest:(id)a1;
- (id)tgtStoragePolicy;
- (id)tokenWithRequest:(id)a0;
- (void)updateAuthContext:(id)a0;
- (void)verifyServiceTicketWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)verifyToken:(id)a0 withRequest:(id)a1 completion:(id /* block */)a2;

@end
