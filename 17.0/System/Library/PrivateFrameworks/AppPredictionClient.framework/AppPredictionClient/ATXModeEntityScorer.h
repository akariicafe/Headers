@protocol ATXModeEntityScorerInterface;

@interface ATXModeEntityScorer : NSObject <ATXModeEntityScorerProtocol> {
    id<ATXModeEntityScorerInterface> _modeEntityScorerClient;
}

- (id)init;
- (void)scoreUserNotifications:(id)a0 mode:(unsigned long long)a1;
- (void)scoreUserNotifications:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)rankedContactsForNotificationsForMode:(unsigned long long)a0;
- (id)rankedAppsForMode:(unsigned long long)a0;
- (id)initWithModeEntityScorerClient:(id)a0;
- (void)rankedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)rankedContactsForDenyListForMode:(unsigned long long)a0;
- (void)scoreContactsForDenyList:(id)a0 mode:(unsigned long long)a1;
- (void)copyScoreMetadataFromEntities:(id)a0 toEntities:(id)a1;
- (void)scoreContactsForDenyList:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)rankedWidgetsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)scoreApps:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreAppsForDenyList:(id)a0 mode:(unsigned long long)a1;
- (id)rankedNotificationsForMode:(unsigned long long)a0;
- (void)scoreApps:(id)a0 mode:(unsigned long long)a1;
- (void)rankedAppsForDenyListForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)scoreNotifications:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreAppsForDenyList:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreContacts:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)scoreNotifications:(id)a0 mode:(unsigned long long)a1;
- (void)copyScoreMetadataFromContactModeEntities:(id)a0 toContactModeEntities:(id)a1;
- (void)rankedContactsForDenyListForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedContactsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)_attachNotificationEntityScores:(id)a0 toNotifications:(id)a1;
- (id)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationType:(long long)a2;
- (void)rankedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (BOOL)assignModeEntityScores:(unsigned long long)a0 entityTypeIdentifier:(id)a1 entityIdentifier:(id)a2 score:(double)a3 modeConfigurationType:(long long)a4;
- (id)rankedAppsForDenyListForMode:(unsigned long long)a0;
- (void)rankedAppsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)rankedAppsForNotificationsForMode:(unsigned long long)a0;

@end
