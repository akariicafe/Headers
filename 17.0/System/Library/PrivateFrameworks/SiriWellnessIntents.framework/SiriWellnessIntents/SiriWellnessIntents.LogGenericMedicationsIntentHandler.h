@class LogGenericMedicationsIntent, LogGenericMedicationsIntentResponse;

@interface SiriWellnessIntents.LogGenericMedicationsIntentHandler : NSObject <LogGenericMedicationsIntentHandling> {
    void /* unknown type, empty encoding */ storage;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleLogGenericMedications:(LogGenericMedicationsIntent *)a0 completion:(void (^)(LogGenericMedicationsIntentResponse *))a1;

@end
