@class UIKBKeyView;

@interface UIKBContainerKeyView : UIKBKeyView {
    UIKBKeyView *_keyView;
}

- (id)keyplane;
- (void)dimKeys:(id)a0;
- (id)renderConfig;
- (void)setNeedsDisplay;
- (void)setFactory:(id)a0;
- (void)displayLayer:(id)a0;
- (id)factory;
- (void)setRenderConfig:(id)a0;
- (id)key;
- (void)prepareForDisplay;
- (void)setScreenTraits:(id)a0;
- (void).cxx_destruct;
- (id)contentsKeyView;
- (void)changeBackgroundToActiveIfNecessary;
- (void)changeBackgroundToEnabled;
- (void)dimContentKeyView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawFrame;
- (BOOL)hasRendered;
- (long long)imageOrientationForLayer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;
- (id)layerForRenderFlags:(long long)a0;
- (BOOL)requiresSublayers;
- (void)setDrawFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateForKeyplane:(id)a0 key:(id)a1;
- (void)updateKeycapLayerOrientation;

@end
