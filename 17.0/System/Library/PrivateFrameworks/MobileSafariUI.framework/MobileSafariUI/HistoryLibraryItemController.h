@class NSString, SFHistoryViewController;

@interface HistoryLibraryItemController : LibraryItemController <BookmarksPanelViewControllerDelegate> {
    SFHistoryViewController *_historyViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewController;
- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (BOOL)selectionFollowsFocus;
- (void)updateListContentConfiguration:(id)a0;
- (BOOL)_showsProfile;
- (BOOL)panelViewControllerShouldTranslucentAppearance:(id)a0;
- (BOOL)panelViewControllerShouldUseSearchControllerInNavigationItem:(id)a0;

@end
