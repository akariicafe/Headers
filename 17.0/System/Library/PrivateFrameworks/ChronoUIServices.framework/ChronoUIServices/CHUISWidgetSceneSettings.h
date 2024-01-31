@class CHSWidgetMetrics, NSString, CHSWidget, CHUISWidgetVisibilitySettings, CHSWidgetTintParameters, CHSInlineTextParameters, CHSWidgetRenderScheme;

@interface CHUISWidgetSceneSettings : UIApplicationSceneSettings

@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic) unsigned long long colorScheme;
@property (readonly, nonatomic) unsigned long long widgetPriority;
@property (readonly, copy, nonatomic) NSString *widgetHostIdentifier;
@property (readonly, copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (readonly, nonatomic) BOOL canAppearInSecureEnvironment;
@property (readonly, nonatomic) BOOL supportsLowLuminance;
@property (readonly, nonatomic) BOOL prefersUnredactedContentInLowLuminanceEnvironment;
@property (readonly, copy, nonatomic) CHUISWidgetVisibilitySettings *visibility;
@property (readonly, nonatomic, getter=areAnimationsPaused) BOOL animationsPaused;
@property (readonly, nonatomic, getter=isContentPaused) BOOL contentPaused;
@property (readonly, nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;
@property (readonly, copy, nonatomic) CHSWidgetTintParameters *tintParameters;
@property (readonly, copy, nonatomic) CHSInlineTextParameters *inlineTextParameters;
@property (readonly, nonatomic) BOOL showsWidgetLabel;
@property (readonly, nonatomic, getter=isInteractionDisabled) BOOL interactionDisabled;
@property (readonly, copy, nonatomic) NSString *additionalSnapshotPresentationContext;
@property (readonly, copy, nonatomic) NSString *remoteViewControllerClassName;
@property (readonly, nonatomic) CHSWidgetRenderScheme *renderScheme;
@property (readonly, nonatomic) unsigned long long clipBehavior;

+ (id)_renderSchemeFromSettings:(id)a0;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
