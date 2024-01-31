@class FBSDisplayConfiguration, FBSDisplayIdentity, NSSet;

@interface FBSSceneSettings : FBSSettings <FBSSceneSettings, NSCopying, NSMutableCopying> {
    NSSet *_ignoreOcclusionReasons;
}

@property (nonatomic, getter=isOccluded) BOOL occluded;
@property (nonatomic, getter=isClientFuture) BOOL clientFuture;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly, nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (readonly, nonatomic) long long interruptionPolicy;
@property (nonatomic) char activityMode;
@property (nonatomic) char jetsamMode;
@property (nonatomic) BOOL prefersProcessTaskSuspensionWhileSceneForeground;

+ (id)_settingsExtensionsForSceneExtension:(Class)a0;
+ (id)settings;
+ (Class)_mutableClass;
+ (Class)subclassExtension;
+ (Class)_baseClass;
+ (Class)_diffClass;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (id)transientLocalSettings;
- (void)_appendToDescriptionBuilder:(id)a0;
- (BOOL)_hasAdditionalDescription;
- (BOOL)_isEmptyForCoding:(BOOL)a0;
- (BOOL)_isEqualToSettings:(id)a0;
- (id)ignoreOcclusionReasons;
- (BOOL)isIgnoringOcclusions;

@end
