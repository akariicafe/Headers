@protocol UIKBFocusGuideDelegate;

@interface UIKBFocusGuide : UIFocusGuide

@property (nonatomic) unsigned long long focusHeading;
@property (weak, nonatomic) id<UIKBFocusGuideDelegate> keyboardDelegate;

- (void)_didUpdateFocusToPreferredFocusedView;
- (id)focusGuideRegion:(id)a0 preferredFocusEnvironmentsForMovementRequest:(id)a1;
- (id)description;
- (BOOL)_isUnclippable;
- (void).cxx_destruct;
- (BOOL)_isUnoccludable;
- (float)_focusPriority;
- (BOOL)_ignoresSpeedBumpEdges;

@end
