@class SBDisplayAssertionCoordinator, NSString, NSArray, NSMapTable, SBDisplayPowerLogReporter, NSMutableDictionary, NSHashTable, SBSceneManagerCoordinator, FBSDisplayIdentity, FBDisplayManager;

@interface SBDisplayManager : NSObject <FBSDisplayObserving, SBDisplayAssertionCoordinatorDelegate> {
    FBDisplayManager *_displayManager;
    SBSceneManagerCoordinator *_sceneManagerCoordinator;
    SBDisplayAssertionCoordinator *_assertionCoordinator;
    NSMutableDictionary *_connectedIdentityToRecordMap;
    NSMutableDictionary *_rootIdentityToLayoutPublisherMap;
    NSMutableDictionary *_rootIdentityToCADisplayQueueMap;
    NSMapTable *_controllerToAssertionMap;
    NSString *_disableIdleSleepReason;
    NSMutableDictionary *_rootIdentityToDisableSleepReasons;
    NSMutableDictionary *_rootIdentityToDisplayArrangementItems;
    NSMutableDictionary *_rootIdentityToCloneMirroringMode;
    NSMutableDictionary *_rootIdentityToCloneMirroringModeTokens;
    SBDisplayPowerLogReporter *_powerLogReporter;
    NSHashTable *_factories;
    NSMutableDictionary *_identityToControllerMap;
    NSMutableDictionary *_identityToWindowingModeMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_lock_observers;
}

@property (readonly, copy, nonatomic) NSArray *connectedIdentities;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setCloneMirroringMode:(unsigned long long)a0 forDisplay:(id)a1;
- (void)dealloc;
- (long long)windowingModeForDisplay:(id)a0;
- (void)_connectToIdentity:(id)a0 withConfiguration:(id)a1 forDisplayManagerInit:(BOOL)a2;
- (void)_deactivateLayoutPublisher:(id)a0 forDisconnectingDisplay:(id)a1;
- (id)_createAndActivateLayoutPublisherForConnectingDisplay:(id)a0;
- (void)assertionCoordinator:(id)a0 updatedAssertionPreferences:(id)a1 oldPreferences:(id)a2 forDisplay:(id)a3;
- (void)displayMonitor:(id)a0 didUpdateIdentity:(id)a1 withConfiguration:(id)a2;
- (id)initWithDisplayManager:(id)a0 sceneManagerCoordinator:(id)a1 assertionCoordinator:(id)a2 powerLogReporter:(id)a3;
- (void)registerDisplayControllerProvider:(id)a0;
- (id)configurationForIdentity:(id)a0;
- (void)_connectControllerWithInfo:(id)a0 toDisplay:(id)a1 configuration:(id)a2;
- (void).cxx_destruct;
- (id)layoutPublisherForDisplay:(id)a0;
- (void)_setDisplayArrangementItem:(id)a0 forDisplay:(id)a1;
- (void)_setPowerLogEntry:(id)a0 forDisplay:(id)a1;
- (void)displayMonitor:(id)a0 willDisconnectIdentity:(id)a1;
- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (void)beginMonitoringForExternalDisplays:(id /* block */)a0;
- (id)addObserver:(id)a0;
- (void)_setDisableIdleSleepReason:(id)a0 forDisplay:(id)a1;
- (id)_signpostMetadataForController:(id)a0;
- (void)updateTransformsWithCompletion:(id /* block */)a0;

@end
