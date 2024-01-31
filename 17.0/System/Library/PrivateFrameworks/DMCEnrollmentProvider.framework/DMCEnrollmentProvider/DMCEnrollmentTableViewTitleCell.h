@class UILabel, NSString;

@interface DMCEnrollmentTableViewTitleCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>

@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)cell;
- (double)estimatedCellHeight;
- (double)cellHeight;
- (id)_fontForTitle;

@end
