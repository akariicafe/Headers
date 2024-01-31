@class NSMutableDictionary, ARUserProfile, ARDaemonStatusLogger, NSObject, ARControlListener, ARAlgorithmConfiguration, ARDaemonService, NSMutableArray, NSString, NSMutableSet, ARSystemTimeSnapshot, NSArray, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface ARServer : NSObject <ARDaemonServiceDataSource, ARDaemonServiceDelegate, ARControlListenerDelegate, ARDaemonServiceListenerDelegate, ARLoggingFullDescription> {
    NSMutableArray *_services;
    NSMutableSet *_servicesClasses;
    NSMutableDictionary *_servicesByPID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _servicesLock;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSMutableDictionary *_latestTaskErrorMap;
    unsigned long long _batchServicesCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _batchedServicesLock;
    NSMutableArray *_batchedServices;
    NSObject<OS_dispatch_semaphore> *_batchedServicesConfiguredSemaphore;
    ARControlListener *_controlListener;
    NSObject<OS_dispatch_queue> *_statusQueue;
    NSObject<OS_dispatch_source> *_statusTimer;
    BOOL _inProcess;
    ARSystemTimeSnapshot *_spawnTime;
    NSUUID *_sessionUUID;
    ARDaemonStatusLogger *_statusLogger;
}

@property (retain) NSArray *servicesBeingAdded;
@property (retain) ARDaemonService *serviceBeingRemoved;
@property BOOL isKeybagUnlocked;
@property (retain, nonatomic) ARUserProfile *userProfile;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain) ARAlgorithmConfiguration *currentConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setServices:(id)a0;
- (void)suspend;
- (void)invalidate;
- (void)resume;
- (id)_fullDescription;
- (void).cxx_destruct;
- (void)_removeService:(id)a0;
- (id)listenerEndPointForServiceNamed:(id)a0;
- (BOOL)commitServices:(id)a0;
- (BOOL)_addServices:(id)a0;
- (void)_configureServiceForExecution:(id)a0;
- (void)_logDaemonStatusWithType:(id)a0;
- (id)_peerServicesOfService:(id)a0;
- (void)_setupStatusTimer;
- (void)_updateServicesByPID;
- (BOOL)_updateWithServices:(id)a0 error:(id *)a1;
- (id)daemonServiceForServiceNamed:(id)a0;
- (void)didDiscoverControl:(id)a0;
- (void)didDiscoverService:(id)a0;
- (id)fullDescriptionWithWaitEndOfTransition:(BOOL)a0;
- (id)initInProcess:(BOOL)a0 spawnTime:(id)a1 sessionUUID:(id)a2 watchdogMonitor:(id)a3 executionManager:(id)a4;
- (long long)numberOfActiveConnectionsForService:(id)a0;
- (id)service:(id)a0 peerServiceOfType:(Class)a1;
- (void)serviceDidInterrupt:(id)a0;
- (void)serviceDidInvalidate:(id)a0;
- (id)statusDictionaryWithWaitEndOfTransition:(BOOL)a0;
- (id)statusStringWithWaitEndOfTransition:(BOOL)a0;
- (BOOL)updateAlgorithmConfigurationWithService:(id)a0;
- (BOOL)updateAlgorithmConfigurationWithServices:(id)a0;

@end
