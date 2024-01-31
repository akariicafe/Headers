@class NSString, NSDictionary, AMSUIWebSafariViewController, NSURL, AMSUIWebClientContext, UIViewController;

@interface AMSUIWebOpenSafariAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) NSString *callbackScheme;
@property (retain, nonatomic) NSDictionary *data;
@property (weak, nonatomic) UIViewController *presentedViewController;
@property (weak, nonatomic) AMSUIWebSafariViewController *safariViewController;
@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resultFromURL:(id)a0 error:(id)a1;

@end
