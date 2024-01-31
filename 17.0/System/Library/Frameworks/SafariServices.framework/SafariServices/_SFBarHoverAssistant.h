@class NSString, UIView, _SFDynamicBarAnimator, UIHoverGestureRecognizer;
@protocol _SFBarCommon;

@interface _SFBarHoverAssistant : NSObject <_SFDynamicBarAnimatorStateObserver> {
    UIHoverGestureRecognizer *_hoverRecognizer;
    BOOL _didShowBarFromHover;
}

@property (readonly, weak, nonatomic) UIView<_SFBarCommon> *bar;
@property (readonly, weak, nonatomic) _SFDynamicBarAnimator *dynamicBarAnimator;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)attachToBar:(id)a0 withAnimator:(id)a1 inContainerView:(id)a2;

- (void)dealloc;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(id)a0;
- (void)dynamicBarAnimatorStateDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_hover:(id)a0;
- (BOOL)_gestureIsOverBar;
- (id)initWithBar:(id)a0 withAnimator:(id)a1 inContainerView:(id)a2;

@end
