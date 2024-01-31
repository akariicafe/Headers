@class NSLayoutConstraint;

@interface DSTableView : UITableView

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;

- (id)init;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)constrainTableView;

@end
