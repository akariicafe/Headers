@class PRPosterEnvironmentContext, NSString, PRTimeFontConfiguration, PRPosterConfigurableOptions, UITraitCollection, PRPosterMutableConfiguredProperties, FBSSceneSettings, NSURL, PREditorElementLayoutController, PRMutablePosterConfiguration, UIColor;
@protocol PRPosterAmbientEnvironment, PRPosterContentsInternal, PRPosterContents;

@interface PRPosterEnvironmentImpl : NSObject <UITraitEnvironment, NSCopying, PRPosterRenderingEnvironment_Private, PRPosterEditingEnvironment> {
    FBSSceneSettings *_settings;
    NSURL *_bundleURL;
    PRMutablePosterConfiguration *_targetConfig;
    id<PRPosterContentsInternal> _lock_sourceContents;
    PRPosterConfigurableOptions *_lock_sourceConfigurableOptions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PRTimeFontConfiguration *_lock_sourceTitleFontConfiguration;
    PRPosterMutableConfiguredProperties *_lock_targetConfiguredProperties;
    PREditorElementLayoutController *_layoutController;
}

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic, getter=isDepthEffectDisallowed) BOOL depthEffectDisallowed;
@property (readonly, nonatomic) long long luminance;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minimumContentSize;
@property (nonatomic) double backlightProgress;
@property (nonatomic) double linearBacklightProgress;
@property (nonatomic) double unlockProgress;
@property (nonatomic) BOOL wakeSourceIsSwipeToUnlock;
@property (readonly, nonatomic) PRPosterConfigurableOptions *sourceConfigurableOptions;
@property (readonly, nonatomic) PRTimeFontConfiguration *sourceTimeFontConfiguration;
@property (readonly, nonatomic) PRPosterMutableConfiguredProperties *targetConfiguredProperties;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isFloatingViewSnapshot) BOOL floatingViewSnapshot;
@property (readonly, nonatomic, getter=isPreview) BOOL preview;
@property (readonly, nonatomic, getter=isSnapshot) BOOL snapshot;
@property (readonly, nonatomic, getter=isLowLuminance) BOOL lowLuminance;
@property (readonly, nonatomic) BOOL andromeda;
@property (readonly, nonatomic) id<PRPosterContents> contents;
@property (readonly, nonatomic, getter=isParallaxEnabled) BOOL parallaxEnabled;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } desiredContentSize;
@property (readonly, nonatomic) unsigned long long titleAlignment;
@property (readonly, nonatomic) id<PRPosterAmbientEnvironment> ambientEnvironment;
@property (readonly, nonatomic) UIColor *caseColor;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) long long deviceOrientation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentCutoutBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } floatingObscurableBounds;
@property (readonly, nonatomic) unsigned long long significantEventsCounter;
@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) PRPosterEnvironmentContext *context;
@property (readonly, nonatomic) id<PRPosterContents> sourceContents;
@property (readonly, nonatomic) PRMutablePosterConfiguration *targetConfiguration;

- (void)traitCollectionDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleBoundsForLayout:(unsigned long long)a0;
- (id)_targetConfiguredProperties;
- (void)_applyToSceneSettings:(id)a0;
- (id)_initWithSceneSettings:(id)a0 traitCollection:(id)a1 targetConfig:(id)a2 extensionBundleURL:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_normalizedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_lock_hydratePosterContents:(out id *)a0 sourceConfigurableOptions:(out id *)a1 sourceTitleFontConfiguration:(out id *)a2 targetConfigurableProperties:(out id *)a3;
- (void)_appendDescriptionToStream:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenBounds;

@end
