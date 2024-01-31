@class UIFont, TLKImageView, NSString, TLKRichText, TLKImage;

@interface TLKTextButton : UIButton

@property BOOL attributedTitleExplicitlySet;
@property (retain, nonatomic) TLKImageView *tlkImageView;
@property (nonatomic) unsigned long long prominence;
@property (copy, nonatomic) TLKRichText *richTitle;
@property (copy, nonatomic) TLKImage *tlkImage;
@property (nonatomic) BOOL alwaysShowPlaceholderView;
@property BOOL matchesHeightForAlignmentRectWithIntrinsicContentSize;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long alignment;

- (void)tlk_updateForAppearance:(id)a0;
- (id)init;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (BOOL)hasTemplateUIImage;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateAttributedTitle;
- (void)setMaximumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)setAttributedTitle:(id)a0 forState:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })minimumLayoutSize;
- (BOOL)isImageMode;
- (void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;
- (BOOL)allowsVibrancy;
- (void).cxx_destruct;
- (void)setMinimumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })maximumLayoutSize;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
