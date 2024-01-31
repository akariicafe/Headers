@class _UIClickInteraction, NSString, NCClickInteractionPresentedControl, UIView, NCTouchEaterGestureRecognizer, MTMaterialView;
@protocol NCClickInteractionPresenterDelegate;

@interface NCClickInteractionPresenter : NSObject <UIGestureRecognizerDelegate, _UIClickInteractionDelegate>

@property (readonly, nonatomic, getter=_clickInteraction) _UIClickInteraction *clickInteraction;
@property (readonly, nonatomic, getter=_containerView) UIView *containerView;
@property (readonly, nonatomic, getter=_portalView) UIView *portalView;
@property (readonly, weak, nonatomic, getter=_touchEater) NCTouchEaterGestureRecognizer *touchEater;
@property (readonly, nonatomic, getter=_presentedControl) NCClickInteractionPresentedControl *presentedControl;
@property (readonly, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView;
@property (nonatomic, getter=_isHinting, setter=_setHinting:) BOOL hinting;
@property (nonatomic, getter=isPresented, setter=_setPresented:) BOOL presented;
@property (copy, nonatomic) NSString *title;
@property (readonly, weak, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceViewVisibleRect;
@property (copy, nonatomic) NSString *groupName;
@property (readonly, nonatomic) long long materialRecipe;
@property (weak, nonatomic) id<NCClickInteractionPresenterDelegate> delegate;
@property (nonatomic) long long overrideUserInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 sourceView:(id)a1 materialRecipe:(long long)a2;
- (void)_tearDown;
- (void)presentModalFullScreen;
- (void)_setUpContainerView;
- (id)highlightEffectForClickInteraction:(id)a0;
- (void)_setUpSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_configurePresentedControlIfNecessaryWithTitle:(id)a0;
- (BOOL)dismissModalFullScreenIfNeeded;
- (void)contentSizeCategoryDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialPresentedViewFrame;
- (void)_configureContainerViewIfNecessary;
- (void)_setUpPresentationIfNecessary;
- (void)_animatePresentation:(BOOL)a0 cancelled:(BOOL)a1 completion:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_finalPresentedViewFrame;
- (BOOL)clickInteractionShouldBegin:(id)a0;
- (void)_performCancel;
- (void)_handleEatenTouch:(id)a0;
- (double)_frictionForTransitionPresentation:(BOOL)a0 cancelled:(BOOL)a1;
- (void).cxx_destruct;
- (void)_configurePortalViewIfNecessary;
- (double)_tensionForTransitionPresentation:(BOOL)a0 cancelled:(BOOL)a1;
- (void)clickInteractionDidClickUp:(id)a0;
- (void)_performPresentation;
- (void)clickInteractionDidEnd:(id)a0;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)_setUpBackgroundMaterialView;
- (void)_setUpPresentedControl;
- (void)_setUpPortalView;
- (void)_configureBackgroundMaterialViewIfNecessary;

@end
