@class UIColor;

@interface VFXCore.VFXCoreView : UIView {
    void /* unknown type, empty encoding */ isDragging;
    void /* unknown type, empty encoding */ lastTouch;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ renderOutput;
    void /* unknown type, empty encoding */ metalLayer;
    void /* unknown type, empty encoding */ sampleCount;
    void /* unknown type, empty encoding */ preferredFramesPerSecond;
    void /* unknown type, empty encoding */ scaleFactor;
    void /* unknown type, empty encoding */ postRenderCallback;
    void /* unknown type, empty encoding */ entityManager;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ stereoMode;
    void /* unknown type, empty encoding */ paused;
    void /* unknown type, empty encoding */ effectID;
    void /* unknown type, empty encoding */ sizeDirty;
    void /* unknown type, empty encoding */ drawableSize;
    void /* unknown type, empty encoding */ resizingMode;
}

@property (class, nonatomic, readonly) Class layerClass;

@property (nonatomic) BOOL hidden;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, retain) UIColor *backgroundColor;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
