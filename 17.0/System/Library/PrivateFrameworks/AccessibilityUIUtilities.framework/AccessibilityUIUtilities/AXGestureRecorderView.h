@class UIColor, NSMutableDictionary, AXGestureRecorderStyleProvider, NSString, UIView, NSMutableArray, UIAccessibilityCustomAction;
@protocol AXGestureRecorderViewDelegate;

@interface AXGestureRecorderView : AXGestureRecorderGradientView <CAAnimationDelegate> {
    double _freezeDryStartTime;
    double _freezeDryDrawPercentage;
    double _freezeDryStartIndex;
    NSMutableArray *_freezedDynamicPaths;
    NSMutableDictionary *_activeLayers;
    NSMutableDictionary *_instantReplayViews;
    NSMutableArray *_staticLayers;
    NSMutableArray *_transitionLayers;
}

@property (retain, nonatomic) UIView *dynamicFingerPathsContainerView;
@property (retain, nonatomic) UIColor *dynamicFingerPathBackgroundGradientPatternColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } constrainedBoundsForDrawing;
@property (retain, nonatomic) UIAccessibilityCustomAction *hideControlsAction;
@property (retain, nonatomic) UIAccessibilityCustomAction *showControlsAction;
@property (retain, nonatomic) NSMutableDictionary *previouslyActiveLayersByInstantReplayFingerIndex;
@property (retain, nonatomic) AXGestureRecorderStyleProvider *styleProvider;
@property (weak, nonatomic) id<AXGestureRecorderViewDelegate> dataSource;
@property (nonatomic) BOOL replayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityCustomActions;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)didMoveToWindow;
- (void)_hideControls;
- (void)insertDynamicFingerPathAtIndex:(unsigned long long)a0;
- (void)reloadDynamicFingerPathAtIndex:(unsigned long long)a0;
- (id)_dynamicFingerPathAtIndex:(unsigned long long)a0;
- (void)_performTransitionToStaticFingers:(id)a0 transitionLayers:(id)a1 hasExistingStaticFingers:(BOOL)a2;
- (void)_showControls;
- (void)clearInstantReplayFingerPaths;
- (void)deleteAllFingerPaths;
- (void)fingerPathDidChange:(unsigned long long)a0;
- (void)finishInstantReplayAtIndex:(unsigned long long)a0;
- (void)freezeAllDynamicFingerPaths;
- (void)freezeAllDynamicFingerPathsWithInstantReplayOffset:(unsigned long long)a0;
- (void)hideStaticView;
- (void)updateInstantReplayAtIndex:(unsigned long long)a0 withPartialPath:(id)a1;

@end
