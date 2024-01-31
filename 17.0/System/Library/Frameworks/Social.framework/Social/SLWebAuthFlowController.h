@class NSString, NSURLRequest;
@protocol SLWebClient;

@interface SLWebAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate> {
    NSURLRequest *_requestWithAuthorizationCode;
    id /* block */ _completion;
    NSString *_yahooJapanUserName;
}

@property (readonly) id<SLWebClient> webClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)authURLForUsername:(id)a0;
- (id)initWithWebClient:(id)a0;
- (id)initialRedirectURL;
- (id)requestForAuthURL:(id)a0;
- (void)setAuthFlowCompletion:(id /* block */)a0;
- (BOOL)shouldHideWebViewForLoadWithRequest:(id)a0;
- (void)webViewDidFinishLoadWithPageTitleSupplier:(id /* block */)a0;

@end
