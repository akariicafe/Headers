@class NSString;

@interface WFBrightnessSettingsClient : WFSettingsClient <WFDecimalValueSetting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createClientWithCompletionHandler:(id /* block */)a0;

- (void)getValueWithCompletionHandler:(id /* block */)a0;
- (void)setValue:(float)a0 completionHandler:(id /* block */)a1;

@end
