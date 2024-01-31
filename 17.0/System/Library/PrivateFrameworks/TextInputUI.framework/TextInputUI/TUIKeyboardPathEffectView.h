@class MTKView, NSString, NSMutableIndexSet, CADisplayLink, TUIKeyboardPathRenderer, NSMutableArray, TUIKBHandwritingQuadCurvePointFIFO;

@interface TUIKeyboardPathEffectView : UIView <TUIKeyboardPathRendererDataSource>

@property (retain, nonatomic) TUIKBHandwritingQuadCurvePointFIFO *pointInterpolator;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSMutableArray *paths;
@property (nonatomic) BOOL increasedContrastEnabled;
@property (nonatomic) BOOL done;
@property (retain, nonatomic) NSMutableIndexSet *pointDecayQueue;
@property (retain, nonatomic) CADisplayLink *pointDecayDisplayLink;
@property (retain, nonatomic) TUIKeyboardPathRenderer *renderer;
@property (retain, nonatomic) MTKView *mtkView;
@property (nonatomic) BOOL createdMTKView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)keyboardAppearance;
- (void)reset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)textEffectsVisibilityLevel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)_currentPath;
- (void)_addDrawingPoint:(struct CGPoint { double x0; double x1; })a0 force:(double)a1 sentinel:(BOOL)a2;
- (void)_clearPointInterpolators;
- (struct { double x0; double x1; double x2; double x3; })_currentThemeSettings;
- (id)_pushNewPath;
- (void)accessibilityValueChanged:(id)a0;
- (void)addPoint:(struct CGPoint { double x0; double x1; })a0 force:(double)a1 timestamp:(double)a2;
- (void)buildOut;
- (void)createMTKViewIfNecessary;
- (id)pathsToRender;
- (void)updatePaths;

@end
