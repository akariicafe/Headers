@class UIStackView, UIButton, UICollectionView, UITextField, UIView, UILabel, UITableView;

@interface LUILogFilterView : UIView

@property (retain, nonatomic) UITableView *existingPredicatesTableView;
@property (retain, nonatomic) UICollectionView *predicatesKeyCandidateCollectionView;
@property (retain, nonatomic) UICollectionView *predicatesComparisonCandidateCollectionView;
@property (retain, nonatomic) UICollectionView *predicatesValueCandidateCollectionView;
@property (retain, nonatomic) UIView *horizontalSeparatorLine;
@property (retain, nonatomic) UIView *veriticalSeparatorLineFirst;
@property (retain, nonatomic) UIView *veriticalSeparatorLineSecond;
@property (retain, nonatomic) UILabel *currentPredicateLabel;
@property (retain, nonatomic) UIStackView *enterPredicateStackView;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) UITextField *predicateTextField;
@property (retain, nonatomic) UIButton *applyButton;

- (void)_setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_createCollectionView;
- (id)_createTableView;
- (id)_createButtonWithTitle:(id)a0;
- (id)_createCurrentPredicateLabel;
- (id)_createEnterLabel;
- (id)_createEnterPredicateStackViewWithSubViews:(id)a0;
- (id)_createPredicateTextField;
- (id)_createSeparatorLine;

@end
