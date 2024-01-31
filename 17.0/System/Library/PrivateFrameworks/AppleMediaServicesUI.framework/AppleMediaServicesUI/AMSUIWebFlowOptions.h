@class NSString, NSDictionary, AMSUIWebLoadingPageModel, AMSUIWebNavigationBarModel;

@interface AMSUIWebFlowOptions : NSObject

@property (nonatomic) BOOL animated;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) BOOL deferredPresentation;
@property (nonatomic) BOOL disableTimeout;
@property (nonatomic) BOOL reuseExistingPage;
@property (retain, nonatomic) AMSUIWebLoadingPageModel *loadingPage;
@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic) long long modalTransitionStyle;
@property (nonatomic) struct CGSize { double width; double height; } modalWindowSize;
@property (retain, nonatomic) AMSUIWebNavigationBarModel *navigationBar;
@property (retain, nonatomic) NSDictionary *pageData;
@property (nonatomic) BOOL suppressErrorPage;

- (void).cxx_destruct;

@end
