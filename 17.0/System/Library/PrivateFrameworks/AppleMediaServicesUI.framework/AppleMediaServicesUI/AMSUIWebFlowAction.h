@class NSString, NSDictionary, AMSUIWebLoadingPageModel, AMSUIWebClientContext, AMSUIWebNavigationBarModel;
@protocol AMSUIWebPageProvider;

@interface AMSUIWebFlowAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) id actionData;
@property (nonatomic) long long animationType;
@property (nonatomic) BOOL deferredPresentation;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) AMSUIWebLoadingPageModel *loadingPage;
@property (retain, nonatomic) NSDictionary *metrics;
@property (nonatomic) struct CGSize { double width; double height; } modalWindowSize;
@property (retain, nonatomic) AMSUIWebNavigationBarModel *navigationBar;
@property (nonatomic) long long popToRelativeIndex;
@property (nonatomic) long long presentationType;
@property (retain, nonatomic) id<AMSUIWebPageProvider> replacementPage;
@property (nonatomic) long long replacementType;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
