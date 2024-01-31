@class UIView, NSString, UIVisualEffectView, UILabel, CALayer, UIButton;
@protocol CKSearchResultsTitleHeaderCellDelegate;

@interface CKSearchResultsTitleHeaderCell : UICollectionReusableView <CKSearchResultSupplementryCell>

@property (retain, nonatomic) UILabel *sectionTitle;
@property (retain, nonatomic) UIButton *showAllButton;
@property (retain, nonatomic) CALayer *topHairline;
@property (nonatomic) double titleTopPadding;
@property (nonatomic) double titleBottomPadding;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIVisualEffectView *backgroundVisualEffectView;
@property (weak, nonatomic) id<CKSearchResultsTitleHeaderCellDelegate> delegate;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic, getter=isPinnedEffectVisible) BOOL pinnedEffectVisible;
@property (nonatomic) double leadingSeparatorInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (double)desiredZPosition;
+ (id)supplementaryViewType;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (void)_showAllButtonTapped:(id)a0;
- (void)layoutSubviewsAXFontSizeWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 isLTR:(BOOL)a2;
- (void)layoutSubviewsForWolfWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 isLTR:(BOOL)a2;
- (void)layoutSubviewsWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 isLTR:(BOOL)a2;

@end
