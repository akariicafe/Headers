@class NSString, NSXPCConnection;

@interface NPKTransientAssertion : NSObject <NPKTransientPassAssertionServerClientProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_remoteObjectProxy;
- (id)initWithQueue:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)handleDelegatedDoublePressEvent;
- (void)_resyncState;
- (void)didEnterFieldForPassesWithUniqueIDs:(id)a0;
- (void)handleTerminalAuthenticationRequestedForPassWithUniqueID:(id)a0;

@end
