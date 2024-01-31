@class NSString, NSMutableArray;

@interface PKMetalPaintRenderCache : NSObject <PKStrokeRenderCache> {
    NSMutableArray *_buffers;
    unsigned long long _totalCost;
    long long _renderZoomFactor;
    BOOL _purgeableBuffers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)lockPurgeableResourcesAddToSet:(id)a0;
- (unsigned long long)cacheCost;
- (BOOL)isCompatibleWithInk:(id)a0 renderZoomFactor:(long long)a1;
- (BOOL)needsCompute;

@end
