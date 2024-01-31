@class AMSMetricsEvent, AMSUIWebWrapperViewController, NSDictionary, NSURL, AMSUIWebClientContext, NSString, AMSUIWebNavigationBarModel;

@interface AMSUIWebRoutePageModel : NSObject <AMSUIWebPageProvider>

@property (readonly, nonatomic) NSDictionary *clientOptions;
@property (readonly, weak, nonatomic) AMSUIWebClientContext *context;
@property (readonly, nonatomic) NSDictionary *headers;
@property (readonly, nonatomic) BOOL loadUsingWebKit;
@property (readonly, nonatomic) NSURL *URL;
@property (retain, nonatomic) AMSUIWebWrapperViewController *viewController;
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
- (id)_webPageViewController;
- (id)createViewControllerForContainer:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)loadPage;

@end
