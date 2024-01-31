@class NSString, SUBarButtonItem, SUProductPageViewController;

@interface SUUIITunesStoreUIPageViewController : SUStorePageViewController {
    SUBarButtonItem *_cancelButtonItem;
}

@property (weak, nonatomic) SUProductPageViewController *productPageViewController;
@property (nonatomic) BOOL showsCancelButton;
@property (copy, nonatomic) NSString *cancelButtonTitle;

- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)_cancelButtonItem;
- (void)_addCancelButtonToNavigationItem:(id)a0;
- (void)_storeSheetCancelButtonAction:(id)a0;
- (void)handleFailureWithError:(id)a0;
- (BOOL)presentDialogForError:(id)a0 pendUntilVisible:(BOOL)a1;
- (void)resetNavigationItem:(id)a0;

@end
