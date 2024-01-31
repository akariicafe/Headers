@class NWStatsEntityMapperNEHelper, NWStatsEntityMapperProcessWatcher, NWStatsEntityMapperStaticAssignment, NWStatsEntityMapperCoalitionWatcher, NWStatsEntityMapperDynamicLaunchServices, NSSet, NSMutableDictionary, NSObject, NWStatsAppEventListener, NWAppStateHandler;
@protocol OS_dispatch_queue;

@interface NWStatsMonitor : NSObject {
    NWStatsEntityMapperCoalitionWatcher *_coalitionUUIDMapper;
    NWStatsEntityMapperStaticAssignment *_staticAssignmentSymptomsUUIDMapper;
    NWStatsEntityMapperStaticAssignment *_staticAssignmentCommCenterUUIDMapper;
    NWStatsEntityMapperNEHelper *_neHelperUUIDMapper;
    NWStatsEntityMapperDynamicLaunchServices *_dynamicLaunchServicesUUIDMapper;
    NWStatsEntityMapperProcessWatcher *_processWatcherUUIDMapper;
    BOOL _useSymptomsMapping;
    BOOL _useNEHelper;
    BOOL _useLaunchServices;
    BOOL _useCoalitionIDs;
    BOOL _useProcessNames;
    NSSet *_useNEHelperSet;
    NSSet *_appendProcNameSet;
    NSSet *_knownDaemonSet;
    NSMutableDictionary *_reportedLookupFailures;
    NWStatsAppEventListener *_appEventListener;
    NWAppStateHandler *_appStateHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) BOOL debugMode;

- (void)configure:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)processNameForUUIDString:(id)a0;
- (id)stateDictionary;
- (id)processNameForUUID:(id)a0;
- (void)noteUUID:(id)a0 forPid:(int)a1 procname:(char[64] *)a2;
- (id)bestIdentifierForUUID:(id)a0 EUUID:(id)a1 pid:(int)a2 epid:(int)a3 procname:(char *)a4 derivation:(int *)a5;
- (void)invalidate;
- (void)noteFailedLookupFor:(id)a0 processName:(char *)a1 pid:(int)a2;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void).cxx_destruct;
- (id)allIdentifiersForUUID:(id)a0 EUUID:(id)a1 pid:(int)a2 epid:(int)a3 procname:(char *)a4;
- (BOOL)currentForegroundStateForProcessWithPid:(int)a0;
- (id)extensionNameForUUID:(id)a0;

@end
