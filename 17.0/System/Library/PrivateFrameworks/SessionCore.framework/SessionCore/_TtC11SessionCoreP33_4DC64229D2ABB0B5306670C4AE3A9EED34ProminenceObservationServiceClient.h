@interface _TtC11SessionCoreP33_4DC64229D2ABB0B5306670C4AE3A9EED34ProminenceObservationServiceClient : NSObject <ACActivityProminenceObservationXPCServer> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ _lock_bufferedProminenceUpdate;
    void /* unknown type, empty encoding */ _lock_pendingAck;
    void /* unknown type, empty encoding */ _lock_predicate;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)subscribeToActivityProminenceMatchingPredicate:(id)a0 error:(id *)a1;

@end
