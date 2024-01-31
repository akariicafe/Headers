@class NSString, SXViewport, SXComponentView, SXImageView;

@interface SXAnimatedImageController : NSObject <SXViewportChangeListener> {
    BOOL _isReceivingViewportChanges;
    SXViewport *_viewport;
    SXImageView *_imageView;
    double _previousYOffset;
    SXComponentView *_componentView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewport:(id)a0 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
