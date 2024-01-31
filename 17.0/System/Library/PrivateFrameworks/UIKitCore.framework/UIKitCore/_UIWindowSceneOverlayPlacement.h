@class FBSSceneIdentityToken;

@interface _UIWindowSceneOverlayPlacement : UIWindowScenePlacement

@property (retain, nonatomic) FBSSceneIdentityToken *targetSceneIdentity;

+ (id)placementOverlayingWindowScene:(id)a0;
+ (unsigned long long)_placementType;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_createConfigurationWithError:(id *)a0;
- (id)initWithTargetSceneIdentity:(id)a0;

@end
