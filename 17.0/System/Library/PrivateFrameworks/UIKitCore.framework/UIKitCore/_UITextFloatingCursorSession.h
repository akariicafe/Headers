@class _UITextCursorView, NSString, UITextSelectionDisplayInteraction;
@protocol UITextCursorAssertion;

@interface _UITextFloatingCursorSession : NSObject <_UIInvalidatable> {
    BOOL _isValid;
    id<UITextCursorAssertion> _ghostCursorAssertion;
}

@property (readonly, weak, nonatomic) UITextSelectionDisplayInteraction *manager;
@property (readonly, nonatomic) _UITextCursorView *floatingCursorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_invalidate;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_floatingCursorPositionForPoint:(struct CGPoint { double x0; double x1; })a0 lineSnapping:(BOOL)a1;
- (void)_invalidateAnimated:(BOOL)a0;
- (id)_selectionContainerView;
- (id)_springAnimation;
- (void)_updateCursorFadedHiddenForFloatingCursorAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCursorView:(id)a0 selectionManager:(id)a1;
- (void)updateWithPoint:(struct CGPoint { double x0; double x1; })a0 inContainer:(id)a1 animated:(BOOL)a2;

@end
