@class UIStackView, NSString, UILabel, UIButton;

@interface PXSearchResultsHeaderView : UICollectionReusableView

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *seeAllButton;
@property (retain, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) id /* block */ seeAllButtonHandler;

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)_didSelectSeeAllButton:(id)a0;
- (void)setSectionIdentifier:(id)a0 seeAllButtonHandler:(id /* block */)a1;
- (void)setSeeAllButtonHidden:(BOOL)a0;
- (void)setSeeAllButtonTitle:(id)a0;
- (void)setTitleLabelString:(id)a0;
- (void)updateAlignmentForTextSize;
- (void)updateStackViewMarginsForTextSize;

@end
