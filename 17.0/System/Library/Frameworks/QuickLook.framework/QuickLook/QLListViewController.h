@class QLItem, NSString, UIPopoverPresentationController, UITableViewController, NSArray, QLListCellManager, QLPreviewItemStore, UIBarButtonItem;
@protocol QLListViewControllerDelegate;

@interface QLListViewController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UIPopoverPresentationControllerDelegate> {
    UIPopoverPresentationController *_presentationController;
    UITableViewController *_tableViewController;
    QLItem *_currentPreviewItem;
    QLPreviewItemStore *_previewItemStore;
    QLListCellManager *_cellManager;
    NSArray *_itemsWithFolders;
}

@property (weak) id<QLListViewControllerDelegate> archiveDelegate;
@property (weak, nonatomic) UIBarButtonItem *barButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)prepareForPopoverPresentation:(id)a0;
- (void).cxx_destruct;
- (id)presentationController:(id)a0 viewControllerForAdaptivePresentationStyle:(long long)a1;
- (void)_dismiss;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_addPath:(id)a0 fromPreviewItem:(id)a1 intoArray:(id)a2;
- (void)_generateItemsAndFolders;
- (void)_updateNavigationBarVisibilityForPresentationStyle:(long long)a0;
- (id)initWithPreviewItemStore:(id)a0 currentPreviewItem:(id)a1;

@end
