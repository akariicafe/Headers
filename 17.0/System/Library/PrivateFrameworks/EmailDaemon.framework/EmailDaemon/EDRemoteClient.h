@class EDActivityRegistry, EDDaemonInterfaceFactory, NSObject, EDInteractionLogger, EDOutgoingMessageRepository, EDDiagnosticInfoGatherer, EDSenderRepository, EDFetchController, EDMailboxRepository, EDClientResumer, NSString, EDAccountRepository, EDClientState, EDMessageRepository, NSXPCConnection, NSXPCInterface, EDSearchableIndex;
@protocol OS_os_log, EDServerRemoteClientsProvider, EMVIPManagerInterface;

@interface EDRemoteClient : NSObject <EFLoggable, EMDaemonInterfaceXPC, EDReconciliationQueryProvider> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSXPCInterface *exportedInterface;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSXPCConnection *clientConnection;
@property (readonly, nonatomic) EDDaemonInterfaceFactory *daemonInterfaceFactory;
@property (readonly, weak, nonatomic) id<EDServerRemoteClientsProvider> serverRemoteClientsProvider;
@property (readonly, nonatomic) EDAccountRepository *accountRepository;
@property (readonly, nonatomic) EDClientState *clientState;
@property (readonly, nonatomic) EDFetchController *fetchController;
@property (readonly, nonatomic) EDMailboxRepository *mailboxRepository;
@property (readonly, nonatomic) EDMessageRepository *messageRepository;
@property (readonly, nonatomic) EDOutgoingMessageRepository *outgoingMessageRepository;
@property (readonly, nonatomic) EDSenderRepository *senderRepository;
@property (readonly, nonatomic) EDSearchableIndex *searchableIndex;
@property (readonly, nonatomic) EDInteractionLogger *interactionLogger;
@property (readonly, nonatomic) EDActivityRegistry *activityRegistry;
@property (readonly, nonatomic) id<EMVIPManagerInterface> vipManagerInterface;
@property (readonly, nonatomic) EDClientResumer *clientResumer;
@property (readonly, nonatomic) EDDiagnosticInfoGatherer *diagnosticInfoGatherer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)messageReconciliationQueries;
- (void)dealloc;
- (id)threadReconciliationQueries;
- (void).cxx_destruct;
- (void)test_tearDown;
- (void)getAccountRepositoryInterface:(id /* block */)a0;
- (void)getActivityRegistryInterface:(id /* block */)a0;
- (void)getClientStateInterface:(id /* block */)a0;
- (void)getDiagnosticInfoGathererInterface:(id /* block */)a0;
- (void)getFetchControllerInterface:(id /* block */)a0;
- (void)getInteractionLoggerInterface:(id /* block */)a0;
- (void)getMailboxRepositoryInterface:(id /* block */)a0;
- (void)getMessageRepositoryInterface:(id /* block */)a0;
- (void)getOutgoingMessageRepositoryInterface:(id /* block */)a0;
- (void)getSearchableIndexInterface:(id /* block */)a0;
- (void)getSenderRepositoryInterface:(id /* block */)a0;
- (void)getVIPManagerInterface:(id /* block */)a0;
- (void)launchForAppLaunch:(id /* block */)a0;
- (void)launchForEarlyRecovery:(id /* block */)a0;
- (void)setAllowsBackgroundResume:(BOOL)a0;
- (id)initWithConnection:(id)a0 daemonInterfaceFactory:(id)a1 serverRemoteClientsProvider:(id)a2;

@end
