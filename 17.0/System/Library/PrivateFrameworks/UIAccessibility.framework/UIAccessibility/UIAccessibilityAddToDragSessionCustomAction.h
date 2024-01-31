@class UIView;

@interface UIAccessibilityAddToDragSessionCustomAction : UIAccessibilityCustomAction {
    struct CGPoint { double x; double y; } _pt;
    UIView *_view;
}

- (void).cxx_destruct;
- (id)_accessibilityCustomActionIdentifier;
- (BOOL)_accessibilityInvokeAddToSession;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 inSourceView:(id)a1;

@end
