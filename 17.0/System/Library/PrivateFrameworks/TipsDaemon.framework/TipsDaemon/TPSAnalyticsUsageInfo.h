@class NSString, NSPredicate, TPSContextualDuetEvent, NSDate;

@interface TPSAnalyticsUsageInfo : NSObject

@property (nonatomic) BOOL overrideHoldout;
@property (retain, nonatomic) NSDate *firstShownDate;
@property (retain, nonatomic) NSDate *notifiedDate;
@property (retain, nonatomic) NSPredicate *usagePredicate;
@property (copy, nonatomic) TPSContextualDuetEvent *usageEvent;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long desiredOutcomeCount;

- (void).cxx_destruct;

@end
