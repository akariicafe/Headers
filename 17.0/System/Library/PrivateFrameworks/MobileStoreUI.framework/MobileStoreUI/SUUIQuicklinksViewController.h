@class SUUIColorScheme, NSArray, NSString, UICollectionView, SUUIQuicklinksView;
@protocol SUUIQuicklinksViewControllerDelegate;

@interface SUUIQuicklinksViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    SUUIColorScheme *_colorScheme;
    SUUIQuicklinksView *_quicklinksView;
}

@property (weak, nonatomic) id<SUUIQuicklinksViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *indexPathsForVisibleItems;
@property (copy, nonatomic) NSArray *links;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)setTitle:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)_numberOfRows;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLinkAtIndex:(long long)a0;
- (void)setColoringWithColorScheme:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
