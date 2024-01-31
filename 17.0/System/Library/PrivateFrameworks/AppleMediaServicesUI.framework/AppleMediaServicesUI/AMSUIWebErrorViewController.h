@class AMSUIWebErrorPageModel, AMSUIErrorView, AMSUIWebClientContext, NSString, AMSUIWebAppearance;

@interface AMSUIWebErrorViewController : AMSUICommonViewController <AMSUIWebPagePresenter>

@property (retain, nonatomic) AMSUIWebAppearance *appearance;
@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) AMSUIErrorView *errorView;
@property (retain, nonatomic) AMSUIWebErrorPageModel *model;
@property (nonatomic) BOOL showingCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithContext:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)_applyAppearance;
- (void)_showCancelButtonIfNeeded;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;

@end
