@interface FAOSUpdatedActivity : NSObject {
    void /* unknown type, empty encoding */ activity;
    void /* unknown type, empty encoding */ activityProvider;
}

- (void)unregister;
- (id)init;
- (void).cxx_destruct;
- (void)checkinWithCompletionHandler:(void (^)(void))a0;
- (id)initWithHeartbeatActivityHandler:(id /* block */)a0;

@end
