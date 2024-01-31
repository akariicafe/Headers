@class CNAvatarImageRenderer, NSObject, NSArray, CNAutocompleteSuggestionsViewControllerOptions, NSString, UICollectionViewDiffableDataSource, UICollectionViewLayout, CNAutocompleteSearchManager, UICollectionView, NSNumber, NSMutableArray;
@protocol OS_dispatch_source, CNAutocompleteSuggestionsViewControllerDelegate, NSObject;

@interface CNAutocompleteSuggestionsViewController : UIViewController <UICollectionViewDelegate, CNAutocompleteSearchConsumer>

@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) NSNumber *taskID;
@property (retain, nonatomic) NSArray *selectedRecipients;
@property (retain, nonatomic) CNAutocompleteSearchManager *searchManager;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewLayout *layout;
@property (retain, nonatomic) NSMutableArray *fetchedRecipients;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL suggestionsAreUpdating;
@property (retain, nonatomic) CNAvatarImageRenderer *avatarRenderer;
@property (retain, nonatomic) id<NSObject> keyboardWillShowNotificationObserver;
@property (retain, nonatomic) id<NSObject> keyboardWillHideNotificationObserver;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } latestKeyboardFrame;
@property (copy, nonatomic) id /* block */ suggestionPreWarmCompletionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *suggestionsFetchDebounceTimer;
@property (readonly, nonatomic) CNAutocompleteSuggestionsViewControllerOptions *options;
@property (weak, nonatomic) id<CNAutocompleteSuggestionsViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *otherRecipientAddresses;
@property (retain, nonatomic) NSString *suggestionsHeaderTitle;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } additionalContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)initWithOptions:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (struct CGSize { double x0; double x1; })avatarSize;
- (void)buildCollectionView;
- (id)compositionalLayout;
- (BOOL)useAccessibleLayout;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedTaskWithID:(id)a0;
- (id)initWithSearchType:(unsigned long long)a0;
- (void)fetchRecipients;
- (void)adjustInsetsForKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)conformResultsForDeselection:(id)a0;
- (void)conformResultsForSelection;
- (id)contactsForAvatarForRecipient:(id)a0;
- (void)fetchRecipientsIfNeeded;
- (void)fetchSuggestedRecipientsWithCompletionBlock:(id /* block */)a0;
- (void)imageForRecipient:(id)a0 imageUpdateBlock:(id /* block */)a1;
- (void)invalidateSelectedRecipients;
- (id)selectedRecipientHandles;
- (void)setAdditionalContentInset:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setRecipients:(id)a0 animated:(BOOL)a1;
- (void)titleLabelTapped:(id)a0;
- (id)unknownContactForRecipient:(id)a0;

@end
