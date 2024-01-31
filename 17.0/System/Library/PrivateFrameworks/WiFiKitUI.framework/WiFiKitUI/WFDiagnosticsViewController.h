@class NSString, NSOrderedSet;

@interface WFDiagnosticsViewController : WFInsetTableViewController

@property (copy, nonatomic) NSString *comment;
@property (retain, nonatomic) NSOrderedSet *sections;
@property (nonatomic) BOOL showNANUI;
@property (copy, nonatomic) id /* block */ saveHandler;
@property (nonatomic) BOOL saving;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)_defaultSections;
- (id)initWithNANUI:(BOOL)a0;

@end
