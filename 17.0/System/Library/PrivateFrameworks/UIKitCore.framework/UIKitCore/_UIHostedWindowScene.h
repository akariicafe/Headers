@class NSString;
@protocol _UIHostedWindowSceneTraitCollectionModificationProviding;

@interface _UIHostedWindowScene : UIWindowScene <_UISheetPresentationControllerClientRemotePresentationDelegate, _UISceneHostingViewAppearanceActionHandler> {
    id<_UIHostedWindowSceneTraitCollectionModificationProviding> _traitCollectionModifier;
}

@property (nonatomic, setter=_setPreferredContentSize:) struct CGSize { double width; double height; } _preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidate;
- (void)hostViewWillDisappear;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0 connectionOptions:(id)a1;
- (BOOL)_usesMinimumSafeAreaInsets;
- (void)_sheetInteractionDraggingDidEnd;
- (void)_finishSceneConnection;
- (id)_hostedWindowSceneDelegate;
- (BOOL)_pushesTraitCollectionToScreen;
- (void)_readySceneForConnection;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_safeAreaInsetsForInterfaceOrientation:(long long)a0;
- (void)_sheetGrabberDidTriggerPrimaryAction;
- (void)_sheetInteractionDraggingDidBeginWithRubberBandCoefficient:(double)a0 dismissible:(BOOL)a1 interruptedOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)_sheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 animateChange:(BOOL)a2 dismissible:(BOOL)a3;
- (void)_sheetPresentationControllerClientConfigurationDidChange:(id)a0;
- (void)_windowDidCreateRootPresentationController:(id)a0;
- (void)hostTraitCollectionDidChange:(id)a0;
- (void)hostViewDidDisappear;
- (void)hostViewWillAppear;
- (void)sendAction:(id)a0;

@end
