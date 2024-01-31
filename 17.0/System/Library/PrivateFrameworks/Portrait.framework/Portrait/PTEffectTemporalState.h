@class PTMetalContext, PTUtil;
@protocol MTLTexture;

@interface PTEffectTemporalState : NSObject {
    PTMetalContext *_metalContext;
    PTUtil *_util;
    id<MTLTexture> _disparityNetworkTemporalState;
    id<MTLTexture> _lastQuatersizeRGBA;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0 util:(id)a1;
- (void)restoreState:(id)a0 cvmNetwork:(id)a1 temporalFilter:(id)a2;
- (void)saveState:(id)a0 cvmNetwork:(id)a1 msrColorPyramid:(id)a2;

@end
