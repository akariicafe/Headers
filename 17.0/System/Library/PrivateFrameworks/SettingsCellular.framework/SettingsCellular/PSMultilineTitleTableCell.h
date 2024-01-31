@class NSLayoutConstraint;

@interface PSMultilineTitleTableCell : PSTableCell

@property (retain, nonatomic) NSLayoutConstraint *valueTrailingCon;
@property (retain, nonatomic) NSLayoutConstraint *titleLeadingCon;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
