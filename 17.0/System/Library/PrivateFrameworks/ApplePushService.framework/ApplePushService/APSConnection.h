@class NSMutableDictionary, NSArray, NSString, NSData, CUTWeakReference, NSMutableArray, NSObject;
@protocol OS_xpc_object, OS_dispatch_source, OS_dispatch_queue, APSConnectionDelegate;

@interface APSConnection : NSObject {
    CUTWeakReference *_delegateReference;
    NSString *_environmentName;
    NSData *_publicToken;
    unsigned long long _messageSize;
    unsigned long long _largeMessageSize;
    NSString *_connectionPortName;
    unsigned int _connectionPort;
    BOOL _enableCriticalReliability;
    BOOL _enableStatusNotifications;
    BOOL _isConnected;
    BOOL _trackActivityPresence;
    NSMutableDictionary *_idsToOutgoingMessages;
    unsigned long long _nextOutgoingMessageID;
    NSObject<OS_dispatch_queue> *_machQueue;
    NSObject<OS_dispatch_source> *_mach_source;
    NSObject<OS_xpc_object> *_connection;
    BOOL _everHadDelegate;
    NSMutableArray *_queuedDelegateBlocks;
    NSString *_processName;
    double _reconnectDelay;
    BOOL _isReconnectScheduled;
    BOOL _isDisconnected;
    BOOL _isDeallocing;
    NSArray *_pushWakeTopics;
    NSMutableDictionary *_pendingURLTokenBlocks;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } topicMoveLock;
@property (retain, nonatomic) NSMutableArray *accumulatedTopicMoves;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue;
@property (readonly, nonatomic) BOOL isShutdown;
@property (nonatomic) BOOL trackActivityPresence;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) unsigned long long largeMessageSize;
@property (retain, nonatomic, setter=_setEnabledTopics:) NSArray *enabledTopics;
@property (retain, nonatomic, setter=_setIgnoredTopics:) NSArray *ignoredTopics;
@property (retain, nonatomic, setter=_setOpportunisticTopics:) NSArray *opportunisticTopics;
@property (retain, nonatomic, setter=_setNonWakingTopics:) NSArray *nonWakingTopics;
@property (readonly, retain, nonatomic) NSData *publicToken;
@property (nonatomic) BOOL usesAppLaunchStats;
@property (nonatomic) id<APSConnectionDelegate> delegate;

+ (double)serverTime;
+ (unsigned long long)serverTimeInNanoSeconds;
+ (struct __SecIdentity { } *)copyIdentity;
+ (double)keepAliveIntervalForEnvironmentName:(id)a0;
+ (void)_blockingXPCCallWithArgumentBlock:(id /* block */)a0 resultHandler:(id /* block */)a1;
+ (id)_createXPCConnectionWithQueueName:(const char *)a0;
+ (void)_flushIdentityCache;
+ (void)_safelyCancelAndReleaseConnection:(id)a0;
+ (void)_setTokenState;
+ (id)connectionsDebuggingStateOfStyle:(unsigned long long)a0;
+ (id)geoRegion;
+ (void)invalidateDeviceIdentity;
+ (BOOL)isValidEnvironment:(id)a0;
+ (void)notifySafeToSendFilter;
+ (void)requestCourierConnection;

- (void)_disconnect;
- (void)_addEnableCriticalReliabilityToXPCMessage:(id)a0;
- (void)shutdown;
- (void)confirmReceiptForMessage:(id)a0;
- (id)initWithEnvironmentName:(id)a0 namedDelegatePort:(id)a1;
- (void)dealloc;
- (void)_insertURLTokenBlock:(id /* block */)a0 forInfo:(id)a1;
- (id)_topicListNameForLogging:(unsigned long long)a0;
- (void)_reconnectIfNecessaryOnIvarQueueAfterDelay;
- (BOOL)isConnected;
- (void)_onIvarQueue_setEnabledTopics:(id)a0 ignoredTopics:(id)a1 opportunisticTopics:(id)a2 nonWakingTopics:(id)a3 sendToDaemon:(BOOL)a4 completion:(id /* block */)a5;
- (void)_deliverOutgoingMessageResultWithID:(unsigned long long)a0 error:(id)a1 sendRTT:(unsigned long long)a2;
- (void)_dispatch_sync_to_ivarQueue:(id /* block */)a0 shutdownBlock:(id /* block */)a1;
- (void)requestURLTokenForInfo:(id)a0;
- (void)_cancelConnection;
- (void)_disconnectOnIvarQueue;
- (void)cancelOutgoingMessage:(id)a0;
- (void)removeFromRunLoop;
- (void)_deliverDidReconnectOnIvarQueue;
- (id)initWithEnvironmentName:(id)a0 namedDelegatePort:(id)a1 queue:(id)a2;
- (void)_handleEvent:(id)a0 withHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (void)requestURLTokenForInfo:(id)a0 completion:(id /* block */)a1;
- (void)setEnabledTopics:(id)a0 ignoredTopics:(id)a1 opportunisticTopics:(id)a2;
- (void)_deliverPublicToken:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_setPushWakeTopics:(id)a0;
- (void)scheduleInRunLoop:(id)a0;
- (void)_deliverPublicTokenOnIvarQueue:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_setEnableStatusNotifications:(BOOL)a0 sendToDaemon:(BOOL)a1;
- (void)setEnabledTopics:(id)a0 ignoredTopics:(id)a1 opportunisticTopics:(id)a2 nonWakingTopics:(id)a3 completion:(id /* block */)a4;
- (void)subscribeToChannel:(id)a0 forTopic:(id)a1;
- (void)setEnabledTopics:(id)a0 ignoredTopics:(id)a1;
- (void)setEnableCriticalReliability:(BOOL)a0;
- (void)_deliverMessage:(id)a0;
- (id)initWithEnvironmentName:(id)a0;
- (void)_noteDisconnectedFromDaemonOnIvarQueue;
- (void)getRegisteredChannelsForTopic:(id)a0 completion:(id /* block */)a1;
- (void)_disconnectFromDealloc;
- (void)invalidateURLTokenForInfo:(id)a0 completion:(id /* block */)a1;
- (void)moveTopics:(id)a0 fromList:(unsigned long long)a1 toList:(unsigned long long)a2;
- (void)setEnableStatusNotifications:(BOOL)a0;
- (void)_asyncOnDelegateQueueWithBlock:(id /* block */)a0 requiresDelegate:(BOOL)a1;
- (void)_connectIfNecessaryOnIvarQueue;
- (void)_setEnabledTopics:(id)a0 ignoredTopics:(id)a1 opportunisticTopics:(id)a2 nonWakingTopics:(id)a3 sendToDaemon:(BOOL)a4 completion:(id /* block */)a5;
- (void)_processQueuedTopicMovesOnIvarQueue;
- (void)moveTopic:(id)a0 fromList:(unsigned long long)a1 toList:(unsigned long long)a2;
- (void)_shutdownFromDealloc;
- (void)calloutToDelegatesForURLTokenError:(id)a0 forInfo:(id)a1 completion:(id /* block */)a2;
- (void)_deliverConnectionStatusFromDealloc:(BOOL)a0;
- (void)_deliverURLToken:(id)a0 forInfo:(id)a1;
- (void)sendFakeMessage:(id)a0;
- (void)_addEnableStatusNotificationsToXPCMessage:(id)a0;
- (void)setEnabledTopics:(id)a0 ignoredTopics:(id)a1 opportunisticTopics:(id)a2 nonWakingTopics:(id)a3;
- (void)invalidateTokenForTopic:(id)a0 identifier:(id)a1;
- (void)requestTokenForTopic:(id)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (void)currentURLTokenForInfo:(id)a0;
- (void)_deliverOutgoingMessageResultWithID:(unsigned long long)a0 error:(id)a1 sendRTT:(unsigned long long)a2 ackTimestamp:(unsigned long long)a3;
- (void)_cancelConnectionOnIvarQueue;
- (void)_asyncOnDelegateQueueWithBlock:(id /* block */)a0;
- (void)_deliverFailedChannelSubscriptions:(id)a0 onTopic:(id)a1;
- (void)setPushWakeTopics:(id)a0;
- (void)setIgnoredTopics:(id)a0;
- (void)invalidateTokenForInfo:(id)a0;
- (id)_removeURLTokenBlocksForInfo:(id)a0;
- (void)calloutToInvalidateCompletion:(id /* block */)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)unsubscribeFromChannels:(id)a0 forTopic:(id)a1;
- (id)registeredChannelsForTopic:(id)a0 error:(id *)a1;
- (id)initWithEnvironmentName:(id)a0 namedDelegatePort:(id)a1 personaUniqueString:(id)a2 queue:(id)a3;
- (void)getRegisteredChannelsForTopic:(id)a0 withCompletion:(id /* block */)a1;
- (void)_deliverToken:(id)a0 forTopic:(id)a1 identifier:(id)a2;
- (void)unsubscribeFromChannel:(id)a0 forTopic:(id)a1;
- (void)subscribeToChannels:(id)a0 forTopic:(id)a1;
- (void)_setTrackActivityPresence:(BOOL)a0 sendToDaemon:(BOOL)a1;
- (void)requestKeepAlive;
- (id)initWithEnvironmentName:(id)a0 queue:(id)a1;
- (void)setNonWakingTopics:(id)a0;
- (void)_addTrackActivityPresenceToXPCMessage:(id)a0;
- (void)_shutdownOnIvarQueue;
- (void)_sendOutgoingMessage:(id)a0 fake:(BOOL)a1;
- (void)_deliverToken:(id)a0 forInfo:(id)a1;
- (id)_initWithEnvironmentName:(id)a0 namedDelegatePort:(id)a1 enablePushDuringSleep:(BOOL)a2 personaUniqueString:(id)a3 queue:(id)a4;
- (void)_connectIfNecessary;
- (void)setOpportunisticTopics:(id)a0;
- (BOOL)hasIdentity;
- (void)_dispatch_async_to_ivarQueue:(id /* block */)a0 shutdownBlock:(id /* block */)a1;
- (void)currentTokenForInfo:(id)a0;
- (void)requestTokenForInfo:(id)a0;
- (void)setEnabledTopics:(id)a0;
- (void)sendOutgoingMessage:(id)a0;
- (void)_deliverConnectionStatusChange:(BOOL)a0;
- (void)_deliverURLTokenError:(id)a0 forInfo:(id)a1;
- (void)_setEnableCriticalReliability:(BOOL)a0 sendToDaemon:(BOOL)a1;
- (void)invalidateURLTokenForInfo:(id)a0;
- (void)_dispatch_async_to_ivarQueue:(id /* block */)a0;
- (void)_handleEvent:(id)a0 withHandler:(id /* block */)a1;
- (void)_addPushWakeTopicsToXPCMessage:(id)a0;

@end
