@interface UIWindowSceneProminentPlacement : UIWindowScenePlacement

@property (nonatomic, setter=_setPrefersLargeSize:) BOOL _prefersLargeSize;

+ (id)prominentPlacement;
+ (id)_largeProminentPlacement;
+ (unsigned long long)_placementType;

- (id)_init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_createConfigurationWithError:(id *)a0;
- (BOOL)_requestCenterSlot;
- (BOOL)_requestFullscreen;

@end
