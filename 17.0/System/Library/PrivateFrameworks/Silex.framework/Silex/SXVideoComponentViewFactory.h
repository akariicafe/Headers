@class SXVideoPlayerViewControllerManager;
@protocol SXAnalyticsReportingProvider, SXBookmarkManager, SXResourceDataSourceProvider, SWReachabilityProvider, SXAppStateMonitor, SXVideoAdProviderFactory, SXScrollObserverManager, SXSceneStateMonitor;

@interface SXVideoComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SXAnalyticsReportingProvider> analyticsReportingProvider;
@property (readonly, nonatomic) id<SXResourceDataSourceProvider> resourceDataSourceProvider;
@property (readonly, nonatomic) id<SWReachabilityProvider> reachabilityProvider;
@property (readonly, nonatomic) id<SXAppStateMonitor> appStateMonitor;
@property (readonly, nonatomic) id<SXSceneStateMonitor> sceneStateMonitor;
@property (readonly, nonatomic) id<SXScrollObserverManager> scrollObserverManager;
@property (readonly, nonatomic) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager;
@property (readonly, nonatomic) id<SXBookmarkManager> bookmarkManager;
@property (readonly, nonatomic) id<SXVideoAdProviderFactory> prerollAdFactory;

- (int)role;
- (void).cxx_destruct;
- (id)type;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReportingProvider:(id)a4 appStateMonitor:(id)a5 sceneStateMonitor:(id)a6 resourceDataSourceProvider:(id)a7 reachabilityProvider:(id)a8 scrollObserverManager:(id)a9 videoPlayerViewControllerManager:(id)a10 bookmarkManager:(id)a11 prerollAdFactory:(id)a12;

@end
