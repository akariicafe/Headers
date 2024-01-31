@interface SNPredicateFilterOperator : NSObject <SNOperator> {
    void /* unknown type, empty encoding */ leakRemaining;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ leakCount;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ predicate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 leakCount:(long long)a1;
- (void)processInput:(id)a0 portID:(id)a1 downstreamHandler:(id /* block */)a2;
- (void)processTerminationWithOptionalError:(id)a0 portID:(id)a1 downstreamHandler:(id /* block */)a2;

@end
