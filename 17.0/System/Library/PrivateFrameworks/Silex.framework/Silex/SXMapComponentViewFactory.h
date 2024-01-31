@protocol SXAnalyticsReportingProvider, SXAppStateMonitor, SXDocumentTitleProviding;

@interface SXMapComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SXAnalyticsReportingProvider> analyticsReportingProvider;
@property (readonly, nonatomic) id<SXAppStateMonitor> appStateMonitor;
@property (readonly, nonatomic) id<SXDocumentTitleProviding> documentTitleProvider;

- (int)role;
- (void).cxx_destruct;
- (id)type;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReportingProvider:(id)a4 appStateMonitor:(id)a5 documentTitleProvider:(id)a6;

@end
