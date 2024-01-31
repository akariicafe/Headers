@class NSUserDefaults;

@interface CERecommendationActionCache : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;

- (id)init;
- (void).cxx_destruct;
- (void)flushCache;
- (void)clearLastDismissed:(id)a0;
- (id)lastDismissedTimestamp:(id)a0;
- (void)trackActionCompletedForRecommendation:(id)a0;
- (void)trackActionDismissedForRecommendation:(id)a0;
- (void)_clearAction:(id)a0 tableName:(id)a1;
- (id)_timestamp:(id)a0 tableName:(id)a1;
- (void)_trackAction:(id)a0 tableName:(id)a1;
- (id)timestampForLastCanceled:(id)a0;
- (id)timestampForLastCompleted:(id)a0;
- (void)trackActionCanceledForRecommendation:(id)a0;

@end
