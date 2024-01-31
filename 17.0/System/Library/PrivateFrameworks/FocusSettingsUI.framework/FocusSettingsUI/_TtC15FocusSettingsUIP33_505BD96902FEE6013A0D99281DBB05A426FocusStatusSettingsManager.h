@interface _TtC15FocusSettingsUIP33_505BD96902FEE6013A0D99281DBB05A426FocusStatusSettingsManager : NSObject <DNDModeConfigurationServiceListener> {
    void /* unknown type, empty encoding */ clientIdentifier;
    void /* unknown type, empty encoding */ isListeningToModeConfigurationService;
    void /* unknown type, empty encoding */ isListeningToGlobalConfigurationService;
    void /* unknown type, empty encoding */ modeConfigurationService;
    void /* unknown type, empty encoding */ globalConfigurationService;
    void /* unknown type, empty encoding */ cachedModes;
    void /* unknown type, empty encoding */ cachedConfigurations;
}

- (id)init;
- (void)dealloc;
- (void)modeConfigurationService:(id)a0 didReceiveAvailableModesUpdate:(id)a1;
- (void).cxx_destruct;

@end
