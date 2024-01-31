@class NSString;

@interface _UIApplicationSceneRequestBuilder : NSObject <_UIWorkspaceSceneRequestOptionsBuilding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_specification;
- (void)_customizeWorkspaceRequestOptions:(id)a0 usingRequest:(id)a1;
- (id)_initialClientSettingsForRequest:(id)a0;
- (id)_optionsWithInitialClientSettings:(id)a0 activationOptions:(id)a1 targetSession:(id)a2 optionsClass:(Class)a3 outError:(id *)a4;
- (Class)_requestOptionsClass;
- (void)buildWorkspaceRequestOptionsForRequest:(id)a0 withContinuation:(id /* block */)a1;

@end
