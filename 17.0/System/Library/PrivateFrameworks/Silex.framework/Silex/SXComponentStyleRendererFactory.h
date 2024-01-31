@class NSString, SXViewport;
@protocol SXImageFillViewFactory, SXGradientFactory, SXVideoFillViewFactory, SXRepeatableImageFillViewFactory;

@interface SXComponentStyleRendererFactory : NSObject <SXComponentStyleRendererFactory>

@property (readonly, nonatomic) id<SXImageFillViewFactory> imageFillViewFactory;
@property (readonly, nonatomic) id<SXVideoFillViewFactory> videoFillViewFactory;
@property (readonly, nonatomic) id<SXGradientFactory> gradientFactory;
@property (readonly, nonatomic) id<SXRepeatableImageFillViewFactory> repeatableImageFillViewFactory;
@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)componentStyleRendererForComponentStyle:(id)a0;
- (id)initWithImageFillViewFactory:(id)a0 videoFillViewFactory:(id)a1 gradientFactory:(id)a2 repeatableImageFillViewFactory:(id)a3 viewport:(id)a4;

@end
