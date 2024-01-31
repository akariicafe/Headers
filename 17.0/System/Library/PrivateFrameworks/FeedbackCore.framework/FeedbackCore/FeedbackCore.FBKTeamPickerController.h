@class NSArray;

@interface FeedbackCore.FBKTeamPickerController : UITableViewController {
    void /* unknown type, empty encoding */ cellReuseIdentifier;
    void /* unknown type, empty encoding */ teams;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ formStub;
@property (nonatomic, copy) NSArray *teams;
@property (nonatomic, retain) void /* unknown type, empty encoding */ selectedTeam;
@property (nonatomic) void /* unknown type, empty encoding */ showsDismissButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ pickerDelegate;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)dismissSelf;

@end
