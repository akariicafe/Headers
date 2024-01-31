@class NSString, NSXPCConnection;

@interface POServiceConnection : NSObject <POServiceProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property unsigned int uid;
@property BOOL forLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcQueue;

- (void)dealloc;
- (BOOL)_connectToService;
- (void).cxx_destruct;
- (void)getLoginTypeForUser:(id)a0 completion:(id /* block */)a1;
- (void)createUserAccount:(id)a0 passwordContext:(id)a1 smartCardContext:(id)a2 tokenId:(id)a3 completion:(id /* block */)a4;
- (id)initWithUid:(unsigned int)a0 forLogin:(BOOL)a1;
- (void)passwordDidChangeForUsername:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)performLocalPasswordLogin:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)performPasswordLogin:(id)a0 passwordContext:(id)a1 updateLocalAccountPassword:(BOOL)a2 completion:(id /* block */)a3;
- (void)retainContextForUserName:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)saveCredentialForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)screenDidUnlockWithCredentialContext:(id)a0 smartCardContext:(id)a1 tokenId:(id)a2 atLogin:(BOOL)a3 tokenUnlock:(BOOL)a4 completion:(id /* block */)a5;
- (void)updateLocalAccountPassword:(id)a0 passwordContextData:(id)a1 completion:(id /* block */)a2;
- (void)verifyPasswordLogin:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;

@end
