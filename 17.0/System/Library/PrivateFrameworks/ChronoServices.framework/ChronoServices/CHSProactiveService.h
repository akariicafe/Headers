@class CHSChronoServicesConnection;

@interface CHSProactiveService : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)init;
- (id)initWithConnection:(id)a0;
- (void)loadSuggestedWidget:(id)a0 withMetrics:(id)a1 completion:(id /* block */)a2;
- (void)suggestionBudgetsForStackIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)loadSuggestedWidget:(id)a0 metrics:(id)a1 stackIdentifier:(id)a2 completion:(id /* block */)a3;

@end
