@class NSMutableDictionary;

@interface BWInferenceSchedulerResourceCoordinator : NSObject {
    NSMutableDictionary *_requestedPoolSizeByFormat;
    NSMutableDictionary *_pixelBufferPoolByFormat;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (int)requestPixelBufferPoolForFormat:(id)a0 size:(unsigned long long)a1;
- (id)pixelBufferPoolForFormat:(id)a0;
- (void)preparePixelBufferPoolsWithBackPressureDrivenPipelining:(BOOL)a0;
- (id)formatsWithRequestedPoolsRemainingAfterSubtractingFormats:(id)a0;
- (int)requestPixelBufferPoolForRequirement:(id)a0 size:(unsigned long long)a1;

@end
