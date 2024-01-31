@class OBBoldTrayButton, NSString, NSArray, PXSharedLibraryAssistantViewModel;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantRulesViewController : OBTableWelcomeController <PHPickerViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, PXAssistantViewController> {
    NSArray *_listViewItems;
    OBBoldTrayButton *_continueButton;
}

@property (readonly, nonatomic) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithViewModel:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_updateIcon;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)continueButtonTapped:(id)a0;
- (void)_continueWithPhotosPicker;
- (void)_continueWithPolicy:(long long)a0;
- (void)_handlePickerResults:(id)a0;
- (void)addLaterButtonTapped:(id)a0;
- (void)continueAndSkipMovingItems;
- (void)continueWithSelectedRuleType;

@end
