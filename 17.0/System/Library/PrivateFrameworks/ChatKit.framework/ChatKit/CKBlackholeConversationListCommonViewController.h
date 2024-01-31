@class _UITableViewDiffableDataSource, CKScheduledUpdater, NSArray, UILabel, NSString, UIBarButtonItem;

@interface CKBlackholeConversationListCommonViewController : UITableViewController <UITableViewDelegate>

@property (retain, nonatomic) _UITableViewDiffableDataSource *tableViewDataSource;
@property (retain, nonatomic) UIBarButtonItem *clearAllButton;
@property (retain, nonatomic) UILabel *emptyConversationListLabel;
@property (retain, nonatomic) CKScheduledUpdater *updater;
@property (retain, nonatomic) NSArray *visibleConversations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willResignActive;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewSafeAreaInsetsDidChange;
- (void)setNeedsFocusUpdate;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)suspend;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)updateFocusIfNeeded;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)willBecomeActive;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)_clearAllTapped;
- (void)didWake;
- (void)didLock;
- (id)_alertTitleForClearAll;
- (id)_alertTitleForDelete;
- (void)_batchDeleteConversationWithCompletionHandler:(id /* block */)a0;
- (void)_clearAllTappedWithCompletionHandler:(id /* block */)a0;
- (void)_confirmDeleteConversation:(id)a0 view:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_conversationList;
- (id)_conversations;
- (void)_deleteConversation:(id)a0;
- (void)_deleteConversation:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_updateConversationList;
- (void)_updateConversationListEmptyLabel;
- (void)didUnlock;
- (void)endHoldingConversationListUpdatesForKey:(id)a0;
- (void)popViewControllerIfNecessary;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)willUnlock;

@end
