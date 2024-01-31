@class UndoMedsIntentResponse, UndoMedsIntent;

@interface SiriWellnessIntents.UndoMedsIntentHandler : NSObject <UndoMedsIntentHandling> {
    void /* unknown type, empty encoding */ storage;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleUndoMeds:(UndoMedsIntent *)a0 completion:(void (^)(UndoMedsIntentResponse *))a1;

@end
