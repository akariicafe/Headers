@class NSArray;

@interface CKSendMenuViewController : UIViewController <UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ contentProvider;
    void /* unknown type, empty encoding */ presentationContext;
    void /* unknown type, empty encoding */ hasPerformedInitialContentAppearance;
    void /* unknown type, empty encoding */ activeDismissAnimationIdentifier;
    void /* unknown type, empty encoding */ sendMenuListItems;
    void /* unknown type, empty encoding */ sendMenuCellReuseIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sendMenuCollectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionViewLayout;
    void /* unknown type, empty encoding */ collectionViewDismissingLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sendMenuDataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backdropView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sendMenuParentView;
    void /* unknown type, empty encoding */ plusButtonPortalView;
    void /* unknown type, empty encoding */ reorderGestureDragPointOffsetFromCellCenter;
    void /* unknown type, empty encoding */ collapsedMenuOrigin;
    void /* unknown type, empty encoding */ collectionViewTopConstraint;
    void /* unknown type, empty encoding */ collectionViewBottomConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_plusButtonIdealPositionAvoidanceHeight;
    void /* unknown type, empty encoding */ plusButtonPortalViewShouldUserIdealFrame;
    void /* unknown type, empty encoding */ plusButtonPortalViewShouldUsePlusLFilter;
    void /* unknown type, empty encoding */ yPointForBoundaryBetweenSections;
    void /* unknown type, empty encoding */ favoritesAutoScrollInsets;
    void /* unknown type, empty encoding */ moreAppsAutoScrollInsets;
    void /* unknown type, empty encoding */ isAppearanceAnimationActive;
    void /* unknown type, empty encoding */ isInitialAppearanceAnimationActive;
    void /* unknown type, empty encoding */ indexPathsToCollapseIntoPlusButton;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ sendMenuViewControllerDelegate;
@property (nonatomic) void /* unknown type, empty encoding */ isPresentingAudioRecordingQuickSend;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, copy) NSArray *accessibilityCustomActions;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_collectionView:(id)a0 shouldApplyTransitionContentOffset:(struct CGPoint { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)a1 atCurrentIndexPath:(id)a2 toProposedIndexPath:(id)a3;
- (void)viewDidLoad;
- (void)updatePreferredContentSize;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_handleReorderingGesture:(id)a0;
- (void)collectionViewBackgroundTapped:(id)a0;
- (void)anchorViewDidMove;
- (double)calculatePercentVisibleForSection:(long long)a0;
- (id)initWithPresentationContext:(id)a0;
- (void)loadMoreAppsSection;
- (void)performFullScreenDismissAnimationWithCompletion:(id /* block */)a0;
- (void)pluginIconUpdatedWithNotification:(id)a0;
- (void)rePresentSendMenu;

@end
