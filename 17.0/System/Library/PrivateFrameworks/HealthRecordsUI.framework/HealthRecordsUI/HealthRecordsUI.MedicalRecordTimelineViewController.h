@interface HealthRecordsUI.MedicalRecordTimelineViewController : UICollectionViewController <HKInteractiveChartViewObserver, HKHealthRecordsStoreIngestionStateListener, HKClinicalAccountStoreStateChangeListener, HKConceptStoreObserver, HKCloudSyncObserverDelegate> {
    void /* unknown type, empty encoding */ overrideTitle;
    void /* unknown type, empty encoding */ displayItemProvider;
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ category;
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ accountId;
    void /* unknown type, empty encoding */ conceptIdentifier;
    void /* unknown type, empty encoding */ ontologyConcept;
    void /* unknown type, empty encoding */ userDomainConcept;
    void /* unknown type, empty encoding */ additionalPredicatesPerSampleType;
    void /* unknown type, empty encoding */ preloadedRemovedRecords;
    void /* unknown type, empty encoding */ displayState;
    void /* unknown type, empty encoding */ chartLoaded;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentStatusView;
    void /* unknown type, empty encoding */ isDisplayingRemovedRecords;
    void /* unknown type, empty encoding */ showExportButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_clinicalAccountStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSourceProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ cloudSyncObserver;
    void /* unknown type, empty encoding */ cancellable;
    void /* unknown type, empty encoding */ ingestionState;
    void /* unknown type, empty encoding */ indexManagerState;
    void /* unknown type, empty encoding */ cloudSyncActive;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ showGradientBackgroundForAllRecordsRoom;
    void /* unknown type, empty encoding */ gradientSubscriber;
    void /* unknown type, empty encoding */ gradientColorProvider;
}

- (void)cloudSyncObserverSyncCompleted:(id)a0;
- (void)cloudSyncObserver:(id)a0 syncDidStartWithProgress:(id)a1;
- (void)cloudSyncObserver:(id)a0 syncFailedWithError:(id)a1;
- (void)cloudSyncObserverStatusUpdated:(id)a0 status:(id)a1;
- (void)conceptStore:(id)a0 indexManagerDidChangeState:(unsigned long long)a1;
- (void)healthRecordsStore:(id)a0 ingestionStateDidUpdateTo:(long long)a1;
- (void)clinicalAccountStore:(id)a0 accountDidChange:(id)a1 changeType:(long long)a2;
- (void)configureDisplayTypes:(id)a0 timeScope:(long long)a1 stackOffset:(long long)a2;
- (void)didUpdateSeriesWithNewValueRange:(id)a0;
- (void)didUpdateVisibleValueRange:(id)a0 changeContext:(long long)a1;
- (BOOL)collectionView:(id)a0 selectionFollowsFocusForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)reloadData;
- (void)viewWillLayoutSubviews;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (void)didTapExportPDFButton;
- (void)fetchMoreData;
- (void)reloadDataWithDelay:(double)a0;
- (void)reloadDataWithNotification:(id)a0;
- (void)tapToRadarWithSender:(id)a0;
- (void)updateSystemStatusView;

@end
