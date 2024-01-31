@class NSString, MTAlarmDataSource, NSMutableOrderedSet, UITableView;
@protocol WFAlarmChooserViewControllerDelegate;

@interface WFAlarmChooserViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MTAlarmDataSourceObserver>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) MTAlarmDataSource *alarmDataSource;
@property (readonly, nonatomic) NSMutableOrderedSet *checkedAlarmIDs;
@property (weak, nonatomic) id<WFAlarmChooserViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)dataSourceDidReload:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)finish:(id)a0;
- (void)cancel:(id)a0;
- (BOOL)isModalInPresentation;
- (void)checkForValidCheckedAlarmIDs;
- (id)initWithAlarmDataSource:(id)a0 checkedAlarmIDs:(id)a1;
- (void)updateDoneButtonEnabled;

@end
