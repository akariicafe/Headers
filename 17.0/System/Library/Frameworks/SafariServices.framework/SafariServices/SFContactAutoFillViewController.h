@class NSArray, CNContact;
@protocol SFContactAutoFillViewControllerFiller;

@interface SFContactAutoFillViewController : UITableViewController {
    CNContact *_contact;
    NSArray *_matches;
    NSArray *_propertyValues;
}

@property (weak, nonatomic) id<SFContactAutoFillViewControllerFiller> autoFiller;

- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)properties;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)autoFill:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_cancel:(id)a0;
- (id)_valueForProperty:(id)a0 identifier:(id)a1;
- (BOOL)canDrillInCellAtIndexPath:(id)a0;
- (id)initWithMatches:(id)a0 contact:(id)a1;
- (id)matchesForProperty:(id)a0;
- (id)valuesFromPropertyMatches:(id)a0;

@end
