@class STUIStatusBarDisplayItem, STUIStatusBarItem, STUIStatusBarDisplayItemPlacementState, STUIStatusBar, NSArray, NSString, STUIStatusBarAnimation, NSMutableArray, STUIStatusBarStyleAttributes, NSMutableSet, STUIStatusBarIdentifier;

@interface STUIStatusBarDisplayItemState : NSObject <BSDebugDescriptionProviding, STUIStatusBarPrioritized>

@property (copy, nonatomic) STUIStatusBarIdentifier *identifier;
@property (weak, nonatomic) STUIStatusBar *statusBar;
@property (weak, nonatomic) STUIStatusBarItem *item;
@property (weak, nonatomic) STUIStatusBarDisplayItem *displayItem;
@property (retain, nonatomic) NSMutableArray *placementStates;
@property (readonly, nonatomic) STUIStatusBarDisplayItemPlacementState *currentPlacementState;
@property (nonatomic) long long preferredPlacementStateIndex;
@property (nonatomic) long long currentPlacementStateIndex;
@property (retain, nonatomic) STUIStatusBarStyleAttributes *overriddenStyleAttributes;
@property (nonatomic) BOOL wasEnabled;
@property (nonatomic) BOOL wasVisible;
@property (nonatomic) long long previousPlacementStateIndex;
@property (readonly, nonatomic, getter=_animationType) long long animationType;
@property (nonatomic) long long dataUpdateStatus;
@property (nonatomic) long long placementUpdateStatus;
@property (readonly, nonatomic, getter=isEnabledIgnoringAnimations) BOOL enabledIgnoringAnimations;
@property (nonatomic, getter=isDataEnabled) BOOL dataEnabled;
@property (nonatomic, getter=isFloating) BOOL floating;
@property (nonatomic) long long enabilityStatus;
@property (nonatomic) long long visibilityStatus;
@property (retain, nonatomic) STUIStatusBarAnimation *addingAnimation;
@property (retain, nonatomic) STUIStatusBarAnimation *removingAnimation;
@property (readonly, nonatomic) NSMutableSet *animations;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSArray *potentialPlacementRegionIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long priority;

+ (void)setupRelationsBetweenDisplayItemStates:(id)a0 visualProvider:(id)a1;
+ (id)stateForDisplayItemWithIdentifier:(id)a0 statusBar:(id)a1;

- (BOOL)hasRunningAnimations;
- (void)_cancelObsoleteAnimations;
- (id)succinctDescriptionBuilder;
- (void)resetToPreferredPlacement;
- (id)_effectiveStyleAttributesFromStyleAttributes:(id)a0 data:(id)a1 styleAttributesChanged:(BOOL *)a2;
- (BOOL)prepareAnimation:(id)a0;
- (id)_updateForItem:(id)a0 data:(id)a1 styleAttributes:(id)a2;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (void)addPlacement:(id)a0 inRegion:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)placementStateForPlacement:(id)a0;
- (void)prepareForOverflowDataUpdate;
- (void)prepareForDataUpdate;
- (BOOL)_updatePlacementWithRecursionBlock:(id /* block */)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)updateWithData:(id)a0 styleAttributes:(id)a1;
- (BOOL)updatePlacement;
- (id)succinctDescription;
- (BOOL)_resolveDependentItemStatesWithBlock:(id /* block */)a0;
- (id)_animationWithUpdateAnimation:(id)a0;
- (BOOL)_updateToNextPlacementStateIfNeeded;
- (void)_updateStatuses;
- (BOOL)isCurrentPlacement:(id)a0;
- (void)updateToNextEnabledPlacement;
- (id)_updateForUpdatedData:(id)a0 updatedStyleAttributes:(id)a1 updatedEnability:(id)a2;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
