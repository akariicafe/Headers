@class UIColor;
@protocol MTLCommandQueue;

@interface VFX.VFXView : UIView {
    void /* unknown type, empty encoding */ delegateImpl;
    void /* unknown type, empty encoding */ coreView;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ scene;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic, readonly) id<MTLCommandQueue> commandQueue;
@property (nonatomic, copy) id /* block */ postRenderCallback;
@property (nonatomic, retain) void /* unknown type, empty encoding */ effect;
@property (nonatomic, retain) void /* unknown type, empty encoding */ pointOfView;
@property (nonatomic) unsigned char resizingMode;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) double scaleFactor;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) BOOL lowLatency;
@property (nonatomic) BOOL hidden;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)renderWithCompletion:(id /* block */)a0;
- (void)renderWithPresentWithTransaction:(BOOL)a0 completion:(id /* block */)a1;

@end
