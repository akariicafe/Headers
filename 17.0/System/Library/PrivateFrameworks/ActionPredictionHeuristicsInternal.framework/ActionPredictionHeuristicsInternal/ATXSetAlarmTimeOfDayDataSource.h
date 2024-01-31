@class ATXHeuristicDevice;
@protocol _DKKnowledgeQuerying;

@interface ATXSetAlarmTimeOfDayDataSource : NSObject {
    ATXHeuristicDevice *_device;
    id<_DKKnowledgeQuerying> _duetStore;
}

+ (id)medianFrom:(id)a0;
+ (id)timeOfDayFromDonations:(id)a0;

- (void)alarmTimeOfDay:(id /* block */)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)_recentIntentDonationsForBundleId:(id)a0 limit:(unsigned long long)a1;

@end
