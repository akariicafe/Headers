@class LogSpecificMedicationsIntentResponse, LogSpecificMedicationsIntent;

@interface SiriWellnessIntents.LogSpecificMedicationsIntentHandler : NSObject <LogSpecificMedicationsIntentHandling> {
    void /* unknown type, empty encoding */ storage;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleLogSpecificMedications:(LogSpecificMedicationsIntent *)a0 completion:(void (^)(LogSpecificMedicationsIntentResponse *))a1;

@end
