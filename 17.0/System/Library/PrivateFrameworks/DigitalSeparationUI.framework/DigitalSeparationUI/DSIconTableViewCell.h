@interface DSIconTableViewCell : UITableViewCell

+ (id)iconTableViewCellFromTableView:(id)a0 withRightAlignedLabel:(id)a1 detail:(id)a2 icon:(id)a3;
+ (id)iconTableViewCellFromTableView:(id)a0 withText:(id)a1 detail:(id)a2 icon:(id)a3;

- (void)willTransitionToState:(unsigned long long)a0;
- (void)customizeProperties;
- (id)initWithRightAlignedLabel:(id)a0 detail:(id)a1 icon:(id)a2;
- (id)initWithText:(id)a0 detail:(id)a1 icon:(id)a2;

@end
