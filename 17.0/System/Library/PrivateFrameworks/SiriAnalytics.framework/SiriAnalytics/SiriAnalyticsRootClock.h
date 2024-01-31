@class SiriAnalyticsSensitiveConditionsLedger, NSMutableDictionary;

@interface SiriAnalyticsRootClock : SiriAnalyticsLogicalClock <SiriAnalyticsSensitiveConditionsObserverDelegate> {
    NSMutableDictionary *_derivativeClocksByStreamUUID;
}

@property (readonly, nonatomic) SiriAnalyticsSensitiveConditionsLedger *sensitiveConditionsLedger;

- (void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1;
- (void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)derivativeClockForStreamUUID:(id)a0;
- (id)derivativeClocks;
- (id)initWithClockIdentifier:(id)a0 timestampOffset:(unsigned long long)a1 startedOn:(unsigned long long)a2 metastore:(id)a3;
- (BOOL)isTrackingDerivativeClockByStreamUUID:(id)a0;

@end
