@class NSString, SUICOrbView, CRSUIStatusBarStyleAssertion, UIView, AFUISiriCarPlayBackgroundView;
@protocol AFUISiriContentDelegate, AFUISiriViewDelegate;

@interface AFUISiriCarPlayView : UIView <AFUISiriCarPlayBackgroundViewDelegate, AFUISiriContent, SUICOrbViewControlling> {
    id<AFUISiriContentDelegate> _siriContentDelegate;
    id<AFUISiriViewDelegate> _viewDelegate;
    AFUISiriCarPlayBackgroundView *_backgroundView;
    SUICOrbView *_orbView;
    UIView *_orbContainerView;
    CRSUIStatusBarStyleAssertion *_statusBarStyleAssertion;
    UIView *_siriXIndicatorView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long siriSessionState;
@property (nonatomic) long long mode;
@property (retain, nonatomic) UIView *remoteContentView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setRequestHandlingStatus:(unsigned long long)a0;
- (id)_SUICOrbViewModeGetDescription:(long long)a0;
- (void)_orbHeldWithGestureRecognizer:(id)a0;
- (void)_orbTappedWithGestureRecognizer:(id)a0;
- (long long)_orbViewModeForCurrentSessionState;
- (void)_setupContentViews;
- (void)_updateOrbViewModeToMatchSessionState;
- (void)animateOrbViewToOffWithCompletion:(id /* block */)a0;
- (void)backgroundView:(id)a0 requestsCarPlayStatusBarOverride:(BOOL)a1 animationSettings:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewDelegate:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })orbViewRectInCarplayView;
- (void)resetOrbViewToSiriSessionState;
- (void)setAuxiliaryViewsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setContentViewsAlpha:(double)a0;
- (void)setInputPowerLevel:(float)a0;
- (void)setOutputPowerLevel:(float)a0;
- (void)setSiriContentDelegate:(id)a0;
- (id)siriXIndicatorView;
- (void)updateBackgroundViewMode:(long long)a0;
- (void)updateBackgroundVisibility:(BOOL)a0;

@end
