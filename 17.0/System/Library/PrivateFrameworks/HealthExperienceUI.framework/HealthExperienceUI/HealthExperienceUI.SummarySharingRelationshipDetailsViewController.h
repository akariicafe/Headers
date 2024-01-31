@interface HealthExperienceUI.SummarySharingRelationshipDetailsViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController {
    void /* unknown type, empty encoding */ navigationBarTitleView;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ healthExperienceStore;
    void /* unknown type, empty encoding */ selectedDataTypesContext;
    void /* unknown type, empty encoding */ relationshipDetailsDataSource;
    void /* unknown type, empty encoding */ sharingEntryStore;
    void /* unknown type, empty encoding */ sharingProfileInformation;
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ pausedStateChanged;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_activitySpinnerItem;
    void /* unknown type, empty encoding */ updateAuthorizationsCancellable;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ currentAuthorizations;
}

- (void)doneButtonTapped;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didTapCancel;

@end
