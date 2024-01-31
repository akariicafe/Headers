@interface BiometricKitUI.EnrollStateDispatchWorkItemsManager : NSObject {
    void /* unknown type, empty encoding */ targetState;
    void /* unknown type, empty encoding */ targetStartState;
    void /* unknown type, empty encoding */ pendingOperations;
    void /* unknown type, empty encoding */ stateQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeAllWorkItems;
- (void)submitWorkItemFor:(int)a0 startState:(int)a1 work:(id /* block */)a2;

@end
