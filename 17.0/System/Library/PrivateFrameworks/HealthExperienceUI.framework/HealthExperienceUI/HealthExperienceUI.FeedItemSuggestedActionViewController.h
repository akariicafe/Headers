@interface HealthExperienceUI.FeedItemSuggestedActionViewController : UICollectionViewController {
    void /* unknown type, empty encoding */ dataSourceAdaptor;
    void /* unknown type, empty encoding */ suggestedAction;
    void /* unknown type, empty encoding */ suggestedActionDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_layout;
}

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithCoder:(id)a0;

@end
