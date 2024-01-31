@class CAMFeedbackController, UIImageView, CAMLevelViewModel, NSString;
@protocol CAMHorizonLevelViewDelegate;

@interface CAMHorizonLevelView : UIView <CAMLevelViewModelChangeObserver>

@property (retain, nonatomic) UIImageView *_horizonLineView;
@property (retain, nonatomic) UIImageView *_referenceLineLeft;
@property (retain, nonatomic) UIImageView *_referenceLineRight;
@property (readonly, nonatomic) CAMFeedbackController *_feedbackController;
@property (readonly, nonatomic) CAMLevelViewModel *viewModel;
@property (weak, nonatomic) id<CAMHorizonLevelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didPublishChange:(unsigned long long)a1 withContext:(void *)a2;
- (id)initWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_createStrechableLineImage:(id)a0 lineHeight:(double)a1 shadowWidth:(double)a2 shadowHorizontalEdges:(unsigned long long)a3;
- (void)_drawHorizonLineInContext:(struct CGContext { } *)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 color:(id)a2;
- (void)_layoutLineViewsWithMode:(long long)a0 rotationAngle:(double)a1;
- (double)_shadowWidth;
- (void)_updateSubViewsAlphaWithAlpha:(double)a0 indicatorMode:(long long)a1 rotationAngle:(double)a2;

@end
