@class CHSWidgetMetrics, NSString, CHSWidget, CHUISWidgetVisibilitySettings, CHSWidgetTintParameters, CHSInlineTextParameters, CHSWidgetRenderScheme;

@interface CHUISMutableWidgetSceneSettings : UIMutableApplicationSceneSettings

@property (copy, nonatomic) CHSWidget *widget;
@property (copy, nonatomic) CHSWidgetMetrics *metrics;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) unsigned long long colorScheme;
@property (nonatomic) unsigned long long widgetPriority;
@property (copy, nonatomic) NSString *widgetHostIdentifier;
@property (copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (copy, nonatomic) CHUISWidgetVisibilitySettings *visibility;
@property (nonatomic, getter=areAnimationsPaused) BOOL animationsPaused;
@property (nonatomic, getter=isContentPaused) BOOL contentPaused;
@property (nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;
@property (copy, nonatomic) NSString *additionalSnapshotPresentationContext;
@property (copy, nonatomic) NSString *remoteViewControllerClassName;
@property (copy, nonatomic) CHSWidgetTintParameters *tintParameters;
@property (copy, nonatomic) CHSInlineTextParameters *inlineTextParameters;
@property (nonatomic) BOOL canAppearInSecureEnvironment;
@property (nonatomic) BOOL supportsLowLuminance;
@property (nonatomic) BOOL prefersUnredactedContentInLowLuminanceEnvironment;
@property (nonatomic) BOOL showsWidgetLabel;
@property (nonatomic, getter=isInteractionDisabled) BOOL interactionDisabled;
@property (retain, nonatomic) CHSWidgetRenderScheme *renderScheme;
@property (nonatomic) unsigned long long clipBehavior;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
