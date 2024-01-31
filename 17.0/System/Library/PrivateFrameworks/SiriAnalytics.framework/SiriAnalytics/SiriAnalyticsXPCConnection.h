@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

@interface SiriAnalyticsXPCConnection : NSObject <SiriAnalyticsXPCService> {
    NSString *_machServiceName;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_group> *_xpcPublishingGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_currentConnection;
- (oneway void)saveState:(id)a0 forPluginWithCompletion:(id /* block */)a1;
- (void)dealloc;
- (void)_saveState:(id)a0 forPluginWithCompletion:(id /* block */)a1;
- (void)_publishMessagesToRemote:(id)a0 attempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)resetLogicalClockWithCompletion:(id /* block */)a0;
- (oneway void)resolveMessages:(id)a0 completion:(id /* block */)a1;
- (oneway void)publishMessages:(id)a0 completion:(id /* block */)a1;
- (void)_createTag:(id)a0 completion:(id /* block */)a1;
- (oneway void)setKillSwitchEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (oneway void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)barrierWithCompletion:(id /* block */)a0;
- (oneway void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)_fetchKillSwitchEnabledWithCompletion:(id /* block */)a0;
- (void)_fetchTags:(id /* block */)a0;
- (oneway void)_publishLargeMessage:(id)a0 completion:(id /* block */)a1;
- (void)_fetchSensitiveConditionSpansWithCompletion:(id /* block */)a0;
- (void)_connectionInvalidated;
- (void)_cleanupConnection;
- (void)_stopIdleTimer;
- (void)_fetchLogicalClocksWithCompletion:(id /* block */)a0;
- (oneway void)fetchSensitiveConditionSpansWithCompletion:(id /* block */)a0;
- (void)_sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_vendSandboxExtensionWithResource:(long long)a0 readonly:(BOOL)a1 completion:(id /* block */)a2;
- (oneway void)_publishLargeMessageToRemote:(id)a0 attempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_resolveMessages:(id)a0 completion:(id /* block */)a1;
- (oneway void)publishUnorderedMessages:(id)a0 completion:(id /* block */)a1;
- (void)_startIdleTimer;
- (void)_idleTimerFired;
- (id)initWithMachServiceName:(id)a0;
- (void)_publishMessages:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchStateForPluginWithCompletion:(id /* block */)a0;
- (oneway void)createTag:(id)a0 completion:(id /* block */)a1;
- (void)_connectionInterrupted;
- (oneway void)fetchTags:(id /* block */)a0;
- (oneway void)fetchKillSwitchEnabledWithCompletion:(id /* block */)a0;
- (oneway void)vendSandboxExtensionWithResource:(long long)a0 readonly:(BOOL)a1 completion:(id /* block */)a2;
- (void)_resetLogicalClockWithCompletion:(id /* block */)a0;
- (void)_publishUnorderedMessages:(id)a0 attempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_resolveMessagesAtRemote:(id)a0 attempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_fetchStateForPluginWithCompletion:(id /* block */)a0;
- (oneway void)_setKillSwitchEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)_sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)publishLargeMessage:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchLogicalClocksWithCompletion:(id /* block */)a0;

@end
