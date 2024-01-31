@class WFCompactActionGroupView, NSString, WFCompactTitledPlatterView, WFIcon, UILabel, UIView, NSArray;
@protocol WFCompactPlatterContentClippingDelegate, WFCompactPlatterSizingDelegate, WFCompactAppearanceProvider;

@interface WFCompactPlatterView : UIView <WFCompactTitledPlatterViewDelegate, MTVisualStylingProviding>

@property (weak, nonatomic) WFCompactTitledPlatterView *platterView;
@property (weak, nonatomic) UILabel *primaryLabel;
@property (weak, nonatomic) UILabel *secondaryLabel;
@property (weak, nonatomic) UIView *clippingContentView;
@property (weak, nonatomic) UIView *clippingAutoLayoutContainerView;
@property (weak, nonatomic) UIView *footerViewSeparatorView;
@property (nonatomic) BOOL hasScheduledSizeInvalidation;
@property (readonly, nonatomic) UIView *contentViewContainerView;
@property (copy, nonatomic) NSString *attributionTitle;
@property (copy, nonatomic) WFIcon *attributionIcon;
@property (copy, nonatomic) NSString *primaryText;
@property (nonatomic) long long primaryTextAlignment;
@property (copy, nonatomic) NSString *secondaryText;
@property (nonatomic) long long secondaryTextAlignment;
@property (copy, nonatomic) NSString *secondaryTextFontStyle;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } shadowOutsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } labelInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } separatorInsets;
@property (nonatomic) BOOL sashVisible;
@property (retain, nonatomic) id<WFCompactAppearanceProvider> appearanceProvider;
@property (copy, nonatomic) NSArray *actions;
@property (weak, nonatomic) WFCompactActionGroupView *actionGroupView;
@property (nonatomic) BOOL arrangeActionsVertically;
@property (retain, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *contentViewSeparatorView;
@property (nonatomic) BOOL showsTopScrollingSeparator;
@property (nonatomic) BOOL showsBottomScrollingSeparator;
@property (nonatomic) BOOL hidesContentViewTopSeparator;
@property (nonatomic, getter=isClippingContent) BOOL clippingContent;
@property (nonatomic) double contentHeightWhenClipped;
@property (nonatomic) double contentVerticalOffsetWhenClipped;
@property (weak, nonatomic) id<WFCompactPlatterContentClippingDelegate> contentClippingDelegate;
@property (readonly, nonatomic) UIView *footerView;
@property (nonatomic) double footerViewHeight;
@property (nonatomic) BOOL footerViewHidden;
@property (weak, nonatomic) id<WFCompactPlatterSizingDelegate> sizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (id)visualStylingProviderForCategory:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)separatorHeight;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutContentInsideClippingView;
- (void)_labelContentChanged;
- (void)applyMaterialViewStyling;
- (void)layoutCustomContentViewForPlatterView:(id)a0;
- (void)setNeedsLayoutAndSizeInvalidation;
- (struct CGSize { double x0; double x1; })staticContentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateContentViewSeparatorVisibility;
- (void)updateFooterViewSeparatorVisibility;

@end
