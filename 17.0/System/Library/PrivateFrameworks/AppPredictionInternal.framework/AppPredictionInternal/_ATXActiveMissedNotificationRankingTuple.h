@class ATXMissedNotificationRanking;

@interface _ATXActiveMissedNotificationRankingTuple : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXMissedNotificationRanking *activeUpcomingRanking;
@property (readonly, nonatomic) ATXMissedNotificationRanking *activeDeliveredRanking;
@property (readonly, nonatomic) ATXMissedNotificationRanking *justCompletedRanking;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithActiveUpcomingRanking:(id)a0 activeDeliveredRanking:(id)a1 justCompletedRanking:(id)a2;
- (id)initWithPreviousTuple:(id)a0 nextRankingEvent:(id)a1;

@end
