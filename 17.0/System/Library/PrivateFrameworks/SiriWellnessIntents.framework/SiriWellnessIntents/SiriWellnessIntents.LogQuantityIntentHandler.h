@class LogQuantityIntent, LogQuantityIntentResponse;

@interface SiriWellnessIntents.LogQuantityIntentHandler : NSObject <LogQuantityIntentHandling> {
    void /* unknown type, empty encoding */ storage;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleLogQuantity:(LogQuantityIntent *)a0 completion:(void (^)(LogQuantityIntentResponse *))a1;

@end
