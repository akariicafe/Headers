@interface HealthUI.StateOfMindCalendarViewController : HealthUI.BaseCalendarViewController <HKDateCacheObserver> {
    void /* unknown type, empty encoding */ dateCache;
    void /* unknown type, empty encoding */ dateToFocusOn;
    void /* unknown type, empty encoding */ modelProvider;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ todayDayIndex;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dayFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_monthFormatter;
    void /* unknown type, empty encoding */ delegate;
}

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dateCacheDidUpdate:(id)a0 onNotification:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)preferredContentSizeCategoryDidChange;
- (void)todayButtonTapped;

@end
