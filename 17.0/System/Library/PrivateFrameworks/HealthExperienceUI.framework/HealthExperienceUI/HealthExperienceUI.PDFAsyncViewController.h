@interface HealthExperienceUI.PDFAsyncViewController : UIViewController <PDFDocumentDelegate> {
    void /* unknown type, empty encoding */ pdfFileNameProvider;
    void /* unknown type, empty encoding */ pageNumberFormat;
    void /* unknown type, empty encoding */ shareButtonBehavior;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ analyticsDelegate;
    void /* unknown type, empty encoding */ shareItemSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_spinner;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pdfView;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didTapDone;
- (Class)classForPage;
- (void)didTapShare:(id)a0;

@end
