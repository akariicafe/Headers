@class UIView, NSString, NSArray, UIButton, UISearchBar, UITextField, GKChallenge, NSLayoutConstraint, UILabel, UIViewController;

@interface GKChallengePlayerPickerViewController : GKDashboardCollectionViewController <GKComposeControllerDelegate, GKDaemonProxyDataUpdateDelegate>

@property (retain, nonatomic) GKChallenge *challenge;
@property (retain, nonatomic) NSArray *initiallySelectedPlayers;
@property (nonatomic) BOOL shouldIgnoreClearSelection;
@property (nonatomic) UILabel *descriptionLabel;
@property (nonatomic) UIButton *sendButton;
@property (nonatomic) UITextField *messageField;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) UIView *scrollingHeader;
@property (nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint;
@property (nonatomic) BOOL shouldApplyInitialOffset;
@property (retain, nonatomic) UIViewController *composeController;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ inviteFriendHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearSelection;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)send:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)setSearchText:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)viewDidLoad;
- (id)preferredFocusEnvironments;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)cancel:(id)a0;
- (void)addMessage:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)loadData;
- (void)applyInitialContentOffset;
- (void)configureButtonsFocusEffect;
- (void)configureCollectionView;
- (void)configureFocusGuides;
- (void)dataUpdated:(BOOL)a0 withError:(id)a1;
- (id)initWithChallenge:(id)a0 initiallySelectedPlayers:(id)a1;
- (void)selectPlayersAtIndexPaths:(id)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)updateButtonEnableState;

@end
