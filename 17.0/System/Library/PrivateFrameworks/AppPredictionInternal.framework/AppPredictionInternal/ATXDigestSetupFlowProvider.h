@class ATXNotificationAndSuggestionDatastore;

@interface ATXDigestSetupFlowProvider : NSObject {
    ATXNotificationAndSuggestionDatastore *_datastore;
}

@property (nonatomic) BOOL containsMessageAndTimeSensitiveData;
@property (nonatomic) unsigned long long numDaysOfData;

- (id)init;
- (id)initWithDatastore:(id)a0;
- (void).cxx_destruct;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;
- (void)addRemainingAppsWithNoNotificationVolume:(id)a0;
- (id)appsSortedByNumOfNotificationsGivenNumOfDays:(unsigned long long)a0;
- (unsigned long long)numDaysSinceTimestamp:(double)a0;

@end
