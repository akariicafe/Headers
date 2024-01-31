@interface SiriSettingsIntents.GetIntentHandler : NSObject <INGetSettingIntentHandling> {
    void /* unknown type, empty encoding */ confirmationConfigProvider;
    void /* unknown type, empty encoding */ settingIdentifierHandlers;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmGetSetting:(id)a0 completion:(id /* block */)a1;
- (void)handleGetSetting:(id)a0 completion:(id /* block */)a1;

@end
