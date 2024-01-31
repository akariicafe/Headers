@class PRPosterConfigurableOptions, NSString, PRPosterConfiguredProperties, NSArray, BSColor, PRSServerPosterPath;

@interface _PRPosterStagedSceneSettings : NSObject <PRMutableSceneSettings, PRMutableRenderingSceneSettings, AMUIAmbientPresentationSettings, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=pr_setRole:) NSString *pr_role;
@property (copy, nonatomic, setter=pr_setProvider:) NSString *pr_provider;
@property (copy, nonatomic, setter=pr_setPreviewIdentifier:) NSString *pr_previewIdentifier;
@property (retain, nonatomic, setter=pr_setCaseColor:) BSColor *pr_caseColor;
@property (nonatomic, setter=pr_setUserInterfaceStyle:) long long pr_userInterfaceStyle;
@property (nonatomic, setter=pr_setDeviceOrientation:) long long pr_deviceOrientation;
@property (retain, nonatomic, setter=pr_setPosterContents:) PRSServerPosterPath *pr_posterContents;
@property (retain, nonatomic, setter=pr_setPosterConfigurableOptions:) PRPosterConfigurableOptions *pr_posterConfigurableOptions;
@property (retain, nonatomic, setter=pr_setPosterConfiguredProperties:) PRPosterConfiguredProperties *pr_posterConfiguredProperties;
@property (nonatomic, getter=pr_isDepthEffectDisallowed, setter=pr_setDepthEffectDisallowed:) BOOL pr_depthEffectDisallowed;
@property (nonatomic, getter=pr_isParallaxEnabled, setter=pr_setParallaxEnabled:) BOOL pr_parallaxEnabled;
@property (nonatomic, getter=pr_isParallaxDisallowed, setter=pr_setParallaxDisallowed:) BOOL pr_parallaxDisallowed;
@property (nonatomic, getter=pr_isInlineComplicationConfigured, setter=pr_setInlineComplicationConfigured:) BOOL pr_inlineComplicationConfigured;
@property (nonatomic, getter=pr_isComplicationRowConfigured, setter=pr_setComplicationRowConfigured:) BOOL pr_complicationRowConfigured;
@property (nonatomic, getter=pr_isComplicationSidebarConfigured, setter=pr_setComplicationSidebarConfigured:) BOOL pr_complicationSidebarConfigured;
@property (nonatomic, getter=pr_isAlternateDateEnabled, setter=pr_setAlternateDateEnabled:) BOOL pr_alternateDateEnabled;
@property (nonatomic, setter=pr_setShowsHeaderElements:) BOOL pr_showsHeaderElements;
@property (nonatomic, setter=pr_setShowsComplications:) BOOL pr_showsComplications;
@property (copy, nonatomic, setter=pr_setSnapshotLogIdentifier:) NSString *pr_snapshotLogIdentifier;
@property (copy, nonatomic, setter=pr_setSnapshotDefinitionIdentifier:) NSString *pr_snapshotDefinitionIdentifier;
@property (nonatomic, getter=pr_isWallpaperObscured, setter=pr_setWallpaperObscured:) BOOL pr_wallpaperObscured;
@property (nonatomic, setter=pr_setHorizontalTitleBoundingRect:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pr_horizontalTitleBoundingRect;
@property (nonatomic, setter=pr_setVerticalTitleBoundingRect:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pr_verticalTitleBoundingRect;
@property (readonly, nonatomic) BOOL pr_isInvalidated;
@property (readonly, nonatomic, getter=pr_isParallaxEffectivelyEnabled) BOOL pr_parallaxEffectivelyEnabled;
@property (nonatomic, setter=pr_setMode:) long long pr_mode;
@property (nonatomic, setter=pr_setContent:) long long pr_content;
@property (nonatomic, setter=pr_setPreviewContent:) unsigned long long pr_previewContent;
@property (nonatomic, getter=pr_isSnapshot, setter=pr_setSnapshot:) BOOL pr_snapshot;
@property (nonatomic, getter=pr_isFloatingLayerSnapshot, setter=pr_setFloatingLayerSnapshot:) BOOL pr_floatingLayerSnapshot;
@property (nonatomic, setter=pr_setUnlockProgress:) double pr_unlockProgress;
@property (nonatomic, setter=pr_setWakeSourceIsSwipeToUnlock:) BOOL pr_wakeSourceIsSwipeToUnlock;
@property (nonatomic, setter=pr_setSignificantEventsCounter:) unsigned long long pr_significantEventsCounter;
@property (nonatomic, setter=pr_setUserTapEventWithLocation:) struct CGPoint { double x; double y; } pr_userTapLocation;
@property (nonatomic, setter=pr_setUserTapEventsCounter:) unsigned long long pr_userTapEventsCounter;
@property (nonatomic, setter=pr_setTitleAlignment:) unsigned long long pr_titleAlignment;
@property (retain, nonatomic, setter=pr_setSceneAttachments:) NSArray *pr_sceneAttachments;
@property (nonatomic, getter=isAmbientPresented) BOOL ambientPresented;
@property (nonatomic) long long ambientDisplayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToMutableSceneSettings:(id)a0 role:(id)a1;
- (long long)pr_adjustedLuminance;
- (void)pr_setInvalidated;

@end
