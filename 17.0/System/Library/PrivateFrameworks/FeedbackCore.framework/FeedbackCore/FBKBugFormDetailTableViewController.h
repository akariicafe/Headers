@class FBKQuestion, NSArray, NSSet, FBKAnswer, NSString, UISearchController;
@protocol FBKBugFormEditorDelegate;

@interface FBKBugFormDetailTableViewController : UITableViewController <UISearchControllerDelegate, UISearchBarDelegate, UISearchResultsUpdating>

@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) NSArray *visibleChoices;
@property (retain, nonatomic) NSArray *searchResultChoices;
@property (retain, nonatomic) NSSet *checkboxAnswersAtStart;
@property (weak, nonatomic) id<FBKBugFormEditorDelegate> delegate;
@property (retain, nonatomic) FBKQuestion *question;
@property (retain, nonatomic) FBKAnswer *answer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)keyCommands;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)searchBar:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)commitSelection;
- (void)updateSearchBar;
- (void)beginSearch;
- (void)didGetClientSideResolvedNotification:(id)a0;
- (id)getPathToScrollTo;
- (void)recordCheckboxAnswers;
- (void)selectNext;
- (void)selectPrevious;
- (void)updateCheckboxDelegateIfNeeded;
- (void)updateChoices;

@end
