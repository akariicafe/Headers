@class NSString, AXUIMessageSender, NSDictionary, AXUIClientConnection;
@protocol AXUIClientDelegate;

@interface AXUIClient : NSObject <AXUIMessageSenderDelegate, AXUIClientConnectionStateObserver>

@property (copy, nonatomic) NSString *serviceBundleName;
@property (retain, nonatomic) AXUIMessageSender *messageSender;
@property (retain, nonatomic) AXUIClientConnection *clientConnection;
@property (nonatomic, getter=isRegisteredWithServer) BOOL registeredWithServer;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSDictionary *initializationMessage;
@property (weak, nonatomic) id<AXUIClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate:(id /* block */)a0;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0 serviceBundleName:(id)a1;
- (void *)messageSender:(id)a0 extractCustomDataFromXPCReply:(id)a1 numberOfKeyValuePairsForCustomData:(unsigned long long *)a2;
- (void)_requestInitializationMessageFromDelegateIfNeeded;
- (void)messageSender:(id)a0 accessXPCConnectionForMessageWithContext:(void *)a1 usingBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)sendSynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 error:(id *)a2;
- (void)messageSender:(id)a0 processCustomDataFromXPCReply:(void *)a1;
- (void)_cleanUp;
- (void)messageSender:(id)a0 accessLaunchAngelConnectionForMessageWithContext:(void *)a1 usingBlock:(id /* block */)a2;
- (void)sendAsynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 targetAccessQueue:(id)a2 completion:(id /* block */)a3;
- (void)clientConnection:(id)a0 didChangeConnectedState:(BOOL)a1;
- (void)sendAsynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 targetAccessQueue:(id)a2 completionRequiresWritingBlock:(BOOL)a3 completion:(id /* block */)a4;
- (void)messageSender:(id)a0 willSendXPCMessage:(id)a1 context:(void *)a2;

@end
