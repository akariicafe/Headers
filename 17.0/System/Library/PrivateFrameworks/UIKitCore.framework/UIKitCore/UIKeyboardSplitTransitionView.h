@class NSArray, UIKeyboardSliceSet, CADisplayLink;
@protocol UIKeyboardKeyplaneTransitionDelegate, UIKeyboardSplitTransitionDataSource;

@interface UIKeyboardSplitTransitionView : UIView {
    double _currentProgress;
    double _liftOffProgress;
    double _finishProgress;
    double _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink *_displayLink;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endFrame;
    BOOL _centerFilled;
    BOOL _isRebuilding;
    BOOL _isSplitTranslation;
    UIKeyboardSliceSet *_sliceSet;
}

@property (copy) id /* block */ completionBlock;
@property (weak, nonatomic) id<UIKeyboardKeyplaneTransitionDelegate> splitTransitionDelegate;
@property (weak, nonatomic) id<UIKeyboardSplitTransitionDataSource> splitTransitionDataSource;
@property (readonly) NSArray *shadowLayers;
@property (readonly) NSArray *backgroundLayers;

- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)bottomDropShadow;
- (BOOL)canDisplayTransition;
- (id)centerDropShadow;
- (id)colorsForBackgroundLayer:(int)a0;
- (struct CGImage { } *)defaultKeyboardImage;
- (void)finalizeTransition;
- (void)finishWithProgress:(double)a0 completionBlock:(id /* block */)a1;
- (void)initializeLayers;
- (struct CGImage { } *)keyImageWithToken:(id)a0;
- (id)outerCenterDropShadow;
- (void)rebuildControlKeys:(unsigned long long)a0;
- (void)rebuildFromKeyplane:(id)a0 toKeyplane:(id)a1 startToken:(id)a2 endToken:(id)a3 keyboardType:(long long)a4 orientation:(long long)a5;
- (void)rebuildTransitionForSplitStyleChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectEnclosingKeyplane:(id)a0;
- (BOOL)shouldAllowRubberiness;
- (BOOL)showDictationKey;
- (BOOL)showIntlKey;
- (struct CGSize { double x0; double x1; })sizeForShadowLayer:(int)a0;
- (struct CGImage { } *)splitKeyboardImage;
- (id)topDropShadow;
- (void)transformForProgress:(double)a0;
- (BOOL)transitionIsVisible;
- (void)transitionToFinalState:(id)a0;
- (void)updateWithProgress:(double)a0;

@end
