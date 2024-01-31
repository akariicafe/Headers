@class NSArray, UIInputWindowController, NSMutableArray;

@interface UIInputWindowControllerHosting : NSObject {
    NSMutableArray *_hostingItems;
    unsigned long long _currentState;
}

@property (nonatomic) int extraHostsRequired;
@property (weak, nonatomic) UIInputWindowController *owner;
@property (readonly, retain, nonatomic) NSArray *allHostingItems;
@property (nonatomic) BOOL requiresConstraintUpdate;

- (void)clearInputAssistantViewEdgeConstraints;
- (void)disableViewSizingConstraints:(unsigned long long)a0 forNewView:(id)a1;
- (void)updateViewConstraints;
- (void)updateViewSizingConstraints;
- (void)clearInputViewEdgeConstraints;
- (void)resetInputViewVisibility;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrame;
- (void)removeInputAssistantHostView;
- (void)updateEmptyHeightConstraint;
- (void)updateConstraintInsets;
- (void)resetBackdropHeight;
- (void)clearInputAccessoryViewEdgeConstraints;
- (void)initializeTranslateGestureRecognizerIfNecessary;
- (void)removeMatchMoveAnimationIfNeeded;
- (void)extendKeyboardBackdropHeight:(double)a0 withDuration:(double)a1;
- (void)layoutIfNeeded;
- (BOOL)host:(id)a0 isForPurpose:(unsigned long long)a1;
- (id)itemForPurpose:(unsigned long long)a0;
- (void)reloadForPlacementForInputViewSet:(id)a0;
- (void)performForInputAccessoryBackdropViews:(id /* block */)a0;
- (id)scrollTrackingView;
- (void)setNeedsLayout;
- (id)expectedPlacementForHost:(id)a0;
- (void)removeAllAnimations;
- (id)placementForHost:(id)a0;
- (BOOL)useCrescendoHostingItem;
- (id)subPlacementFromPlacement:(id)a0 forHost:(id)a1;
- (void).cxx_destruct;
- (void)unloadForPlacement;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_inputViewPadding;
- (void)_updateBackdropViews;
- (unsigned long long)indexOfHost:(id)a0;
- (id)initWithHost:(id)a0;

@end
