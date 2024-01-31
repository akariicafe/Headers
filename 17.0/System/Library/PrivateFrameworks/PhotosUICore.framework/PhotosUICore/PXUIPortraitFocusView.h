@class NSString, CEKSubjectIndicatorView, UITapGestureRecognizer;

@interface PXUIPortraitFocusView : PXPortraitFocusView <UIGestureRecognizerDelegate> {
    CEKSubjectIndicatorView *_fixedFocusView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _animateNextRender;
}

@property (nonatomic) BOOL drawingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_viewTapped:(id)a0;
- (void)animateNextRender;
- (id)initWithMediaView:(id)a0;

@end
