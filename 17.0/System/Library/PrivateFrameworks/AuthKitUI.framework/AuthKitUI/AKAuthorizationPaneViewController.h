@class UITableView, UIStackView, UIVisualEffectView, NSString, NSLayoutConstraint, NSMutableArray, AKAuthorizationPaneContext;
@protocol AKAuthorizationEditableDataSources, AKAuthorizationPaneDelegate;

@interface AKAuthorizationPaneViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) NSLayoutConstraint *headerWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *footerWidthConstraint;
@property (retain, nonatomic) AKAuthorizationPaneContext *headerPaneContext;
@property (retain, nonatomic) AKAuthorizationPaneContext *footerPaneContext;
@property (retain, nonatomic) NSMutableArray *mutableConstraints;
@property (retain, nonatomic) UIVisualEffectView *blurryTray;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<AKAuthorizationPaneDelegate> paneDelegate;
@property (weak, nonatomic) id<AKAuthorizationEditableDataSources> editableDataSources;
@property (readonly, nonatomic) UIStackView *paneHeaderStackView;
@property (readonly, nonatomic) UIStackView *paneFooterStackView;
@property (readonly, nonatomic) BOOL isWristDetectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewSafeAreaInsetsDidChange;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)maximumContentHeight;
- (double)maximumContentWidth;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)_newContainerView;
- (void)_adjustForPositionOfScrollView:(id)a0;
- (void)_configureContentTrayIfNeeded;
- (double)_contentTrayOffsetAdjustedForScrollInset:(BOOL)a0;
- (double)_deviceSafeAreaBottomInset;
- (id)_indexPathForLastRow;
- (BOOL)_isContentUnderNavigationBar;
- (BOOL)_isContentUnderTray;
- (double)_navigationBarHeaderHeight;
- (id)_newStackView;
- (long long)_safeIndexWithCount:(long long)a0;
- (void)_setCompressedHeightForView:(id)a0;
- (void)_setupContexts;
- (BOOL)_shouldEmbedContentTray;
- (void)_updateBlurForTray;
- (double)contentScrollOffset;
- (double)intrinsicContentHeight;
- (BOOL)shouldEmbedContentTrayIfNeeded;
- (void)sizeToFitPaneContent;

@end
