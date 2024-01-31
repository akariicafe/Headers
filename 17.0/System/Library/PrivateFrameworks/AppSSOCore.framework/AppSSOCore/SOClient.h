@class NSString, SOServiceConnection;

@interface SOClient : NSObject <SOServiceProtocol>

@property (retain) SOServiceConnection *serviceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_queue;

- (id)init;
- (void)isExtensionProcessWithAuditToken:(struct { unsigned int x0[8]; })a0 completion:(id /* block */)a1;
- (void)finishAuthorization:(id)a0 completion:(id /* block */)a1;
- (void)getAuthorizationHintsWithURL:(id)a0 responseCode:(long long)a1 completion:(id /* block */)a2;
- (void)configurationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)cancelAuthorization:(id)a0 completion:(id /* block */)a1;
- (void)performAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)profilesWithExtensionBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)realmsWithCompletion:(id /* block */)a0;
- (void)debugHintsWithCompletion:(id /* block */)a0;

@end
