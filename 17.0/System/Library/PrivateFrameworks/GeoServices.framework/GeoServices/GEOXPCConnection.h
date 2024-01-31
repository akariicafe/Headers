@class NSString, NSMapTable, geo_isolater, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface GEOXPCConnection : NSObject {
    id /* block */ _creationBlock;
    geo_isolater *_connectionIsolater;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _greetingSent;
    id /* block */ _eventHandler;
    BOOL _hasActiveBarrier;
    NSMapTable *_barrierDelegates;
}

@property (class, copy, nonatomic) id /* block */ daemonXPCConnectionCreationBlock;
@property (class, copy, nonatomic) NSObject<OS_dispatch_queue> *defaultXPCServerConnectionQueue;

@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (nonatomic) BOOL reconnectAutomatically;
@property (copy, nonatomic) id /* block */ reconnectBlock;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (readonly, nonatomic) unsigned long long serverType;
@property (readonly, nonatomic) NSString *debugIdentifier;

+ (id)createServerConnectionFor:(unsigned long long)a0 debugIdentifier:(id)a1 eventHandler:(id /* block */)a2;
+ (id)createServerConnectionFor:(unsigned long long)a0 debugIdentifier:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
+ (id)createServerConnectionFor:(unsigned long long)a0 debugIdentifier:(id)a1 queue:(id)a2 reconnectBlock:(id /* block */)a3 eventHandler:(id /* block */)a4;

- (void)close;
- (void)reconnect;
- (void)dealloc;
- (void)sendMessageSync:(id)a0;
- (void)sendDictionary:(id)a0;
- (void)setXpcConnection:(id)a0;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientConnection:(id)a0;
- (id)sendMessageWithReplySync:(id)a0;
- (void)_barrierIsReady;
- (void)_reconnectIsolated;
- (void)_sendGreetingIfNeeded:(id)a0;
- (id)initServerConnectionFor:(unsigned long long)a0 debugIdentifier:(id)a1 queue:(id)a2 creationBlock:(id /* block */)a3 reconnectBlock:(id /* block */)a4 eventHandler:(id /* block */)a5;
- (BOOL)initiateBarrierIfNecessary:(id)a0 delegate:(id)a1;
- (void)sendDictionary:(id)a0 withReply:(id)a1 handler:(id /* block */)a2;
- (void)sendDictionarySync:(id)a0;
- (id)sendDictionaryWithMessageReplySync:(id)a0 error:(id *)a1;
- (id)sendDictionaryWithReplySync:(id)a0 error:(id *)a1;
- (void)sendMessage:(id)a0 withReply:(id)a1 handler:(id /* block */)a2;
- (void)sendMessageReporingProgress:(id)a0 withReply:(id)a1 handler:(id /* block */)a2;

@end
