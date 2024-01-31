@class NSMutableSet;

@interface PKMetalUnpurgeableStrokeRenderCache : PKMetalStrokeRenderCache {
    NSMutableSet *_lockedResourceSet;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)addBuffer:(id)a0;
- (void)addSecondaryBuffer:(id)a0;
- (id)initWithInk:(id)a0 renderZoomFactor:(long long)a1;

@end
