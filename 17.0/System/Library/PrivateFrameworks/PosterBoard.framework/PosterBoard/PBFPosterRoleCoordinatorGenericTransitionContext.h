@class NSString, NSDictionary, NSMutableDictionary, NSUUID;
@protocol FCActivityDescribing;

@interface PBFPosterRoleCoordinatorGenericTransitionContext : NSObject <PBFPosterRoleCoordinatorTransitionContext> {
    NSDictionary *_extensionStoreCoordinatorForProviderIdentifier;
    NSMutableDictionary *_desiredActivePosterConfigurationForRole;
    NSDictionary *_currentActivePosterForRole;
    id<FCActivityDescribing> _activeFocusMode;
    BOOL _transitionFromIncomingFocusModeChange;
    NSUUID *_transitionContextIdentifier;
    NSString *_activeChargerIdentifier;
    NSString *_description;
}

@property (nonatomic, getter=isInitialUpdate, setter=setInitialUpdate:) BOOL isInitialUpdate;
@property (readonly, nonatomic) NSDictionary *pbf_extensionStoreCoordinatorForProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)pbf_currentActivePosterForRole:(id)a0;
- (id)pbf_transitionContextIdentifier;
- (id)initWithActiveFocusMode:(id)a0 activeChargerIdentifier:(id)a1 extensionStoreCoordinators:(id)a2 currentActivePosterForRole:(id)a3;
- (id)pbf_activeChargerIdentifier;
- (id)pbf_activeFocusMode;
- (id)pbf_desiredActiveConfigurationForRole:(id)a0;
- (BOOL)pbf_transitionFromIncomingFocusModeChange;
- (void)setDesiredActiveConfiguration:(id)a0 forRole:(id)a1;
- (void)setTransitionFromIncomingFocusModeChange:(BOOL)a0;

@end
