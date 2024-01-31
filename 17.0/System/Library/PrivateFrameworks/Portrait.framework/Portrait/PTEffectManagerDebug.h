@class NSString, PTUtil;
@protocol MTLComputePipelineState;

@interface PTEffectManagerDebug : NSObject <PTRenderEffect> {
    id<MTLComputePipelineState> _effectDepthDebug;
    float maxDepth;
    PTUtil *_util;
}

@property (readonly) unsigned long long effectPriority;
@property (readonly) short effectType;
@property BOOL enabled;
@property void /* unknown type, empty encoding */ depthNearFar;
@property BOOL reverseZ;
@property (readonly) unsigned long long depthOutputPixelFormat;
@property (readonly) unsigned long long rgbaOutputPixelFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
