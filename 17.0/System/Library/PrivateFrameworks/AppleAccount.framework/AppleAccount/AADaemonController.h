@class NSString, AAFXPCSession;

@interface AADaemonController : NSObject <AAFXPCSessionDelegate, AADaemonProtocol>

@property (retain, nonatomic) AAFXPCSession *remoteService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)configureRemoteInterface:(id)a0;
- (void)cacheLoginResponse:(id)a0 forAccount:(id)a1 completion:(id /* block */)a2;
- (void)fetchCachedLoginResponseForAccount:(id)a0 completion:(id /* block */)a1;
- (void)handleAppleAccountDeleteForAccount:(id)a0 completion:(id /* block */)a1;
- (void)handleMarkedForSignOutForAccount:(id)a0 completion:(id /* block */)a1;

@end
