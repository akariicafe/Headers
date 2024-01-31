@class UIWindow, _UIContainerWindowPortalView, NSString, UIView;
@protocol UIInteractionEffect;

@interface _UIContainerWindowPortalInteraction : NSObject <UIInteraction_Internal, UIInteraction>

@property (nonatomic, setter=_setPortalViewEnabled:) BOOL _portalViewEnabled;
@property (retain, nonatomic) _UIContainerWindowPortalView *portalView;
@property (readonly, nonatomic) UIWindow *containerWindow;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL attemptsToUseAncestorViewContainer;
@property (retain, nonatomic) id<UIInteractionEffect> interactionEffect;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (BOOL)_viewIsVisibleInContainer:(id)a0;
- (void)_viewVisibilityDidChange;
- (id)_visibleViewContainer;
- (void)ensureVisibilityInContainerWindow;

@end
