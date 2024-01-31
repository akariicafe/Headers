@class MTMaterialView;

@interface CCUIContentModuleContentContainerView : SBFTouchPassThroughView {
    BOOL _expanded;
    MTMaterialView *_moduleMaterialView;
}

@property (nonatomic) BOOL moduleProvidesOwnPlatter;
@property (nonatomic) double compactContinuousCornerRadius;
@property (nonatomic) double expandedContinuousCornerRadius;

- (id)init;
- (void)addSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureModuleMaterialViewIfNecessary;
- (void)_transitionToExpandedMode:(BOOL)a0 force:(BOOL)a1;
- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)a0 ignoreSubviewClipping:(BOOL)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)transitionToExpandedMode:(BOOL)a0;
- (void)didEndTransitionToExpandedMode:(BOOL)a0;
- (BOOL)_isContentClippingRequiredForSubview:(id)a0;

@end
