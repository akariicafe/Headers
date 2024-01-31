@class CNAutocompleteResultsTableViewController, NSArray;

@interface CNAutocompleteResultsViewController : UIViewController

@property (retain, nonatomic) CNAutocompleteResultsTableViewController *resultsTableController;
@property (readonly, nonatomic) unsigned long long mode;
@property (retain, nonatomic) NSArray *recipients;
@property (nonatomic) BOOL showsSuggestions;

- (void)viewDidLoad;
- (id)initWithMode:(unsigned long long)a0;
- (void)selectPreviousSearchResult;
- (void).cxx_destruct;
- (void)selectNextSearchResult;
- (void)removeRecipient:(id)a0;
- (BOOL)collapseSelectedRecipient;
- (BOOL)expandSelectedRecipient;
- (void)invalidateAddressTintColors;
- (void)invalidatePreferredRecipients;
- (BOOL)commitSelectionOfRecipient;

@end
