@class NSError;

@interface _ACSBatteryServiceBookingCoordinator : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ requestManager;
    void /* unknown type, empty encoding */ openURL;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ telemetryReporter;
    void /* unknown type, empty encoding */ clock;
    void /* unknown type, empty encoding */ lastPrepareInstant;
    void /* unknown type, empty encoding */ retrieveSupportHandoffURLTask;
}

- (id)init;
- (id)initWithOptions:(id)a0;
- (void)launchBatteryServiceBookingFlowWithCompletionHandler:(void (^)(NSError *))a0;
- (void)prepareBatteryServiceBookingFlowWithCompletionHandler:(void (^)(NSError *))a0;

@end
