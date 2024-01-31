@interface SBSystemApertureDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL suppressDynamicIslandCompletely;
@property (nonatomic) BOOL alwaysShowSystemApertureOnClonedDisplays;
@property (readonly, nonatomic) BOOL alwaysShowSystemApertureInSnapshots;
@property (nonatomic) BOOL alwaysRenderSystemApertureFillOnGPU;
@property (nonatomic) BOOL neverRenderSystemApertureFillOnGPU;

- (void)_addStateCaptureHandlers;
- (void)_bindAndRegisterDefaults;

@end
