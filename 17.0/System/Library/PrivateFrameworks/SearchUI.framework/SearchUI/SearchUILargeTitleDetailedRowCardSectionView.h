@class TLKStackView, SearchUILabel, TLKTextButton, SearchUIButtonItemStackView;

@interface SearchUILargeTitleDetailedRowCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKStackView *contentView;
@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) TLKTextButton *subtitleButton;
@property (retain, nonatomic) SearchUIButtonItemStackView *buttonStackView;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (id)setupContentView;
- (void)didSelectSubtitleItem;

@end
