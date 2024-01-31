@class SBSADefaultsContext;

@interface SBSADefaultsContextMutator : NSObject

@property (readonly, nonatomic) SBSADefaultsContext *mutatable;
@property (nonatomic) BOOL suppressDynamicIslandCompletely;
@property (nonatomic) BOOL alwaysShowSystemApertureOnClonedDisplays;
@property (nonatomic) BOOL alwaysShowSystemApertureInSnapshots;
@property (nonatomic) BOOL alwaysRenderSystemApertureFillOnGPU;
@property (nonatomic) BOOL neverRenderSystemApertureFillOnGPU;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDefaultsContext:(id)a0;

@end
