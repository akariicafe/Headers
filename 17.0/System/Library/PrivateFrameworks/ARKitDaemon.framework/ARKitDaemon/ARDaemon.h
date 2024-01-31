@class ARMemoryPressureMonitor, NSString, NSArray, ARDaemonServiceListener, ARServer, NSUUID, NSObject, ARSystemTimeSnapshot;
@protocol OS_dispatch_source;

@interface ARDaemon : NSObject <ARMemoryPressureMonitorDelegate> {
    BOOL _anonymousListenerEnabled;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    ARMemoryPressureMonitor *_memoryPressureMonitor;
    ARSystemTimeSnapshot *_spawnTime;
    NSUUID *_sessionUUID;
    double _lastDaemonHeartbeatEventReportedTimestamp;
}

@property (class, readonly, weak, nonatomic) ARDaemon *localAnonymousListenerDaemon;

@property (readonly, nonatomic) ARDaemonServiceListener *listener;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) ARServer *server;
@property (readonly, nonatomic) NSArray *runningRemoteServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_fullDescription;
+ (id)_runningDaemons;
+ (id)createAnonymousListenerDaemon;
+ (id)createAnonymousListenerDaemonWithReplayURL:(id)a0 deterministic:(BOOL)a1 replayDelegate:(id)a2;
+ (id)createAnonymousListenerDaemonWithReplayURL:(id)a0 deterministic:(BOOL)a1 replayDelegate:(id)a2 isDryRun:(BOOL)a3;

- (void)printInfo;
- (void)shutdown;
- (void)dealloc;
- (id)_fullDescription;
- (void).cxx_destruct;
- (void)startup;
- (id)listenerEndPointForServiceNamed:(id)a0;
- (void)_heartbeat;
- (id)initWithSpawnTime:(id)a0 watchdogMonitor:(id)a1;
- (id)initWithSpawnTime:(id)a0 watchdogMonitor:(id)a1 anonymousListenerEnabled:(BOOL)a2 graphScheduler:(id)a3 replayDelegate:(id)a4;
- (void)memoryPressureMonitor:(id)a0 didUpdateProcessMemoryPressureCondition:(long long)a1;
- (void)memoryPressureMonitor:(id)a0 didUpdateSystemMemoryPressureCondition:(long long)a1;
- (void)setLocalAnonymousListenerDaemon:(id)a0;
- (void)startWithServices:(id)a0;

@end
