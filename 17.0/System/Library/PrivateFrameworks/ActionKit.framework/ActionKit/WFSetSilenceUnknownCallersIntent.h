@class NSNumber;

@interface WFSetSilenceUnknownCallersIntent : INIntent <WFBooleanSettingIntent>

@property (nonatomic) long long operation;
@property (retain, nonatomic) NSNumber *state;
@property (readonly, nonatomic) Class settingsClientClass;
@property (nonatomic) long long operation;
@property (copy, nonatomic) NSNumber *state;

- (void)applyWithSettingsClient:(id)a0 completionHandler:(id /* block */)a1;

@end
