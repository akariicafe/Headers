@interface SeymourUI.WorkoutPlanCalendarViewController : UIViewController <UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ layoutProvider;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ isApplyingSnapshot;
    void /* unknown type, empty encoding */ isTappingScrollView;
}

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)_collectionView:(id)a0 orthogonalScrollViewDidScroll:(id)a1 section:(long long)a2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;

@end
