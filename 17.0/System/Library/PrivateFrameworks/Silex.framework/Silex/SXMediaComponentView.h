@class SXMediaExposureEvent, NSString;
@protocol SXAnalyticsReporting;

@interface SXMediaComponentView : SXComponentView <SXViewportChangeListener>

@property (retain, nonatomic) SXMediaExposureEvent *mediaExposureEvent;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleBounds;
@property (nonatomic) double minimumVisibleY;
@property (nonatomic) double maximumVisibleY;
@property (readonly, nonatomic) id<SXAnalyticsReporting> analyticsReporting;
@property (nonatomic) BOOL isDisplayingMedia;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)visibilityStateDidChangeFromState:(long long)a0;
- (unsigned long long)analyticsGalleryType;
- (unsigned long long)analyticsMediaType;
- (unsigned long long)analyticsVideoType;
- (void)calculateVisibleBounds;
- (void)createMediaExposureEventIfNeeded;
- (void)finishMediaExposureEventIfNeeded;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReporting:(id)a4 appStateMonitor:(id)a5;
- (id)mediaEventForClass:(Class)a0;
- (BOOL)shouldSubmitMediaExposureEventForExposedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)submitEvents;
- (void)viewport:(id)a0 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)visibleBoundsChanged;
- (void)willSubmitMediaExposureEvent:(id)a0;

@end
