@class PKContactFormatValidator, NSArray, PKAddressSearchModel, NSString, CNPostalAddress, UISearchBar, UITableView, _UINavigationControllerPalette;
@protocol PKAddressSearcherViewControllerDelegate;

@interface PKAddressSearcherViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, PKAddressSearchModelDelegate, PKAddressEditorViewControllerDelegate>

@property (retain, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) _UINavigationControllerPalette *palette;
@property (retain, nonatomic) PKAddressSearchModel *searchModel;
@property (nonatomic) long long style;
@property (retain, nonatomic) CNPostalAddress *selectedAddress;
@property (retain, nonatomic) NSArray *completionSearchResults;
@property (retain, nonatomic) NSArray *contactsSearchResults;
@property (weak, nonatomic) id<PKAddressSearcherViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *requiredKeys;
@property (retain, nonatomic) PKContactFormatValidator *contactFormatValidator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchBarCancelButtonClicked:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)viewWillLayoutSubviews;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)tableView:(id)a0 wantsHeaderForSection:(long long)a1;
- (void)contactsSearchUpdated:(id)a0;
- (void)mapSearchUpdated:(id)a0;
- (void)selectedAddress:(id)a0 withError:(id)a1;
- (void)_showAddressEditorWithContact:(id)a0 withContactErrors:(id)a1;
- (void)addressEditorViewController:(id)a0 selectedContact:(id)a1;
- (void)addressEditorViewControllerDidCancel:(id)a0;

@end
