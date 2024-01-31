@class PTMetalContext, NSString, PTUtil, PTOpticalFlow;
@protocol MTLComputePipelineState;

@interface PTDisparityFilterEMA_LKT : NSObject <PTAbstractDisparityFilter> {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _temporalFilterEMA_LKT;
    id<MTLComputePipelineState> _temporalFilterEMA_LKTNormal;
    id<MTLComputePipelineState> _temporalFilterEMA_LKTDisparityNormal;
    int _frameIndex;
    PTOpticalFlow *_opticalFlow;
    PTUtil *_util;
    NSString *_dumpInputOutputFolder;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _disparitySize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _disparityFilteredSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)emaFilterDisparity:(id)a0 inDisplacement:(id)a1 inDisparityPrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 frameIndex:(int)a5 scale:(float)a6;
- (int)emaFilterDisparityNormal:(id)a0 inDisplacement:(id)a1 inDisparityPrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 inNormalPrev:(id)a5 inNormal:(id)a6 outNormal:(id)a7 frameIndex:(int)a8;
- (int)gaussEMAFilterNormal:(id)a0 inDisplacement:(id)a1 inNormalPrev:(id)a2 inNormal:(id)a3 outNormal:(id)a4 frameIndex:(int)a5;
- (id)initWithMetalContext:(id)a0 disparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 disparityFilteredSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 disparityPixelFormat:(unsigned long long)a3 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 colorPixelFormat:(unsigned long long)a5 sensorPort:(id)a6;
- (int)prepareFilter:(id)a0 inRGBA:(id)a1 outDisplacement:(id)a2;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inDisparityPrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 disparityBias:(float)a5;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inStatePrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 outState:(id)a5;

@end
