@class NSMapTable;

@interface VNHomologousObservationClassCompoundRequest : VNCompoundRequest {
    NSMapTable *_requestsClassMapping;
}

- (void).cxx_destruct;
- (void)assignOriginalRequestsResultsFromObservations:(id)a0 obtainedInPerformingContext:(id)a1;
- (id)initWithSubrequests:(id)a0;
- (id)originalRequestsOfClass:(Class)a0;

@end
