@class CHUISWatchComplicationsWidgetSceneClientSettings, FBSSceneTransitionContext;

@interface CHUISWatchComplicationsWidgetSceneClientSettingsDiffContext : CHUISWidgetSceneClientSettingsDiffContext

@property (readonly, nonatomic) CHUISWatchComplicationsWidgetSceneClientSettings *prevClientSettings;
@property (readonly, nonatomic) CHUISWatchComplicationsWidgetSceneClientSettings *currClientSettings;
@property (readonly, nonatomic) FBSSceneTransitionContext *transitionContext;

- (id)initWithPreviousClientSettings:(id)a0 currentClientSettings:(id)a1 transitionContext:(id)a2;

@end
