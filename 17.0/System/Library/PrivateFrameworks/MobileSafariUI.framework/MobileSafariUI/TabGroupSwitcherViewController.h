@class TabOverviewToolbar, NSString, NSArray, UIView, NSMutableDictionary, UIButton, TabGroupSwitcherView, TabController;
@protocol TabGroupSwitcherViewControllerDelegate, TabContainerView;

@interface TabGroupSwitcherViewController : NSObject <SFCapsuleCollectionViewDataSource, SFCapsuleCollectionViewDelegate, SFCapsuleCollectionViewGestureObserving, SFTabViewContainerViewDataSource, UIContextMenuInteractionDelegate, TabOverviewPresentationObserving> {
    long long _activeAnimationCount;
    long long _discreteTabGroupSwitchAnimationCount;
    BOOL _hasActiveUserInteraction;
    BOOL _ignoreReloadData;
    NSArray *_tabGroups;
    UIButton *_tabGroupPickerButton;
    NSMutableDictionary *_tabGroupIDToTabViewAdaptorMap;
    TabOverviewToolbar *_toolbar;
    TabGroupSwitcherView *_view;
}

@property (weak, nonatomic) id<TabGroupSwitcherViewControllerDelegate> delegate;
@property (readonly, nonatomic) TabController *tabController;
@property (readonly, nonatomic) UIView<TabContainerView> *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tabCollectionViewWillPresent:(id)a0;
- (void)closeAllTabs:(id)a0;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 dismissalPreviewForItemWithIdentifier:(id)a2;
- (id)capsuleCollectionView:(id)a0 contentViewForItemAtIndex:(long long)a1;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 highlightPreviewForItemWithIdentifier:(id)a2;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)initWithTabController:(id)a0;
- (void)capsuleCollectionView:(id)a0 didSelectItemAtIndex:(long long)a1;
- (id)createToolbarForCapsuleCollectionView:(id)a0;
- (unsigned long long)numberOfItemsInCapsuleCollectionView:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)capsuleCollectionView:(id)a0 didUpdateProgress:(double)a1 toSelectItemAtIndex:(long long)a2 progressToTopAction:(double)a3 snapToAxis:(unsigned long long)a4;
- (void).cxx_destruct;
- (void)capsuleCollectionView:(id)a0 didBeginSelectionGestureOnAxis:(unsigned long long)a1;
- (void)capsuleCollectionView:(id)a0 willEndSelectionGestureWithCoordinator:(id)a1;
- (id)containerView:(id)a0 childViewAtIndex:(long long)a1;
- (void)capsuleCollectionView:(id)a0 willSelectItemAtIndex:(long long)a1 coordinator:(id)a2;
- (BOOL)capsuleCollectionViewShouldFocusSelectedItem:(id)a0;
- (void)containerView:(id)a0 dismantleChildView:(id)a1;
- (BOOL)containerView:(id)a0 shouldDismantleChildView:(id)a1 atIndex:(long long)a2;
- (long long)numberOfChildrenForContainerView:(id)a0;
- (void)reloadTabGroups;
- (void)reloadTabGroup:(id)a0;
- (void)activeTabGroupDidChange;
- (void)createTab:(id)a0;
- (void)dismissTabSwitcher:(id)a0;
- (void)presentTabGroups:(id)a0;
- (void)tabOverview:(id)a0 didUpdateScalePercentageForActiveItem:(double)a1;

@end
