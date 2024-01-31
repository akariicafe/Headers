@class ATXDNDModeConfigurationClient, ATXUserNotificationDigestBiomeStream, ATXMissedNotificationRankingBiomeStream;
@protocol ATXNotificationDigestRankerInterface, ATXModeEntityScorerProtocol;

@interface ATXNotificationDigestGeneratorClient : NSObject {
    ATXMissedNotificationRankingBiomeStream *_missedNotificationRankingStream;
    ATXUserNotificationDigestBiomeStream *_digestStream;
    ATXDNDModeConfigurationClient *_modeConfigurationClient;
    id<ATXModeEntityScorerProtocol> _modeEntityScorer;
    id<ATXNotificationDigestRankerInterface> _digestRankerClient;
}

- (id)models;
- (id)init;
- (void)generateDigestForAppGroupedNotificationStacks:(id)a0 maxGlobalMarqueeGroups:(unsigned long long)a1 maxAppMarqueeGroups:(unsigned long long)a2 reply:(id /* block */)a3;
- (void).cxx_destruct;
- (id)_flattenNestedNotificationArrays:(id)a0;
- (id)digestRankerClient;
- (void)generateDigestForNotificationArrays:(id)a0 reply:(id /* block */)a1;
- (id)generateDigestForNotifications:(id)a0 digestTime:(long long)a1;
- (void)generateMissedNotificationRankingForNotificationArrays:(id)a0 atxMode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)generateMissedNotificationRankingForNotificationArrays:(id)a0 modeUUID:(id)a1 reply:(id /* block */)a2;
- (id)initWithDigestRankerClient:(id)a0;
- (id)initWithMissedNotificationRankingBiomeStream:(id)a0 notificationDigestBiomeStream:(id)a1 modeConfigurationClient:(id)a2 modeEntityScorer:(id)a3 digestRankerClient:(id)a4;
- (id)overallDigestScoreModel;

@end
