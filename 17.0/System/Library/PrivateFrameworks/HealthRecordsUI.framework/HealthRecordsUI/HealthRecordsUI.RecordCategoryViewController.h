@interface HealthRecordsUI.RecordCategoryViewController : UIViewController <UISearchResultsUpdating, UISearchControllerDelegate> {
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ category;
    void /* unknown type, empty encoding */ preferredSegment;
    void /* unknown type, empty encoding */ factory;
    void /* unknown type, empty encoding */ countProvider;
    void /* unknown type, empty encoding */ accountStateProvider;
    void /* unknown type, empty encoding */ recordCanceller;
    void /* unknown type, empty encoding */ aToZCanceller;
    void /* unknown type, empty encoding */ labsCanceller;
    void /* unknown type, empty encoding */ shouldShowPinnedLabsTip;
    void /* unknown type, empty encoding */ cancellable;
    void /* unknown type, empty encoding */ requiresOnboarding;
    void /* unknown type, empty encoding */ recordCount;
    void /* unknown type, empty encoding */ currentViewController;
    void /* unknown type, empty encoding */ displayMode;
    void /* unknown type, empty encoding */ isSearching;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ gradientSubscriber;
    void /* unknown type, empty encoding */ gradientColorProvider;
    void /* unknown type, empty encoding */ labsTipTimer;
    void /* unknown type, empty encoding */ modePickerState;
    void /* unknown type, empty encoding */ currentPalette;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_modePicker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_resultViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_changeProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewDataPublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_udcListViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_latestViewContoller;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lastUpdatedViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_alphabeticalViewController;
    void /* unknown type, empty encoding */ labsOnboardingViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_labsOnboardingTileDisplayEvaluator;
}

- (void)willDismissSearchController:(id)a0;
- (void)didDismissSearchController:(id)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (void)tapToRadar:(id)a0;
- (void)modePickerDidChange:(id)a0;
- (void)presentPDFViewController;
- (void)showPinnedLabsPopoverIfNeeded;

@end
