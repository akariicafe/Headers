@class NSString, NSMutableSet, SXViewport;
@protocol SXHost;

@interface SXComponentExposureMonitor : NSObject <SXViewportChangeListener, SXComponentControllerObserver, SXComponentExposureMonitor>

@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) id<SXHost> host;
@property (retain, nonatomic) NSMutableSet *trackingComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)conditionsChanged;
- (void)onExposureOf:(id)a0 then:(id /* block */)a1;
- (void)onExposureOf:(id)a0 then:(id /* block */)a1 when:(id /* block */)a2;
- (void)onExposureOf:(id)a0 traits:(unsigned long long)a1 then:(id /* block */)a2;
- (void)onExposureOf:(id)a0 traits:(unsigned long long)a1 then:(id /* block */)a2 when:(id /* block */)a3;
- (void)stopTrackingExposureOfComponentView:(id)a0;
- (void)beginExposure:(id)a0;
- (void)componentControllerDidPresent:(id)a0;
- (void)endExposure:(id)a0;
- (id)initWithViewport:(id)a0 appStateMonitor:(id)a1 componentController:(id)a2 host:(id)a3;
- (void)performMonitoring;
- (void)trackExposureForTracking:(id)a0;
- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;
- (void)viewport:(id)a0 documentSizeDidChangeFromSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewport:(id)a0 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
