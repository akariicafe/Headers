@class IRProximityProvider, NSString, IRAVOutputDeviceProvider, IRBackgroundActivitiesManager, NSMutableDictionary, IRPersistenceManager, IRRapportProvider, NSObject, IRBiomeProvider, IRDisplayMonitor, IRAVOutputContextController;
@protocol OS_dispatch_queue;

@interface IRSessionServer : NSObject <IRServiceContainerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSMutableDictionary *connections;
@property (retain, nonatomic) NSMutableDictionary *services;
@property (retain, nonatomic) IRAVOutputDeviceProvider *avOutputDeviceProvider;
@property (retain, nonatomic) IRRapportProvider *rapportProvider;
@property (retain, nonatomic) IRProximityProvider *proximityProvider;
@property (retain, nonatomic) IRPersistenceManager *persistenceManager;
@property (retain, nonatomic) IRBackgroundActivitiesManager *backgroundActivitiesManager;
@property (retain, nonatomic) IRDisplayMonitor *displayMonitor;
@property (retain, nonatomic) IRAVOutputContextController *audioAVOutputContextController;
@property (retain, nonatomic) IRBiomeProvider *biomeProvider;
@property (nonatomic) unsigned long long stateCaptureHandle;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)shouldAcceptNewConnection:(id)a0;
- (void)_logConnectionsAndServices;
- (void)_logStateOnStateCaptureEvent;
- (void)_refreshUpdateModeForServiceIdentifier:(id)a0;
- (BOOL)isGlobalLowLatencyMiLoWithPersistenceManager:(id)a0;
- (void)performXPCActivityUnderServerContext:(id /* block */)a0;
- (void)refreshUpdateModeForServiceIdentifier:(id)a0;
- (id)registerWithServiceIdentifier:(id)a0 withConnection:(id)a1;
- (void)serviceContainer:(id)a0 didUpdateContexts:(id)a1 withReason:(id)a2;
- (BOOL)unregisterWithServiceIdentifier:(id)a0 withConnection:(id)a1;

@end
