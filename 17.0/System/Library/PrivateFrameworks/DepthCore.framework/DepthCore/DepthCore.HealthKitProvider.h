@interface DepthCore.HealthKitProvider : NSObject {
    void /* unknown type, empty encoding */ _maxDepth;
    void /* unknown type, empty encoding */ _minTemperature;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ queryQueue;
    void /* unknown type, empty encoding */ queryTask;
    void /* unknown type, empty encoding */ depthObserverQuery;
    void /* unknown type, empty encoding */ temperatureObserverQuery;
}

- (id)init;
- (void)dealloc;
- (void)handleSignificantTimeChange;
- (void).cxx_destruct;
- (void)handleTimeZoneChange;
- (void)handleDayChange;

@end
