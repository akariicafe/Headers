@interface MailUI.MUIMessageListPrototypeViewController : MUIPlatformViewController <MessageListDataSourceProvider, MessageListDataSourceDelegate, MessageListSectionDataSourceDelegate, MessageListRecentSectionDataSourceDelegate, MessageListSectionDataSourceSelectionModelProvider, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ messageRepository;
    void /* unknown type, empty encoding */ mailboxRepository;
    void /* unknown type, empty encoding */ accountRepository;
    void /* unknown type, empty encoding */ mailboxes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contactStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_state;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionAndScrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ messageListSelectionModel;
    void /* unknown type, empty encoding */ layoutValuesHelper;
}

- (void)messageListSectionDataSource:(id)a0 didAddMessagesWithItemIdentifiers:(id)a1;
- (id)initialLoadCompletedPromiseForMessageListSectionDataSource:(id)a0;
- (void)messageListDataSource:(id)a0 didUpdateWithChange:(id)a1 section:(id)a2 animated:(BOOL)a3;
- (id)messageListDataSource:(id)a0 sectionDataSourceForSection:(id)a1 objectID:(id)a2 messageList:(id)a3;
- (BOOL)messageListDataSource:(id)a0 shouldAnimateNextUpdateInSectionDataSource:(id)a1 change:(id)a2;
- (BOOL)messageListDataSource:(id)a0 shouldSuspendUpdatesAfterChange:(id)a1;
- (void)messageListDataSource:(id)a0 willUpdateWithChange:(id)a1 section:(id)a2 animated:(BOOL)a3 cleanSnapshot:(BOOL)a4;
- (void)messageListDataSourceDidSkipUpdate:(id)a0 section:(id)a1 change:(id)a2;
- (void)messageListDataSourcePrepareUpdate:(id)a0 section:(id)a1 cleanSnapshot:(BOOL)a2;
- (void)messageListDataSourceUpdateFailed:(id)a0 section:(id)a1;
- (void)messageListRecentSectionDataSource:(id)a0 didConfigureCellAtIndexPath:(id)a1 item:(id)a2 itemWasCached:(BOOL)a3 duration:(double)a4;
- (void)messageListRecentSectionDataSource:(id)a0 didFailToConfigureCellAtIndexPath:(id)a1 error:(id)a2;
- (BOOL)messageListRecentSectionDataSourceIsInExpandedEnvironment:(id)a0;
- (void)messageListSectionDataSource:(id)a0 addMessagesToStackWithItemIDs:(id)a1;
- (void)messageListSectionDataSource:(id)a0 deletedMessagesWithItemIdentifiers:(id)a1;
- (void)messageListSectionDataSource:(id)a0 handleRowSelectionAfterMovingMessagesWithItemIdentifiers:(id)a1;
- (void)messageListSectionDataSource:(id)a0 updatedOldestItemsForMailboxes:(id)a1;
- (void)messageListSectionDataSource:(id)a0 willAddMessagesWithItemIdentifiers:(id)a1;
- (id)selectionModelForMessageListSectionDataSource:(id)a0;
- (void)showBlankCellAlertForMessageListSectionDataSource:(id)a0 itemID:(id)a1 indexPath:(id)a2 reason:(id)a3;
- (id)init;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)init:(id)a0 mailboxes:(id)a1 contactStore:(id)a2;

@end
