@class OBWelcomeController, NSString, UITableView;

@interface MSDSupportViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) OBWelcomeController *contentViewController;
@property (retain, nonatomic) UITableView *optionsTableView;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)_currentCountryStackView;

@end
