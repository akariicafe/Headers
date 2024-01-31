@class NSURL, NSHTTPCookie;
@protocol FBKSHTTPClientProtocol;

@interface FBKSSeedPortalAPI : NSObject

@property (retain, nonatomic) NSURL *seedPortalURL;
@property (retain, nonatomic) NSURL *feedbackURL;
@property (retain, nonatomic) id<FBKSHTTPClientProtocol> coreHTTPClient;
@property (nonatomic) short environment;
@property (readonly) NSHTTPCookie *seedPortalSession;

- (void).cxx_destruct;
- (id)loginWithTokenURL;
- (id)_filterForValue;
- (void)logOutServerSideWithCompletion:(id /* block */)a0;
- (id)formItemsURLFormTat:(id)a0;
- (id)initClient:(id)a0;
- (void)seedPortalLoginAsUnauthenticatedUserWithSuccessHandler:(id /* block */)a0 error:(id /* block */)a1;
- (void)seedPortalLoginWithDeviceToken:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)loadFormItemWithFormTat:(id)a0 withCompletion:(id /* block */)a1;
- (id)signOutURL;
- (id)unauthenticatedLoginURL;

@end
