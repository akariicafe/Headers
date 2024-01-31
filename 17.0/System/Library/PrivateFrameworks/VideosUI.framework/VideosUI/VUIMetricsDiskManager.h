@interface VUIMetricsDiskManager : NSObject <VUIMetricsStorable> {
    void /* unknown type, empty encoding */ sessionDefaults;
    void /* unknown type, empty encoding */ eventDefaults;
}

@property (class, nonatomic, readonly) VUIMetricsDiskManager *sharedInstance;

- (void)clearAllData;
- (id)allSessions;
- (id)allEvents;
- (void)writeSession:(id)a0;
- (void)writeEvent:(id)a0;
- (id)eventsForSession:(id)a0;
- (id)sessionForEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSessionSuiteName:(id)a0 eventSuiteName:(id)a1;

@end
