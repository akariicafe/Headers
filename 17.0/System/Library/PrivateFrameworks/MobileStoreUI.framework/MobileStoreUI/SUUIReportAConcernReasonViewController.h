@class SUUIReportAConcernReasonDataSource, SUUIReportAConcernConfiguration, NSString, UITableView;

@interface SUUIReportAConcernReasonViewController : UIViewController <UITableViewDelegate>

@property (retain, nonatomic) SUUIReportAConcernConfiguration *configuration;
@property (retain, nonatomic) SUUIReportAConcernReasonDataSource *dataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)cancelPressed:(id)a0;

@end
