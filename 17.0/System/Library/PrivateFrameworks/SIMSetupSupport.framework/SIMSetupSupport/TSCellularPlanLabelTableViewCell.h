@class UILabel, CNGeminiBadge;

@interface TSCellularPlanLabelTableViewCell : UITableViewCell

@property (retain) CNGeminiBadge *badge;
@property (retain) UILabel *label;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setLabel:(id)a0 badge:(id)a1;
- (void)setLabelWithNoBadge:(id)a0;

@end
