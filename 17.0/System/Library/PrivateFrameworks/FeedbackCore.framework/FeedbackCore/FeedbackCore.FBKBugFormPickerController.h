@interface FeedbackCore.FBKBugFormPickerController : UITableViewController <UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ formStubs;
    void /* unknown type, empty encoding */ stubsPredicate;
    void /* unknown type, empty encoding */ formsRefreshObserver;
}

@property (nonatomic) void /* unknown type, empty encoding */ context;
@property (nonatomic, retain) void /* unknown type, empty encoding */ currentSelection;
@property (nonatomic, retain) void /* unknown type, empty encoding */ team;
@property (nonatomic, weak) void /* unknown type, empty encoding */ pickerDelegate;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)presentationControllerDidDismiss:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)dismissPicker;
- (id)initWithStubsPredicate:(id)a0;

@end
