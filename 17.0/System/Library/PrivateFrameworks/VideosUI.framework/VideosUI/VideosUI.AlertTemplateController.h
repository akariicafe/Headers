@class NSArray;

@interface VideosUI.AlertTemplateController : VideosUI.VUIViewController <UICollectionViewDataSource, VUILegacyCollectionViewDelegate> {
    void /* unknown type, empty encoding */ contextMenuDelegate;
    void /* unknown type, empty encoding */ dynamicButtons;
    void /* unknown type, empty encoding */ collectionViewModels;
    void /* unknown type, empty encoding */ collectionTableItems;
    void /* unknown type, empty encoding */ templateViewModel;
    void /* unknown type, empty encoding */ lastFocusedIndexPath;
    void /* unknown type, empty encoding */ updateAutoHighlight;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didUpdateFocusInContext:(id)a1 withAnimationCoordinator:(id)a2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)a0;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didReceivePhysicalPlayForItemAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)vui_loadView;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewDidLayoutSubviews;

@end
