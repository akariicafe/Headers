@class ATXDNDModeConfigurationClient, ATXNotificationManagementMAConstants;
@protocol ATXNotificationSettingsReaderProtocol, ATXModeEntityScorerProtocol;

@interface ATXInterruptionManager : NSObject {
    id<ATXModeEntityScorerProtocol> _modesModels;
    id<ATXNotificationSettingsReaderProtocol> _notificationSettingsReader;
    ATXDNDModeConfigurationClient *_modeConfigurationClient;
    ATXNotificationManagementMAConstants *_notificationManagementConstants;
}

- (id)init;
- (void)recommendedAllowedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)recommendedDeniedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateDeniedAppsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateDeniedContactsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateAllowedAppsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (id)initWithModesModels:(id)a0 notificationSettingsReader:(id)a1 modeConfigurationClient:(id)a2;
- (void)recommendedAndCandidateAllowedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)recommendedDeniedContactsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (id)recommendedDeniedContactsForMode:(unsigned long long)a0;
- (void)recommendedAndCandidateDeniedAppsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (id)recommendedAllowedAppsForMode:(unsigned long long)a0;
- (void)recommendedAndCandidateAllowedContactsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (void)recommendedDeniedContactsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (void)recommendedAllowedContactsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateDeniedContactsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateAllowedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateAllowedAppsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (id)recommendedDeniedAppsForMode:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)recommendedAndCandidateDeniedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateDeniedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateAllowedContactsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (void)recommendedAllowedContactsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (BOOL)appSatisfiesRelevanceCriteriaForAllowOrSilenceList:(id)a0;
- (id)recommendedAllowedContactsForContactScores:(id)a0;

@end
