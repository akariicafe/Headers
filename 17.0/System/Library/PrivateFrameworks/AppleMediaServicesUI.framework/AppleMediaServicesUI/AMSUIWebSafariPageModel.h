@class AMSMetricsEvent, NSString, NSDictionary, AMSUIWebClientContext, AMSUIWebLoadingPageModel, NSURL, AMSUIWebNavigationBarModel;

@interface AMSUIWebSafariPageModel : AMSUIWebModel <AMSUIWebPageProvider>

@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) NSString *callbackScheme;
@property (retain, nonatomic) NSDictionary *data;
@property (nonatomic) BOOL hideToolBar;
@property (retain, nonatomic) AMSUIWebLoadingPageModel *loadingModel;
@property (nonatomic) BOOL showShareButton;
@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly, nonatomic) NSString *backgroundColor;
@property (readonly, nonatomic) AMSMetricsEvent *impressionEvent;
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (readonly, nonatomic) struct CGSize { double width; double height; } windowSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createViewControllerForContainer:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)loadPage;

@end
