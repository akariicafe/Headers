@class NSString, NSMutableArray, AXAccessQueue;

@interface AXIPCClient : NSObject {
    unsigned int _assignedServerMachPort;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientIdentifierLock;
    NSString *_clientIdentifier;
    struct __CFRunLoopSource { } *_clientSource;
    unsigned long long _connectionAttempts;
    NSMutableArray *_outstandingAsyncRequests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionServiceLock;
}

@property (nonatomic, getter=isConnected) BOOL connected;
@property (copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) struct __CFMachPort { } *serverPort;
@property (retain, nonatomic) NSMutableArray *postConnectionTasks;
@property (retain, nonatomic) AXAccessQueue *connectionQueue;
@property (nonatomic) BOOL usesPerPidLookup;
@property (nonatomic) int pid;
@property (readonly, nonatomic) unsigned int serviceMachPort;
@property (copy, nonatomic) id /* block */ portDeathHandler;
@property (nonatomic) float timeout;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) unsigned int clientCallbackPort;
@property (readonly, nonatomic) struct __CFRunLoopSource { } *clientCallbackSource;
@property (nonatomic) BOOL shouldRegisterCallbackSourceOnMainRunloop;

+ (void)initialize;
+ (id)allClients;

- (BOOL)_handleErrorWithMessage:(id)a0 outError:(id *)a1;
- (void)dealloc;
- (BOOL)sendAsyncMessage:(id)a0 replyOnQueue:(id)a1 replyHandler:(id /* block */)a2;
- (BOOL)_prepareToSendMessage:(id)a0 withError:(id *)a1 prepSuccessHandler:(id /* block */)a2;
- (BOOL)disconnectWithError:(id *)a0;
- (id)initWithPort:(unsigned int)a0;
- (void)establishConnectionWithTimeout:(double)a0 completion:(id /* block */)a1;
- (BOOL)sendAsyncMessage:(id)a0 withReplyHandler:(id /* block */)a1;
- (void)sendSimpleMessage:(id)a0;
- (void)_registerWithServer;
- (void)_serverDied;
- (id)initWithServiceName:(id)a0;
- (void)_attemptToEstablishConnection;
- (BOOL)_verifyConnectionWithError:(id *)a0;
- (void)_sendRegistrationMessageWithRetries:(int)a0;
- (id)_createRegistrationWithReplyMachPort:(unsigned int)a0 forAsyncReplyOnQueue:(id)a1 responseHandler:(id /* block */)a2;
- (id)description;
- (BOOL)_handleErrorWithMessage:(id)a0 machError:(int)a1 outError:(id *)a2;
- (void).cxx_destruct;
- (BOOL)connectWithError:(id *)a0;
- (id)_descriptionForMachError:(int)a0;
- (BOOL)sendSimpleMessage:(id)a0 withError:(id *)a1;
- (BOOL)verifyConnectionExists;
- (id)sendMessage:(id)a0 withError:(id *)a1;
- (BOOL)sendSimpleMessage:(id)a0 synchronizationPort:(unsigned int)a1 error:(id *)a2;
- (void)_commonInit;

@end
