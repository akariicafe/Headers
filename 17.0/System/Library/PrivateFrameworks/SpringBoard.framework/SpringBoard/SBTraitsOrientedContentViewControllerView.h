@class NSString, UILabel, UIView, SBTraitsDirectionalRotationView;

@interface SBTraitsOrientedContentViewControllerView : SBFTouchPassThroughView <BSDescriptionProviding> {
    UILabel *_placeholderLabel;
    long long _previousContainerLayoutOrientation;
    long long _previousContentLayoutOrientation;
    SBTraitsDirectionalRotationView *_contentRotationView;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentViewBoundsInReferenceSpace;
@property (nonatomic) long long contentOrientation;
@property (nonatomic) long long containerOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setClipsToBounds:(BOOL)a0;
- (void)_setContinuousCornerRadius:(double)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)_counterTransformedToIdentityForContainerChange;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)_setDebugColorsEnabled:(BOOL)a0;
- (id)succinctDescription;
- (void)layoutSubviews;

@end
