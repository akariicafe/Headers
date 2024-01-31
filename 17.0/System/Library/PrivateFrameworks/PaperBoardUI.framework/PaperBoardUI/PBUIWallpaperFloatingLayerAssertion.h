@class NSString, BSUIAnimationFactory, UIView;

@interface PBUIWallpaperFloatingLayerAssertion : BSSimpleAssertion <PBUIWallpaperAnimatedInvalidating> {
    BSUIAnimationFactory *_invalidationAnimationFactory;
    UIView *_containerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateWithAnimationFactory:(id)a0;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;

@end
