@class NSString;

@interface SBSADefaultsContext : NSObject <NSCopying, SBSABlockMutating>

@property (class, readonly, nonatomic) Class mutatorClass;

@property (nonatomic, setter=_setSuppressDynamicIslandCompletely:) BOOL suppressDynamicIslandCompletely;
@property (nonatomic, setter=_setAlwaysShowSystemApertureOnClonedDisplays:) BOOL alwaysShowSystemApertureOnClonedDisplays;
@property (nonatomic, setter=_setAlwaysShowSystemApertureInSnapshots:) BOOL alwaysShowSystemApertureInSnapshots;
@property (nonatomic, setter=_setAlwaysRenderSystemApertureFillOnGPU:) BOOL alwaysRenderSystemApertureFillOnGPU;
@property (nonatomic, setter=_setNeverRenderSystemApertureFillOnGPU:) BOOL neverRenderSystemApertureFillOnGPU;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithBlock:(id /* block */)a0;

- (id)copyWithBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyBySettingAlwaysRenderSystemApertureFillOnGPU:(BOOL)a0;
- (id)copyBySettingAlwaysShowSystemApertureInSnapshots:(BOOL)a0;
- (id)copyBySettingAlwaysShowSystemApertureOnClonedDisplays:(BOOL)a0;
- (id)copyBySettingNeverRenderSystemApertureFillOnGPU:(BOOL)a0;
- (id)copyBySettingSuppressDynamicIslandCompletely:(BOOL)a0;
- (id)initWithDefaultsContext:(id)a0;

@end
