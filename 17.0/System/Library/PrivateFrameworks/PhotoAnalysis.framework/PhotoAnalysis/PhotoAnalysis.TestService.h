@class NSString, NSError;

@interface PhotoAnalysis.TestService : _TtCs12_SwiftObject <PLPhotoAnalysisGenericServiceProtocol, PLPhotoAnalysisTestServiceProtocol> {
    void /* unknown type, empty encoding */ worker;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ stateHolder;
    void /* unknown type, empty encoding */ operationManager;
}

- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)performGetStringWithOperationID:(long long)a0 reply:(void (^)(NSString *, NSError *))a1;
- (void)performLongOperationWithOperationID:(long long)a0 reply:(void (^)(NSString *, NSError *))a1;

@end
