@class NSDate;

@interface HFActivityLogCoordinator_Swift : NSObject {
    void /* unknown type, empty encoding */ queryController;
    void /* unknown type, empty encoding */ home;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ sortedEvents;
    void /* unknown type, empty encoding */ _eventsByDate;
    void /* unknown type, empty encoding */ _lastError;
    void /* unknown type, empty encoding */ _activelyFetching;
    void /* unknown type, empty encoding */ latestFetchDate;
    void /* unknown type, empty encoding */ previousHomeQuery;
    void /* unknown type, empty encoding */ oldestFetchDate;
    void /* unknown type, empty encoding */ isFetchingData;
    void /* unknown type, empty encoding */ shouldFetchOlderEvents;
    void /* unknown type, empty encoding */ debugEvents;
    void /* unknown type, empty encoding */ updateTimer;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)numberOfEventsThatExistSince:(NSDate *)a0 completionHandler:(void (^)(long long))a1;

@end
