@class PXUpdater, PXGAssetDecorationViewConfiguration, PXRoundProgressView, UIActivityIndicatorView, NSTimer;

@interface PXGAssetDecorationView : UIView <PXGReusableView> {
    PXUpdater *_updater;
    PXRoundProgressView *_progressIndicatorView;
    UIActivityIndicatorView *_activityIndicatorView;
    NSTimer *_progressIndicatorDelayTimer;
}

@property (copy, nonatomic) PXGAssetDecorationViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

+ (BOOL)wantsDecorationViewForConfiguration:(id)a0;
+ (BOOL)_wantsProgressIndicatorForConfiguration:(id)a0;
+ (BOOL)_wantsActivityIndicatorForConfiguration:(id)a0;

- (void)prepareForReuse;
- (void)becomeReusable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_invalidateProgressIndicator;
- (void)_updateProgressIndicator;

@end
