@class NSString, NSXPCConnection, BSProcessHandle, NSObject, AFUIPanel;
@protocol OS_dispatch_queue;

@interface AFUIServiceSession : NSObject <AFUIPresenter, AFUIModalUIDelegate>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) BSProcessHandle *remoteProcess;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue;
@property (retain, nonatomic) AFUIPanel *panel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)documentStateChanged:(id)a0;
- (void).cxx_destruct;
- (void)hide;
- (void)displayForDocumentTraits:(id)a0 documentState:(id)a1 textOperationsHandler:(id /* block */)a2;
- (void)contactsUIDidEndWithCompletion:(id /* block */)a0;
- (id)_applicationIdentifierFromConnection:(id)a0;
- (id)_documentTraitsByAddingClientPropertiesFromConnection:(id)a0 toDocumentTraits:(id)a1;
- (void)authenticationDidEndWithCompletion:(id /* block */)a0;
- (void)authenticationWillBeginWithCompletion:(id /* block */)a0;
- (void)contactsUIWillBeginWithCompletion:(id /* block */)a0;
- (id)initWithSessionQueue:(id)a0 connection:(id)a1 remoteProcess:(id)a2;

@end
