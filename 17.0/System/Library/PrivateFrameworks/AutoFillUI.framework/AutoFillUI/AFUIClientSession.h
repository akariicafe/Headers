@class NSXPCConnection;

@interface AFUIClientSession : NSObject <AFUIPresenter>

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void)dealloc;
- (void)documentStateChanged:(id)a0;
- (void).cxx_destruct;
- (void)hide;
- (id)_presenter;
- (void)displayForDocumentTraits:(id)a0 documentState:(id)a1 textOperationsHandler:(id /* block */)a2;
- (void)_configureNSXPCConnection:(id)a0 withMachName:(id)a1;
- (void)_initializeBSServiceConnection;

@end
