@class TIAboutKeyboardPrivacyController, NSString, NSOperationQueue;

@interface TIAddKeyboardLanguageListController : PSListController <UITextViewDelegate, UISearchBarDelegate>

@property (retain, nonatomic) TIAboutKeyboardPrivacyController *aboutPrivacyController;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSOperationQueue *searchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchBarCancelButtonClicked:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)viewDidLoad;
- (id)specifiers;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (long long)tableViewStyle;
- (void)cancelButtonTapped;
- (void)dismissForDone;
- (id)generateSpecifiers;
- (void)handleSoleInputModeAddition:(id)a0;
- (BOOL)inputMode:(id)a0 matchesPredicate:(id)a1;
- (void)showAddExtensionKeyboardSheet:(id)a0;
- (void)showAddSystemKeyboardSheet:(id)a0;
- (void)willResume;

@end
