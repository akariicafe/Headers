@class PXBannerViewConfiguration;
@protocol PXBannerViewDelegate;

@interface PXBannerView : UIView

@property (readonly) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (copy, nonatomic) PXBannerViewConfiguration *configuration;
@property (weak, nonatomic) id<PXBannerViewDelegate> delegate;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_createCancelButton;
- (id)_createActionButton;
- (void)_handleCancelButton:(id)a0;
- (void)_handleContinueButton:(id)a0;
- (id)_labelWithSubtitle:(id)a0;
- (id)_labelWithTitle:(id)a0;
- (void)_reloadViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
