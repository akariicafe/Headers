@class NSNumber, NSArray, NSString, UIView, DMCEnrollmentTemplateTableViewController, UITableView;

@interface DMCEnrollmentTableViewPlatterCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>

@property (weak) UITableView *parentTableView;
@property (nonatomic) double previousWidth;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) DMCEnrollmentTemplateTableViewController *tableViewController;
@property (retain, nonatomic) NSArray *cellData;
@property (retain, nonatomic) NSNumber *customHorizontalMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)cell;
- (double)estimatedCellHeight;
- (double)cellHeight;
- (id)initWithCellData:(id)a0 parentTableView:(id)a1 useShadow:(BOOL)a2;

@end
