@interface SessionCore.PresentationObservationServiceClient : NSObject <ACActivityPresentationObservationXPCServer> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ _lock_bufferedPresentationUpdate;
    void /* unknown type, empty encoding */ _lock_pendingAck;
    void /* unknown type, empty encoding */ _lock_predicate;
}

- (BOOL)subscribeToActivityPresentationMatchingPredicate:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;

@end
