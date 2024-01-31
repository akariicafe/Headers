@interface HRPDFConfigurationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ tableCellIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ pinchAnimationBackgroundView;
    void /* unknown type, empty encoding */ pinchAnimationView;
    void /* unknown type, empty encoding */ pinchedPageImageView;
    void /* unknown type, empty encoding */ pdfPadding;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pdfPaddingConstraints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pdfHeightConstraint;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ previewDataSource;
    void /* unknown type, empty encoding */ configurationDataSource;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ reportGenerator;
    void /* unknown type, empty encoding */ dataProviderToken;
    void /* unknown type, empty encoding */ generatorCancellable;
    void /* unknown type, empty encoding */ previewCancellable;
    void /* unknown type, empty encoding */ pdfGenerationToken;
    void /* unknown type, empty encoding */ queue;
}

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)didPinchPDF:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)didTapCancel:(id)a0;
- (void)didTapSave:(id)a0;
- (id)initWithProfile:(id)a0 account:(id)a1;

@end
