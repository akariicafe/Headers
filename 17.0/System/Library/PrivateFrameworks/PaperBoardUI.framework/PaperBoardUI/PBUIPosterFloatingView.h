@class NSString, UIView, BSCompoundAssertion, _UILegibilitySettings;

@interface PBUIPosterFloatingView : UIView <PBUIReplicaPortalSource> {
    BSCompoundAssertion *_currentUsers;
}

@property (readonly, nonatomic, getter=isFloatingLayerStandin) BOOL floatingLayerHasStandin;
@property (weak, nonatomic) UIView *defaultFloatingLayerStandin;
@property (copy, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) UIView *targetView;
@property (readonly, copy, nonatomic) NSString *cacheIdentifier;
@property (readonly, nonatomic) BOOL effectsAreBakedIn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)acquireSourceUsageAssertionForView:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)floatingLayerHasStandin;
- (void)setFloatingLayerHasStandin:(BOOL)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;

@end
