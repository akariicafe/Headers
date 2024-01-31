@class DeleteHealthSampleIntentResponse, DeleteHealthSampleIntent;

@interface SiriWellnessIntents.DeleteHealthSampleIntentHandler : NSObject <DeleteHealthSampleIntentHandling> {
    void /* unknown type, empty encoding */ storage;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleDeleteHealthSample:(DeleteHealthSampleIntent *)a0 completion:(void (^)(DeleteHealthSampleIntentResponse *))a1;

@end
