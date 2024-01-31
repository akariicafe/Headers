@class _UIDebugIssueReport, _UIFocusMapSearchInfo, _UIDebugLogReport, UIView, UIFocusGuide, NSString, _UIFocusEnvironmentScrollableContainerTuple, _UIDebugIssueReportFormatter, _UIFocusItemInfo, NSArray, _UIFocusMovementInfo, _UIDynamicFocusGroupMap, UIImage;
@protocol UIFocusEnvironment, _UIFocusUpdateRequesting, _UIFocusBehavior, UIFocusItem;

@interface UIFocusUpdateContext : NSObject {
    struct { unsigned char isValid : 1; unsigned char hasValidated : 1; unsigned char shouldUpdateDestinationItem : 1; unsigned char sourceItemMayRemainFocused : 1; unsigned char didResolveCommonAncestorEnvironment : 1; } _flags;
}

@property (class, readonly, copy, nonatomic, getter=_defaultValidationReportFormatter) _UIDebugIssueReportFormatter *defaultValidationReportFormatter;

@property (retain, nonatomic, getter=_focusGroupMap, setter=_setFocusGroupMap:) _UIDynamicFocusGroupMap *focusGroupMap;
@property (readonly, nonatomic) id<_UIFocusBehavior> focusBehavior;
@property (readonly, nonatomic, getter=_request) id<_UIFocusUpdateRequesting> request;
@property (readonly, copy, nonatomic, getter=_sourceItemInfo) _UIFocusItemInfo *sourceItemInfo;
@property (readonly, copy, nonatomic, getter=_destinationItemInfo) _UIFocusItemInfo *destinationItemInfo;
@property (readonly, nonatomic, getter=_focusMovement) _UIFocusMovementInfo *focusMovement;
@property (retain, nonatomic, getter=_focusMapSearchInfo, setter=_setFocusMapSearchInfo:) _UIFocusMapSearchInfo *focusMapSearchInfo;
@property (readonly, weak, nonatomic, getter=_initialDestinationEnvironment) id<UIFocusEnvironment> initialDestinationEnvironment;
@property (readonly, weak, nonatomic, getter=_commonAncestorEnvironment) id<UIFocusEnvironment> commonAncestorEnvironment;
@property (retain, nonatomic, getter=_commonEnvironmentScrollableContainer, setter=_setCommonEnvironmentScrollableContainer:) _UIFocusEnvironmentScrollableContainerTuple *commonEnvironmentScrollableContainer;
@property (nonatomic, getter=_destinationViewDistanceOffscreen, setter=_setDestinationViewDistanceOffscreen:) double destinationViewDistanceOffscreen;
@property (nonatomic, getter=_isDeferredUpdate, setter=_setDeferredUpdate:) BOOL deferredUpdate;
@property (readonly, nonatomic, getter=_previouslyFocusedGroupIdentifier) NSString *previouslyFocusedGroupIdentifier;
@property (readonly, nonatomic, getter=_nextFocusedGroupIdentifier) NSString *nextFocusedGroupIdentifier;
@property (readonly, nonatomic, getter=_groupFilter) long long groupFilter;
@property (retain, nonatomic, getter=_regionMapSnapshots, setter=_setRegionMapSnapshots:) NSArray *regionMapSnapshots;
@property (readonly, nonatomic, getter=_regionMapSnapshotsVisualRepresentation) UIImage *regionMapSnapshotsVisualRepresentation;
@property (retain, nonatomic, getter=_preferredFocusReport, setter=_setPreferredFocusReport:) _UIDebugLogReport *preferredFocusReport;
@property (retain, nonatomic, getter=_validationReport, setter=_setValidationReport:) _UIDebugIssueReport *validationReport;
@property (readonly, weak, nonatomic, getter=_focusedGuide) UIFocusGuide *focusedGuide;
@property (readonly, nonatomic, getter=_focusRedirectedByGuide) BOOL focusRedirectedByGuide;
@property (readonly, nonatomic, getter=_focusVelocity) struct CGVector { double x0; double x1; } focusVelocity;
@property (readonly, weak, nonatomic) id<UIFocusItem> previouslyFocusedItem;
@property (readonly, weak, nonatomic) id<UIFocusItem> nextFocusedItem;
@property (readonly, weak, nonatomic) UIView *previouslyFocusedView;
@property (readonly, weak, nonatomic) UIView *nextFocusedView;
@property (readonly, nonatomic) unsigned long long focusHeading;

- (id)debugQuickLookObject;
- (id)init;
- (id)_initWithContext:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_focusMapSnapshotDebugInfoArray;
- (void)_didUpdateFocus;
- (void)_cacheFocusBehavior;
- (id)_initWithFocusMovementRequest:(id)a0 nextFocusedItem:(id)a1;
- (id)_initWithFocusUpdateRequest:(id)a0;
- (BOOL)_isFilteredToGroup;
- (BOOL)_isValidInFocusSystem:(id)a0;
- (id)_publicRegionMapSnapshots;
- (void)_restoreRestrictedFocusMovementWithMovement:(id)a0;
- (void)_setFocusRedirectedByGuide:(BOOL)a0;
- (void)_setFocusedGuide:(id)a0;
- (void)_setInitialDestinationEnvironment:(id)a0;
- (void)_setSourceItemInfo:(id)a0;
- (void)_updateDestinationItemIfNeeded;
- (void)_updateWithFocusGroupMap:(id)a0;
- (BOOL)_validate;
- (void)_willUpdateFocusFromFocusedItem:(id)a0;

@end
