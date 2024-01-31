@class NSNumber;

@interface WFSetStageManagerIntent : INIntent <WFBooleanSettingIntent>

@property (nonatomic) long long operation;
@property (retain, nonatomic) NSNumber *state;
@property (readonly, nonatomic) Class settingsClientClass;
@property (nonatomic) long long operation;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *showDock;
@property (copy, nonatomic) NSNumber *showRecentApps;

- (void)applyWithSettingsClient:(id)a0 completionHandler:(id /* block */)a1;

@end
