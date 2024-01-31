@class NSArray, NSString, UIFocusEffect, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer, UIFocusItem;

@interface UIFocusGuide : UILayoutGuide <UIFocusItem, _UILegacyFocusRegion, _UIFocusRegionContainer, _UIFocusGuideRegionDelegate> {
    BOOL _didSetPreferredFocusedEnvironments;
}

@property (nonatomic, getter=_automaticallyPreferOwningView, setter=_setAutomaticallyPreferOwningView:) BOOL automaticallyPreferOwningView;
@property (nonatomic, getter=_automaticallyDisableWhenIntersectingFocus, setter=_setAutomaticallyDisableWhenIntersectingFocus:) BOOL automaticallyDisableWhenIntersectingFocus;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property (readonly, nonatomic) long long focusGroupPriority;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, nonatomic) id<UIFocusItem> focusItemForSorting;

- (void)_didUpdateFocusToPreferredFocusedView;
- (void)setNeedsFocusUpdate;
- (id)init;
- (BOOL)_isPromiseFocusRegion;
- (BOOL)_uili_isFocusGuide;
- (BOOL)_legacy_isEligibleForFocusInteraction;
- (id)_encodablePreferredFocusEnvironments;
- (void)encodeWithCoder:(id)a0;
- (void)updateFocusIfNeeded;
- (id)focusGuideRegion:(id)a0 preferredFocusEnvironmentsForMovementRequest:(id)a1;
- (void)focusGuideRegion:(id)a0 willParticipateAsDestinationRegionInFocusUpdate:(id)a1;
- (BOOL)_isTransparentFocusRegion;
- (id)_focusRegionFocusSystem;
- (BOOL)_isUnclippable;
- (id)_focusRegionGuides;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;
- (id)_focusRegionView;
- (void).cxx_destruct;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (BOOL)_isUnoccludable;
- (id)_focusDebugOverlayParentView;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusRegionFrame;
- (id)_preferredFocusRegionCoordinateSpace;
- (float)_focusPriority;
- (id)_fulfillPromisedFocusRegion;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_ignoresSpeedBumpEdges;

@end
