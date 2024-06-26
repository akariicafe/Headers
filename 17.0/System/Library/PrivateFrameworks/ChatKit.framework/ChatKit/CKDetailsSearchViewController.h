@class NSDate, CKDetailsSearchResultsTitleHeaderCell, NSArray, CKQLPreviewControllerDataSource, CKSearchIndexingFooterCell, CKSearchController, CKConversation, CKQLPreviewController, NSString, CKDetailsSearchResultsFooterCell, UIBarButtonItem, UICollectionViewCell;
@protocol CKDetailsSearchControllerDelegate;

@interface CKDetailsSearchViewController : CKSearchViewController <CKContainerSearchControllerDelegate, QLPreviewControllerDelegate, CKDetailsSearchResultsFooterCellDelegate, CKDetailsSearchResultsTitleHeaderCellDelegate>

@property (retain, nonatomic) NSArray *chatGUIDs;
@property (retain, nonatomic) CKQLPreviewControllerDataSource *qlPreviewDataSource;
@property (retain, nonatomic) CKQLPreviewController *previewController;
@property (retain, nonatomic) CKDetailsSearchResultsTitleHeaderCell *titleSizingCell;
@property (retain, nonatomic) CKDetailsSearchResultsFooterCell *footerSizingCell;
@property (retain, nonatomic) CKSearchIndexingFooterCell *sizingIndexingFooterCell;
@property (nonatomic) BOOL searchComplete;
@property (retain, nonatomic) UIBarButtonItem *selectButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *flexibleItem;
@property (retain, nonatomic) UIBarButtonItem *saveButton;
@property (retain, nonatomic) UIBarButtonItem *deleteButton;
@property (retain, nonatomic) NSDate *lastUserSelectedCellTime;
@property (retain, nonatomic) UICollectionViewCell *lastUserSelectedCell;
@property (weak, nonatomic) id<CKDetailsSearchControllerDelegate> detailsDelegate;
@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) CKSearchController *associatedDetailsSubsectionSearchController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previewController:(id)a0 transitionViewForPreviewItem:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)previewControllerDidDismiss:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)reloadData;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateToolbar;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)setEditing:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_selectedIndexPaths;
- (void)_cancelEditing:(id)a0;
- (void)_deleteAttachmentsAtIndexPaths:(id)a0;
- (void)searchWithText:(id)a0;
- (void)_configureIndexingCell:(id)a0;
- (void)_deleteSelectedAttachments:(id)a0;
- (id)_newSnapshotForCurrentControllerState;
- (void)_presentResult:(id)a0 withFullScreenViewController:(id)a1;
- (void)_registerCells;
- (void)_saveSelectedAttachments:(id)a0;
- (id)_searchControllerForIndexPath:(id)a0;
- (void)_searchResultHeaderButtonTapped:(id)a0;
- (Class)_searchResultsHeaderClass;
- (void)_selectButtonTapped:(id)a0;
- (void)deleteChatItemWithTransferGUID:(id)a0 fromMessageItem:(id)a1;
- (void)deleteMessageItem:(id)a0;
- (void)deleteTransferGUID:(id)a0;
- (id)footerBoundryItemsForController:(id)a0 withEnvironment:(id)a1;
- (id)globalLayoutConfiguration;
- (void)handleSpacePressed;
- (id)headerBoundryItemsForController:(id)a0 withEnvironment:(id)a1;
- (id)initWithSearchControllerClasses:(id)a0;
- (id)layoutSectionForController:(id)a0 withEnvironment:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })parentMarginInsetsForSearchController:(id)a0;
- (void)presentQuickLookView:(id)a0;
- (void)rekickZKWSearchForAttachmentBatchUpdate;
- (id)searchBarForSearchViewController:(id)a0;
- (id)searchController:(id)a0 conversationForChatGUID:(id)a1;
- (void)searchController:(id)a0 didSelectItem:(id)a1 inChat:(id)a2;
- (void)searchController:(id)a0 requestsItemDeletionAtIndexPath:(id)a1;
- (id)searchControllerChatGUIDsForDetailsSearch:(id)a0;
- (void)searchControllerContentsDidChange:(id)a0;
- (void)searchControllerDidBeginDragging:(id)a0;
- (void)searchDetailsFooterCellShowAllTapped:(id)a0;
- (void)searchDetailsShowAllButtonTapped:(id)a0;
- (void)searchEnded;
- (void)searchResultsTitleCellShowAllButtonTapped:(id)a0;
- (void)searchViewController:(id)a0 requestsPushOfSearchController:(id)a1;
- (void)setupDetailsSearchController:(id)a0;
- (BOOL)shouldInsetResultsForSearchController:(id)a0;
- (id)sizeAttributeForController:(id)a0 sizingAttribute:(id)a1;
- (BOOL)wantsSpaceKeyCommandActive;

@end
