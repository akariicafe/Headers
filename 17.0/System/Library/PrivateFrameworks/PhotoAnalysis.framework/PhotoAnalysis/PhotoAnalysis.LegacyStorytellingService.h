@interface PhotoAnalysis.LegacyStorytellingService : _TtCs12_SwiftObject <PLPhotoAnalysisJobServiceProtocol, PLPhotoAnalysisGenericServiceProtocol> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ worker;
    void /* unknown type, empty encoding */ stateHolder;
    void /* unknown type, empty encoding */ operationManager;
    void /* unknown type, empty encoding */ currentTaskIdentifiers;
    void /* unknown type, empty encoding */ operationID;
}

- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)writeQALog:(id)a0;
- (void)cancelOperationsWithIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)dumpAnalysisStatusWithContext:(id)a0 reply:(id /* block */)a1;

@end
