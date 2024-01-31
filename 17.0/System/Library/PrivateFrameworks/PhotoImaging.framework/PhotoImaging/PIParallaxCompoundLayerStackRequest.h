@class PFPosterLayout, PIParallaxStyle, NSError, NSMutableArray;
@protocol PISegmentationItem;

@interface PIParallaxCompoundLayerStackRequest : NURenderRequest {
    NSMutableArray *_requests;
    NSMutableArray *_results;
    NSError *_error;
}

@property (readonly, nonatomic) id<PISegmentationItem> segmentationItem;
@property (retain, nonatomic) PIParallaxStyle *style;
@property (retain, nonatomic) PFPosterLayout *layout;
@property (nonatomic) unsigned long long layerStackOptions;
@property (nonatomic, getter=isSettlingEffectEnabled) BOOL settlingEffectEnabled;
@property (nonatomic) BOOL updateInactiveFrame;
@property (nonatomic) BOOL updateClockZPosition;
@property (nonatomic) BOOL updateClockAreaLuminance;

- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectiveLayout;
- (void)_chooseLayoutForOrientation:(long long)a0 completion:(id /* block */)a1;
- (void)_generateLayerStackForOrientation:(long long)a0 completion:(id /* block */)a1;
- (void)_recordError:(id)a0;
- (void)_recordResult:(id)a0;
- (id)_responseWithCompoundLayerStack:(id)a0;
- (void)_submit:(id /* block */)a0;
- (void)_submitClockMaterialRequestWithLayerStack:(id)a0 completion:(id /* block */)a1;
- (void)_submitClockOverlapRequestWithLayout:(id)a0 completion:(id /* block */)a1;
- (void)_submitInactiveLayoutRequestWithOrientedLayout:(id)a0 completion:(id /* block */)a1;
- (void)_submitLayerStackRequestForMode:(long long)a0 layout:(id)a1 completion:(id /* block */)a2;
- (void)_submitLayerStackRequestsWithLayout:(id)a0 orientation:(long long)a1 completion:(id /* block */)a2;
- (id)initWithSegmentationItem:(id)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
