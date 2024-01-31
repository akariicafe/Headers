@class _UIStatusBarItem, _UIStatusBarDisplayItemPlacementState, _UIStatusBarAnimation, NSArray, _UIStatusBarIdentifier, _UIStatusBar, NSMutableArray, _UIStatusBarStyleAttributes, NSMutableSet, _UIStatusBarDisplayItem;

@interface _UIStatusBarDisplayItemState : NSObject <_UIStatusBarPrioritized>

@property (copy, nonatomic) _UIStatusBarIdentifier *identifier;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (weak, nonatomic) _UIStatusBarItem *item;
@property (weak, nonatomic) _UIStatusBarDisplayItem *displayItem;
@property (retain, nonatomic) NSMutableArray *placementStates;
@property (readonly, nonatomic) _UIStatusBarDisplayItemPlacementState *currentPlacementState;
@property (nonatomic) long long preferredPlacementStateIndex;
@property (nonatomic) long long currentPlacementStateIndex;
@property (retain, nonatomic) _UIStatusBarStyleAttributes *overriddenStyleAttributes;
@property (nonatomic) BOOL wasEnabled;
@property (nonatomic) BOOL wasVisible;
@property (nonatomic) long long previousPlacementStateIndex;
@property (readonly, nonatomic, getter=_animationType) long long animationType;
@property (nonatomic) long long dataUpdateStatus;
@property (nonatomic) long long placementUpdateStatus;
@property (readonly, nonatomic, getter=isEnabledIgnoringAnimations) BOOL enabledIgnoringAnimations;
@property (nonatomic) BOOL dataEnabled;
@property (nonatomic) BOOL floating;
@property (nonatomic) long long enabilityStatus;
@property (nonatomic) long long visibilityStatus;
@property (retain, nonatomic) _UIStatusBarAnimation *addingAnimation;
@property (retain, nonatomic) _UIStatusBarAnimation *removingAnimation;
@property (readonly, nonatomic) NSMutableSet *animations;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSArray *potentialPlacementRegionIdentifiers;
@property (readonly, nonatomic) long long priority;

+ (void)setupRelationsBetweenDisplayItemStates:(id)a0 visualProvider:(id)a1;
+ (id)stateForDisplayItemWithIdentifier:(id)a0 statusBar:(id)a1;

- (BOOL)hasRunningAnimations;
- (void)_cancelObsoleteAnimations;
- (void)resetToPreferredPlacement;
- (id)_effectiveStyleAttributesFromStyleAttributes:(id)a0 data:(id)a1 styleAttributesChanged:(BOOL *)a2;
- (BOOL)prepareAnimation:(id)a0;
- (id)_updateForItem:(id)a0 data:(id)a1 styleAttributes:(id)a2;
- (void)addPlacement:(id)a0 inRegion:(id)a1;
- (id)placementStateForPlacement:(id)a0;
- (void)prepareForOverflowDataUpdate;
- (void)prepareForDataUpdate;
- (id)description;
- (BOOL)_updatePlacementWithRecursionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)updateWithData:(id)a0 styleAttributes:(id)a1;
- (BOOL)updatePlacement;
- (BOOL)_resolveDependentItemStatesWithBlock:(id /* block */)a0;
- (id)_animationWithUpdateAnimation:(id)a0;
- (BOOL)_updateToNextPlacementStateIfNeeded;
- (void)_updateStatuses;
- (BOOL)isCurrentPlacement:(id)a0;
- (void)updateToNextEnabledPlacement;
- (id)_updateForUpdatedData:(id)a0 updatedStyleAttributes:(id)a1 updatedEnability:(id)a2;

@end
