@class VUIImageView, VUILabel, VUITextLayout, UIView, VUIPhotoSensitivityViewLayout;

@interface VUIPhotoSensitivityView : UIView

@property (retain, nonatomic) VUIPhotoSensitivityViewLayout *layout;
@property (retain, nonatomic) VUIImageView *logoImageView;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) VUILabel *descriptionView;
@property (readonly, nonatomic) VUITextLayout *descriptionLayout;

- (BOOL)_isPortrait;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_margin;
- (void)showAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)hideAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })_dividerSize;
- (void)_configureSubviewsWithDictionary:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_descriptionMargin;
- (double)_descriptionViewYOffset;
- (double)_descriptionWidth;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_dividerMargin;
- (void)_hideWithAnimationWithCompletion:(id /* block */)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_logoMargin;
- (struct CGSize { double x0; double x1; })_logoSize;
- (void)_showWithAnimationWithCompletion:(id /* block */)a0;
- (id)initWithPhotoSensitivityInfoDictionary:(id)a0;

@end
