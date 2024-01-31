@class UITextView, NSArray, UICollectionViewDiffableDataSource, NSDictionary, NSString, UICollectionViewCell, UIViewController;
@protocol CKConversationListControllerProtocol, CKInboxViewControllerDelegate;

@interface CKInboxViewController : UICollectionViewController <IMFocusStateManagerDelegate, UITextViewDelegate> {
    BOOL _isVisible;
}

@property (retain, nonatomic) UIViewController<CKConversationListControllerProtocol> *conversationListController;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource;
@property (retain, nonatomic) UICollectionViewCell *initiallySelectedCell;
@property (retain, nonatomic) NSArray *primaryCellsData;
@property (retain, nonatomic) NSArray *categoriesCellsDataArray;
@property (retain, nonatomic) NSArray *junkCellsDataArray;
@property (retain, nonatomic) NSArray *recentlyDeletedCellDataArray;
@property (retain, nonatomic) UITextView *pinnedFooterTextView;
@property (retain, nonatomic) UITextView *scrollingFooterTextView;
@property (retain, nonatomic) NSDictionary *cellDataForFilterMode;
@property (nonatomic) BOOL shouldProcessBackButtonUpdates;
@property (weak, nonatomic) id<CKInboxViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)_localeDidChange;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)_getSpamExtensionName;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)_contentSizeCategoryChanged;
- (void)focusStateDidChange;
- (void)setupCollectionView;
- (id)_updateCategoriesCellsDataArray;
- (id)_unreadCountStringForIndexPath:(id)a0;
- (long long)_categoriesSectionIndex;
- (void)_chatUnreadCountDidChange:(id)a0;
- (id)_conversationList;
- (void)_conversationListDidFinishSorting:(id)a0;
- (unsigned long long)_filterModeForIndexPath:(id)a0;
- (long long)_folderIndentationAtIndexPath:(id)a0;
- (id)_getHeaderStringForExtension:(id)a0;
- (long long)_junkSectionIndex;
- (long long)_lastSectionIndex;
- (void)_messageFilteringEnabledDidChange:(id)a0;
- (long long)_primarySectionIndex;
- (long long)_recentlyDeletedSectionIndex;
- (id)_setHeaderAttributedStringForFont:(id)a0;
- (BOOL)_shouldShowJunkCell;
- (BOOL)_spamFilteringEnabled;
- (void)_spamFilteringStateChanged;
- (BOOL)_wantsThreeColumnLayout;
- (id)footerTextView;
- (id)initWithConversationListController:(id)a0;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)reloadCollectionViewData;
- (BOOL)shouldHideInboxFooterTextView;
- (void)updateBackButton;
- (BOOL)wantsCollapsedAppearance;

@end
