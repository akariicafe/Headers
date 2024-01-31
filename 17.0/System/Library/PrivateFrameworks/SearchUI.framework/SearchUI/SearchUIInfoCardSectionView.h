@class UIFont, SFInfoCardSection, NSString, NUIContainerStackView, UIView, NSMutableArray, TLKTextButton;

@interface SearchUIInfoCardSectionView : SearchUICardSectionView <SearchUIInfoSizingDelegate>

@property (retain, nonatomic) SFInfoCardSection *section;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NUIContainerStackView *baseView;
@property (retain, nonatomic) NUIContainerStackView *expandedView;
@property (retain, nonatomic) NSMutableArray *rowStackViews;
@property (retain, nonatomic) NUIContainerStackView *showMoreStackView;
@property (retain, nonatomic) TLKTextButton *showMoreButton;
@property (nonatomic) BOOL isExpanded;
@property (retain, nonatomic) UIFont *labelFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (id)setupContentView;
- (void)configureShowMoreViewIfNecessary;
- (void)didInvalidateSizeAnimate:(BOOL)a0;
- (void)showMoreButtonPressed;

@end
