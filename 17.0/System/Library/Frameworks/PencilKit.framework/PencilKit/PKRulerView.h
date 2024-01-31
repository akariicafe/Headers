@class PKRulerLayer;

@interface PKRulerView : UIView {
    BOOL _rulerHidden;
    PKRulerLayer *_rulerLayer;
}

- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
