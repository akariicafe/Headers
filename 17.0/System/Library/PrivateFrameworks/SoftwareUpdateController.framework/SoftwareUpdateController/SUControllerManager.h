@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, SUControllerManagerDelegate;

@interface SUControllerManager : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *serverXPCConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) int notifyStateReportToken;
@property (nonatomic) BOOL exclusiveControl;
@property (nonatomic) BOOL communalUponDisconnect;
@property (nonatomic) BOOL reconnecting;
@property (nonatomic) BOOL reconnectFailed;
@property (weak, nonatomic) id<SUControllerManagerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleXPCEvent:(id)a0;
- (id)_serverConnection;
- (void)performMigration;
- (id)initWithDelegate:(id)a0;
- (void)_attemptReconnect;
- (void)startDownload:(id)a0;
- (id)_stateName;
- (void)scanForUpdates:(id)a0;
- (void)managerStatus:(id /* block */)a0;
- (void)installUpdate:(id)a0;
- (void)managerState:(id /* block */)a0;
- (void)modifyConfig:(id)a0 modifying:(long long)a1 completion:(id /* block */)a2;
- (void)purgeUpdate:(id)a0 completion:(id /* block */)a1;
- (void)_addClient;
- (void)_forwardApplyProgress:(id)a0;
- (void)_forwardAutoScanPerformed:(id)a0;
- (void)_forwardConnectionError:(id)a0 message:(id)a1;
- (void)_forwardConnectionRegained:(id)a0 message:(id)a1;
- (void)_forwardDownloadProgress:(id)a0;
- (void)_forwardInstallResult:(id)a0;
- (void)_forwardScanPostponed:(id)a0;
- (void)_forwardScanResult:(id)a0;
- (void)_handleStateReport;
- (void)_indicateConnectionError:(id)a0;
- (void)_indicateConnectionRegained:(id)a0;
- (void)_indicateMessageReceived:(id)a0 messageType:(const char *)a1;
- (void)cancelCurrentConnection;
- (id)initWithExclusiveControl:(BOOL)a0 communalUponDisconnect:(BOOL)a1 withDelegate:(id)a2;
- (void)managerConfig:(id /* block */)a0;
- (void)scanForUpdates;
- (void)updateAcceptingTermsAndConditions;
- (void)updateAcceptingTermsAndConditions:(id)a0;
- (void)updateAcceptingTermsAndConditions:(id)a0 usingPassword:(id)a1;
- (void)useCredentialsToPersonalize:(id)a0 withAccountName:(id)a1 andPassword:(id)a2;
- (void)useSSOTokenToPersonalize:(id)a0 withSSOToken:(id)a1;
- (void)userDidAcceptTermsAndConditionsForUpdate:(id)a0;

@end
