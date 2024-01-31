@class NSString, SXViewportDebuggerOverlayView, SXViewport;

@interface SXViewportDebugger : NSObject <SXViewportChangeListener>

@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) SXViewportDebuggerOverlayView *dynamicBoundsView;
@property (readonly, nonatomic) SXViewportDebuggerOverlayView *appearStateIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)update;
- (void).cxx_destruct;
- (id)colorForAppearState:(unsigned long long)a0;
- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;
- (void)viewport:(id)a0 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)viewport:(id)a0 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
