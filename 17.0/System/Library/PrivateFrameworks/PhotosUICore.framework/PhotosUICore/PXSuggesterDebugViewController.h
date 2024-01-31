@class NSDate, NSString, NSArray, UIBarButtonItem, NSDictionary, PHSuggestion, UILabel, UIActivityIndicatorView;

@interface PXSuggesterDebugViewController : UITableViewController <UIEditMenuInteractionDelegate, PXOneUpPresentationDelegate> {
    NSArray *_heuristicallySortedItems;
    NSArray *_sortedItems;
    NSString *_name;
    NSDictionary *_options;
    PHSuggestion *_currentSuggestion;
    BOOL _fullLibraryIsEnabled;
    NSDate *_date;
    unsigned long long _currentSortCriteria;
    BOOL _showsInvalidItems;
    UIActivityIndicatorView *_spinnerView;
    UILabel *_noResultLabel;
    UIBarButtonItem *_fullLibraryButton;
    UIBarButtonItem *_dateButton;
    UIBarButtonItem *_showInvalidItemsButton;
    UIBarButtonItem *_sortButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)oneUpPresentationOrigin:(id)a0;
- (id)initWithName:(id)a0 options:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)refresh;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)_updateToolbarItems;
- (void)_fetchSuggestions;
- (void)_sortItems;
- (id)_stringWithSortCriteria:(unsigned long long)a0;
- (id)assetsDataSourceManagerForSuggestion:(id)a0;
- (void)configureCell:(id)a0 withItem:(id)a1;
- (id)dateButton;
- (void)didSelectDateButton:(id)a0;
- (void)didSelectFullLibraryButton:(id)a0;
- (void)didSelectShowInvalidItemsButton:(id)a0;
- (void)didSelectSortButton:(id)a0;
- (void)didStopProcessing;
- (id)fullLibraryButton;
- (id)showInvalidItemsButton;
- (id)sortButton;
- (void)updateShowInvalidItemsButton;
- (void)willStartProcessing;

@end
