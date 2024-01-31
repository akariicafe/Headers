@class RemoteUIController, NSArray, NSString, NSMutableArray;
@protocol RUIServerHookHandlerDelegate;

@interface RUIServerHookHandler : NSObject <RUIServerHookDelegate> {
    NSMutableArray *_hookIdentifiers;
    RemoteUIController *_remoteUIController;
}

@property (copy, nonatomic) NSArray *serverHooks;
@property (weak, nonatomic) id<RUIServerHookHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isUserCancelError:(id)a0;
- (void).cxx_destruct;
- (void)dismissObjectModelsAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithRemoteUIController:(id)a0;
- (void)processObjectModel:(id)a0 isModal:(BOOL)a1;
- (id)initWithRemoteUIController:(id)a0 hooks:(id)a1;
- (id)presentationContextForHook:(id)a0;
- (void)processObjectModel:(id)a0 isModal:(BOOL)a1 completion:(id /* block */)a2;
- (void)processServerResponse:(id)a0;
- (void)_handleResponseForHook:(id)a0 success:(BOOL)a1 error:(id)a2 attributes:(id)a3 objectModel:(id)a4 completion:(id /* block */)a5;
- (void)_rebuildServerHookHandlers;
- (id)_refreshRequestWithInfo:(id)a0 initiatingObjectModel:(id)a1 attributes:(id)a2;
- (void)_reloadUIWithInfo:(id)a0 attributes:(id)a1 initiatingObjectModel:(id)a2 completion:(id /* block */)a3;
- (id)_responseDataForResult:(BOOL)a0 withError:(id)a1;
- (id)currentPresenter;
- (void)refreshWithRequest:(id)a0 completion:(id /* block */)a1;

@end
