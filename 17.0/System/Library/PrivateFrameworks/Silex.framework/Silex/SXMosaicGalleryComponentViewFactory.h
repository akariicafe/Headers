@protocol SXAnalyticsReportingProvider, SXMediaSharingPolicyProvider, SXAppStateMonitor, SXImageViewFactory, SXFullscreenCanvasControllerFactory;

@interface SXMosaicGalleryComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SXAnalyticsReportingProvider> analyticsReportingProvider;
@property (readonly, nonatomic) id<SXAppStateMonitor> appStateMonitor;
@property (readonly, nonatomic) id<SXImageViewFactory> imageViewFactory;
@property (readonly, nonatomic) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;
@property (readonly, nonatomic) id<SXFullscreenCanvasControllerFactory> canvasControllerFactory;

- (int)role;
- (void).cxx_destruct;
- (id)type;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReportingProvider:(id)a4 appStateMonitor:(id)a5 mediaSharingPolicyProvider:(id)a6 imageViewFactory:(id)a7 canvasControllerFactory:(id)a8;

@end
