@class ATXDNDModeConfigurationClient, ATXUserEducationSuggestionConnector;

@interface ATXUserEducationSuggestionCustomizeFocusServer : ATXUserEducationSuggestionBaseServer <ATXUserEducationSuggestionModeChangeObserver> {
    ATXUserEducationSuggestionConnector *_connector;
    ATXDNDModeConfigurationClient *_modeConfigurationClient;
}

- (void)dealloc;
- (id)initWithConnector:(id)a0;
- (void)processModeChangeEvent:(id)a0;
- (void)sendSuggestion:(id)a0 eventType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_processModeChangeEvent:(id)a0;

@end
