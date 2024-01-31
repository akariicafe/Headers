@class SUUICellLayoutView, SUUIEditorialCellLayout, UIColor, UIView, SUUILockupItemCellLayout, SUUITextBoxView;

@interface SUUIEditorialLockupCellLayout : SUUIItemCellLayout {
    SUUIEditorialCellLayout *_editorialCellLayout;
    UIView *_editorialContainerView;
    double _editorialHeight;
    SUUILockupItemCellLayout *_lockupLayout;
    SUUICellLayoutView *_lockupView;
    UIColor *_offerNoticeTextColor;
    SUUITextBoxView *_textBoxView;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) unsigned long long visibleFields;
@property (readonly, nonatomic) SUUILockupItemCellLayout *lockupCellLayout;
@property (readonly, nonatomic) SUUITextBoxView *textBoxView;

+ (double)_imagePaddingForArtworkSize:(long long)a0;
+ (double)editorialWidthForCellWidth:(double)a0 lockupStyle:(struct SUUILockupStyle { long long x0; long long x1; unsigned long long x2; })a1;

- (id)iconImage;
- (void)setBackgroundColor:(id)a0;
- (id)iconImageView;
- (void)setIconImage:(id)a0;
- (id)itemState;
- (void).cxx_destruct;
- (void)setRestricted:(BOOL)a0;
- (void)setClientContext:(id)a0;
- (void)layoutSubviews;
- (BOOL)isIconImageHidden;
- (id)_lockupView;
- (id)itemOffer;
- (id)_editorialCellLayout;
- (id)_editorialContainerView;
- (BOOL)_isItemOfferButtonHidden;
- (BOOL)_showsItemOfferUnderEditorial;
- (void)applyEditorialLayout:(id)a0 withOrientation:(long long)a1;
- (id)itemOfferNoticeString;
- (void)layoutForItemOfferChange;
- (void)setColoringWithColorScheme:(id)a0;
- (void)setIconImageHidden:(BOOL)a0;
- (void)setItemOffer:(id)a0;
- (void)setItemOfferButtonAppearance:(id)a0;
- (void)setItemOfferNoticeString:(id)a0;
- (void)setItemState:(id)a0 animated:(BOOL)a1;

@end
