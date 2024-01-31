@class NSArray, NSString, UIFocusEffect, UIView, NSIndexPath, UITableView;
@protocol UIFocusEnvironment, UIFocusItemContainer, UICoordinateSpace;

@interface _UITableViewCellPromiseRegion : NSObject <UIFocusItem, _UIFocusItemContainerPrivate, _UIFocusRegionContainer, _UILegacyFocusRegion>

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property (readonly, nonatomic) long long focusGroupPriority;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;

- (void)setNeedsFocusUpdate;
- (BOOL)_isPromiseFocusRegion;
- (BOOL)_legacy_isEligibleForFocusInteraction;
- (void)updateFocusIfNeeded;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isTransparentFocusRegion;
- (id)_focusRegionFocusSystem;
- (id)_focusRegionGuides;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;
- (id)_focusRegionView;
- (void).cxx_destruct;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (id)_focusDebugOverlayParentView;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusRegionFrame;
- (id)_preferredFocusRegionCoordinateSpace;
- (id)_fulfillPromisedFocusRegion;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (BOOL)_isLazyFocusItemContainer;

@end
