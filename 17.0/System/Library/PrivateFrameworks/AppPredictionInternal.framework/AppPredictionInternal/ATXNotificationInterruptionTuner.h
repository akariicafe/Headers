@class ATXDNDModeConfigurationClient, ATXInterruptionManager, ATXNotificationAndSuggestionDatastore, ATXNotificationManagementMAConstants;
@protocol ATXNotificationSettingsReaderProtocol, ATXModeEntityScorerProtocol;

@interface ATXNotificationInterruptionTuner : NSObject {
    id<ATXModeEntityScorerProtocol> _modesModels;
    id<ATXNotificationSettingsReaderProtocol> _notificationSettingsReader;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXDNDModeConfigurationClient *_modeConfigClient;
    ATXNotificationManagementMAConstants *_constants;
    ATXInterruptionManager *_interruptionManager;
}

- (id)init;
- (id)initWithNotificationSettingsReader:(id)a0 dataStore:(id)a1 modeConfigClient:(id)a2 interruptionManager:(id)a3;
- (id)initWithModesModels:(id)a0 notificationSettingsReader:(id)a1 dataStore:(id)a2 modeConfigClient:(id)a3 interruptionManager:(id)a4;
- (id)activeNotificationSuggestionsForMode:(unsigned long long)a0 candidateNotifications:(id)a1;
- (id)activeNotificationSuggestionsForMode:(unsigned long long)a0;
- (id)dndModeUUID:(unsigned long long)a0;
- (long long)recommendedUrgencyForNotification:(id)a0 mode:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithModesModels:(id)a0 notificationSettingsReader:(id)a1 dataStore:(id)a2;
- (id)initWithModesModels:(id)a0 notificationSettingsReader:(id)a1 dataStore:(id)a2 modeConfigClient:(id)a3;
- (BOOL)validateNotificationUrgency:(id)a0;
- (id)tuningSuggestionForNotification:(id)a0 mode:(unsigned long long)a1;

@end
