@class UILabel, UIImageView, UIView;

@interface _HKReportTableViewCell : UITableViewCell

@property (readonly, nonatomic) double minimumHeight;
@property (readonly, nonatomic) UILabel *reportLabel;
@property (readonly, nonatomic) UIImageView *reportImageView;
@property (readonly, nonatomic) UIView *reportAreaView;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setUpUI;
- (void)setReportName:(id)a0 reportImage:(id)a1;

@end
