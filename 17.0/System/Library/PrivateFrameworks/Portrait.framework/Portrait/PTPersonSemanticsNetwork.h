@class PTMetalContext, NSString, PTEffectUtil, PTUtil, PTEspressoGenericExecutor;
@protocol MTLTexture;

@interface PTPersonSemanticsNetwork : NSObject {
    PTEspressoGenericExecutor *_executor;
    PTMetalContext *_metalContext;
    id<MTLTexture> _inRGBA;
    id<MTLTexture> _outSkinMask;
    id<MTLTexture> _outPersonMask;
    NSString *_inRGBAName;
    PTEffectUtil *_effectUtil;
    PTUtil *_util;
}

- (void).cxx_destruct;
- (unsigned int)executeNetwork:(id)a0;
- (id)inRGBA;
- (id)initWithMetalContext:(id)a0 effectUtil:(id)a1 util:(id)a2 sharedResources:(id)a3;
- (id)outPersonMask;
- (id)outSkinMask;

@end
