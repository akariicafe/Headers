@class GetCardioFitnessIntentResponse, GetCardioFitnessIntent;

@interface SiriWellnessIntents.GetCardioFitnessIntentHandler : NSObject <GetCardioFitnessIntentHandling> {
    void /* unknown type, empty encoding */ store;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleGetCardioFitness:(GetCardioFitnessIntent *)a0 completion:(void (^)(GetCardioFitnessIntentResponse *))a1;

@end
