@class UILabel, NSArray;

@interface CRUFollowUpHeaderCell : PSTableCell {
    UILabel *_followTitle;
    UILabel *_followSubtitle;
    NSArray *_constraints;
}

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)createFollowUpSubtitle;
- (id)createFollowUpTitle;

@end
