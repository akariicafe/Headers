@class PXLibraryFilterState, NSString;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantHowToViewController : OBTableWelcomeController <PXAssistantViewController, UITableViewDelegate, UITableViewDataSource>

@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)_updateIcon;
- (void)continueButtonTapped:(id)a0;
- (id)initWithLibraryFilterState:(id)a0;

@end
