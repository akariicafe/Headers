@class UIFocusContainerGuide, PXGFocusContainerGuideViewConfiguration, NSArray;

@interface PXGFocusContainerGuideView : UIView <PXGReusableView> {
    UIFocusContainerGuide *_focusGuide;
    NSArray *_constraints;
}

@property (copy, nonatomic) PXGFocusContainerGuideViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)willMoveToSuperview:(id)a0;
- (void)prepareForReuse;
- (void)becomeReusable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (BOOL)_isEligibleForFocusInteraction;
- (void).cxx_destruct;

@end
