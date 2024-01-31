@class NSArray, NSString;
@protocol WFTriggerTableViewControllerDelegate;

@interface WFTriggerTableViewController : UITableViewController

@property (readonly, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *options;
@property (nonatomic) BOOL anyOptionSelected;
@property (readonly, copy, nonatomic) NSString *nameOfAnyOption;
@property (readonly, copy, nonatomic) NSString *mainSectionTitle;
@property (weak, nonatomic) id<WFTriggerTableViewControllerDelegate> delegate;

- (void)done:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (void)updateDoneButtonEnabledState;
- (id)infoForSection:(long long)a0;
- (id)initWithOptions:(id)a0 anySelected:(BOOL)a1 nameOfAnyOption:(id)a2 mainSectionTitle:(id)a3;

@end
