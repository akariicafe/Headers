@class UILabel, NSArray, UIStackView;

@interface NDOLongValueCell : PSTableCell

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) NSArray *constraints;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
