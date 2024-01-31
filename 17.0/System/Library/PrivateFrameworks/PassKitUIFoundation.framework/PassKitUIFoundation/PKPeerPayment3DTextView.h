@class NSString, SCNView, PKPeerPayment3DStore, PKPeerPayment3DScene, NSMutableArray;

@interface PKPeerPayment3DTextView : UIView <SCNSceneRendererDelegate> {
    SCNView *_sceneView;
    PKPeerPayment3DScene *_scene;
    double _sceneWidthUnits;
    double _sceneHeightUnits;
    NSMutableArray *_performHandlers;
    double _dynamicRollPitchMix;
    double _startAnimationTime;
    double _animationDuration;
    double _lastRenderTime;
    BOOL _liveMotionEnabled;
    BOOL _willAnimate;
    BOOL _snapshotRequested;
    BOOL _usedForSnapshotting;
    unsigned long long _framesFullyRendered;
    PKPeerPayment3DStore *_3DStore;
    BOOL _layoutRequested;
    NSMutableArray *_charactersToDraw;
}

@property (readonly, nonatomic) unsigned long long renderStyle;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedCharacterSet;

- (void)didBecomeActive;
- (void)willResignActive;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)setText:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)layoutText;
- (id)generatedSnapshot;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 renderStyle:(unsigned long long)a1 usedForSnapshotting:(BOOL)a2;
- (void)performPostRender:(id /* block */)a0;
- (void)setMotionEffectEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)renderer:(id)a0 didRenderScene:(id)a1 atTime:(double)a2;
- (void)renderer:(id)a0 updateAtTime:(double)a1;
- (void /* unknown type, empty encoding */)_fakeAnimationRollPitchWithElapsedTime:(double)a0;
- (void)loadCharactersAndLayout;
- (void)updateSceneUnits;

@end
