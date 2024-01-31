@class NSString, EXBDisplayAssertionCoordinator, EXBDisplayMonitor, EXBDisplayAssertionCoordinatorPolicy, NSMutableSet, NSMutableDictionary;
@protocol BSInvalidatable;

@interface EXBDisplayProfileRegistry : NSObject <FBSDisplayTransformer, EXBDisplayMonitorDelegate, BSDescriptionStreamable> {
    Class _ConfigBuilderClass;
    id<BSInvalidatable> _transformerRegistryToken;
    EXBDisplayMonitor *_displayMonitor;
    EXBDisplayAssertionCoordinator *_assertionCoordinator;
    EXBDisplayAssertionCoordinatorPolicy *_assertionCoordinatorPolicy;
    NSMutableSet *_registeredProfiles;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_rootDisplayDrivers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)displayMonitor:(id)a0 didUpdateIdentity:(id)a1 withConfiguration:(id)a2;
- (void)activate;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (id)transformDisplayConfiguration:(id)a0;
- (id)displayProfileForIdentity:(id)a0;
- (id)initWithDisplayTransformerRegistry:(id)a0;
- (void)registerDisplayProfile:(id)a0;
- (void)_evaluateForPhysicalDisplay:(id)a0 driver:(id)a1 profile:(id)a2;
- (void)displayMonitor:(id)a0 didDisconnectIdentity:(id)a1;
- (void)evaluateProfilesForConnectedDisplays;
- (id)initWithDisplayTransformerRegistry:(id)a0 displayMonitor:(id)a1 assertionCoordinator:(id)a2 builderClass:(Class)a3;

@end
