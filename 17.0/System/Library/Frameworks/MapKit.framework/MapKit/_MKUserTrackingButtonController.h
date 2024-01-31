@class _MKUserTrackingButton, NSString, UIImageView, UIActivityIndicatorView;
@protocol MKUserTrackingButtonTarget, MKUserTrackingView;

@interface _MKUserTrackingButtonController : NSObject <CAAnimationDelegate> {
    id<MKUserTrackingButtonTarget> _target;
    _MKUserTrackingButton *_button;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (weak, nonatomic) id<MKUserTrackingView> userTrackingView;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long buttonBehavior;
@property (nonatomic) unsigned long long controlSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateLoading;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (id)_activityIndicatorView;
- (void)_updateState;
- (BOOL)_shouldAnimateFromState:(long long)a0 toState:(long long)a1;
- (id)_imageForState:(long long)a0 controlState:(unsigned long long)a1;
- (id)initWithTarget:(id)a0 userTrackingView:(id)a1 imageView:(id)a2 button:(id)a3;
- (void)_updatePreferredSymbolConfiguration;
- (void)_reloadState;
- (double)_symbolPointSize;
- (void).cxx_destruct;
- (id)_expandAnimation;
- (id)_contentAnimation;
- (void)_authorizationStatusChanged:(id)a0;
- (void)_goToNextMode:(id)a0;
- (id)_shrinkAnimation;

@end
