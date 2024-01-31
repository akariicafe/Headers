@class PRPosterConfiguredProperties, NSString, PRSServerPosterPath, FBSDisplayConfiguration, _PRPosterStagedSceneSettings, UITraitCollection;
@protocol PRSceneSettings, PRRenderingSceneSettings;

@interface PRPosterSceneSettings : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (copy, nonatomic) _PRPosterStagedSceneSettings *sceneSettings;
@property (copy, nonatomic) UITraitCollection *traitCollection;
@property (copy, nonatomic) NSString *provider;
@property (retain, nonatomic) PRPosterConfiguredProperties *sanitizedConfiguredProperties;
@property (retain, nonatomic) PRSServerPosterPath *path;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) long long snapshotOptions;
@property (readonly, copy, nonatomic) id<PRSceneSettings, PRRenderingSceneSettings> stagedSceneSettings;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToMutableSceneSettings:(id)a0;

@end
