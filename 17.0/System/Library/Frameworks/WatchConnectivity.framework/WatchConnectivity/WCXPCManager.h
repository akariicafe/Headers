@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, WCXPCManagerDelegate;

@interface WCXPCManager : NSObject <NSXPCConnectionDelegate, WCXPCManagerClientProtocol, WCXPCManagerDaemonProtocol>

@property (readonly) NSXPCConnection *connection;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property int listenerResumedToken;
@property BOOL connectionInvalidated;
@property BOOL reconnectFailed;
@property unsigned long long reconnectRetryCount;
@property (weak) NSObject<WCXPCManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (void)initialize;
+ (id)sharedManager;
+ (id)daemonInterface;

- (void)setupConnection;
- (void)handleResponse:(id)a0;
- (id)init;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)handleRequest:(id)a0;
- (void).cxx_destruct;
- (void)invalidateConnection;
- (void)interruptionHandler;
- (void)handleActiveDeviceSwitchStarted;
- (void)onqueue_retryConnectIfNecessary;
- (void)acknowledgeFileIndexWithIdentifier:(id)a0 clientPairingID:(id)a1;
- (void)acknowledgeFileResultIndexWithIdentifier:(id)a0 clientPairingID:(id)a1;
- (void)acknowledgeUserInfoIndexWithIdentifier:(id)a0 clientPairingID:(id)a1;
- (void)acknowledgeUserInfoResultIndexWithIdentifier:(id)a0 clientPairingID:(id)a1;
- (void)cancelAllOutstandingMessages;
- (void)cancelSendWithIdentifier:(id)a0;
- (void)handleApplicationContextWithPairingID:(id)a0;
- (void)handleFileResultWithPairingID:(id)a0;
- (void)handleIncomingFileWithPairingID:(id)a0;
- (void)handleIncomingUserInfoWithPairingID:(id)a0;
- (void)handleInterruptedConnection;
- (void)handleMessageSendingAllowed;
- (void)handleSentMessageWithIdentifier:(id)a0 error:(id)a1;
- (void)handleSessionStateChanged:(id)a0;
- (void)handleUserInfoResultWithPairingID:(id)a0;
- (void)onqueue_reconnect;
- (void)sendMessage:(id)a0 clientPairingID:(id)a1 acceptanceHandler:(id /* block */)a2;
- (void)sendMessage:(id)a0 clientPairingID:(id)a1 acceptanceHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)sessionReadyForInitialStateForClientPairingID:(id)a0 supportsActiveDeviceSwitch:(BOOL)a1 withErrorHandler:(id /* block */)a2;
- (void)transferFile:(id)a0 sandboxToken:(id)a1 clientPairingID:(id)a2 errorHandler:(id /* block */)a3;
- (void)transferUserInfo:(id)a0 withURL:(id)a1 clientPairingID:(id)a2 errorHandler:(id /* block */)a3;
- (void)updateApplicationContext:(id)a0 clientPairingID:(id)a1 errorHandler:(id /* block */)a2;

@end
