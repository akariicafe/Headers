@class NSString, OBBoldTrayButton, OBLinkTrayButton;
@protocol PXSharedLibraryExitAssistantViewControllerDelegate, UIPopoverPresentationControllerSourceItem;

@interface PXSharedLibraryExitAssistantViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource> {
    OBBoldTrayButton *_exitButton;
    OBLinkTrayButton *_cancelButton;
    BOOL _currentUserIsOwner;
    NSString *_keepAllCountsString;
    NSString *_contributedOnlyCountsString;
}

@property (nonatomic) long long exitRetentionPolicy;
@property (weak, nonatomic) id<PXSharedLibraryExitAssistantViewControllerDelegate> delegate;
@property (nonatomic) BOOL disableControlsWithBusyIndicator;
@property (readonly, nonatomic) id<UIPopoverPresentationControllerSourceItem> exitButtonSourceItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_updateIcon;
- (void)cancelButtonTapped:(id)a0;
- (void)_updateCancelButton;
- (void)_updateExitButton;
- (void)_updateTableView;
- (void)exitButtonTapped:(id)a0;
- (id)initWithOwnerAsCurrentUser:(BOOL)a0 keepAllCountsString:(id)a1 contributedOnlyCountsString:(id)a2;

@end
