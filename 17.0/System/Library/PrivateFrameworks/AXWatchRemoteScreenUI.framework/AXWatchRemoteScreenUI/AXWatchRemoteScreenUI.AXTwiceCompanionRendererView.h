@interface AXWatchRemoteScreenUI.AXTwiceCompanionRendererView : UIView <UIAccessibilityBridgeAXActionHandler> {
    void /* unknown type, empty encoding */ mirroringLayer;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ cornerRadiusRatio;
}

- (BOOL)performAXAction:(int)a0 withValue:(id)a1 onBridgeElement:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
