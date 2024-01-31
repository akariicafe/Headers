@class PXUpdater, UIImage, PXPhotosGridAddButtonViewUserData, UIButton;

@interface PXPhotosGridAddButtonView : UIView <PXGReusableView> {
    UIButton *_button;
    PXUpdater *_updater;
}

@property (readonly, nonatomic) id /* block */ actionHandler;
@property (retain, nonatomic) UIImage *buttonImage;
@property (copy, nonatomic) PXPhotosGridAddButtonViewUserData *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)becomeReusable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleButton:(id)a0;
- (void)_updateBackgroundProperties;
- (void)_updateButtonImage;

@end
