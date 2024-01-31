@class SXRelatedWebViewCache, WKWebsiteDataStore;
@protocol SXSceneStateMonitor, SXProxyAuthenticationHandler, SXAnalyticsReportingProvider, SWReachabilityProvider, SXLayoutInvalidator, SXComponentActionHandler, SXEmbedDataProvider;

@interface SXEmbedComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SWReachabilityProvider> reachabilityProvider;
@property (readonly, nonatomic) id<SXEmbedDataProvider> embedDataProvider;
@property (readonly, nonatomic) id<SXComponentActionHandler> actionHandler;
@property (readonly, nonatomic) id<SXLayoutInvalidator> layoutInvalidator;
@property (readonly, nonatomic) WKWebsiteDataStore *dataStore;
@property (readonly, nonatomic) SXRelatedWebViewCache *relatedWebViewCache;
@property (readonly, nonatomic) id<SXProxyAuthenticationHandler> proxyAuthenticationHandler;
@property (readonly, nonatomic) id<SXSceneStateMonitor> sceneStateMonitor;
@property (readonly, nonatomic) id<SXAnalyticsReportingProvider> analyticsReportingProvider;

- (int)role;
- (void).cxx_destruct;
- (id)type;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 reachabilityProvider:(id)a4 embedDataProvider:(id)a5 actionHandler:(id)a6 layoutInvalidator:(id)a7 websiteDataStore:(id)a8 relatedWebViewCache:(id)a9 proxyAuthenticationHandler:(id)a10 sceneStateMonitor:(id)a11 analyticsReportingProvider:(id)a12;

@end
