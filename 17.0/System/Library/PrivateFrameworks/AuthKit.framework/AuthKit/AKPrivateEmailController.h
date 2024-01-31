@class NSString, AAFXPCSession, AKPrivateEmailClientImpl;
@protocol AKPrivateEmailUIProvider;

@interface AKPrivateEmailController : NSObject <AAFXPCSessionDelegate, AKPrivateEmailDaemonProtocol> {
    AKPrivateEmailClientImpl *_clientImpl;
}

@property (retain, nonatomic) AAFXPCSession *remoteService;
@property (retain) id<AKPrivateEmailUIProvider> uiProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)exportedObject;
- (void).cxx_destruct;
- (void)fetchPrivateEmailForAltDSID:(id)a0 withKey:(id)a1 completion:(id /* block */)a2;
- (void)lookupPrivateEmailWithContext:(id)a0 completion:(id /* block */)a1;
- (void)registerPrivateEmailWithContext:(id)a0 completion:(id /* block */)a1;
- (void)configureRemoteInterface:(id)a0;
- (void)deletePrivateEmailDatabaseWithCompletion:(id /* block */)a0;
- (void)fetchPrivateEmailWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchSignInWithApplePrivateEmailWithContext:(id)a0 completion:(id /* block */)a1;
- (void)getContextForRequestContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithXPCSession:(id)a0;
- (void)listAllPrivateEmailsForAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)lookupPrivateEmailForAltDSID:(id)a0 withKey:(id)a1 completion:(id /* block */)a2;
- (void)privateEmailListVersionWithCompletion:(id /* block */)a0;
- (void)registerPrivateEmailForAltDSID:(id)a0 withKey:(id)a1 completion:(id /* block */)a2;
- (void)removePrivateEmailKey:(id)a0 completion:(id /* block */)a1;

@end
