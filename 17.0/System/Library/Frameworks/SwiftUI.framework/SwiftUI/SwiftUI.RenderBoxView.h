@interface SwiftUI.RenderBoxView : SwiftUI._UIGraphicsView <RBLayerDelegate> {
    void /* unknown type, empty encoding */ rendersFirstFrameAsynchronously;
}

@property (class, nonatomic, readonly) Class layerClass;

@property (nonatomic) BOOL opaque;

- (void)setNeedsDisplay;
- (BOOL)isOpaque;
- (void)dealloc;
- (void)RBLayer:(id)a0 draw:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
