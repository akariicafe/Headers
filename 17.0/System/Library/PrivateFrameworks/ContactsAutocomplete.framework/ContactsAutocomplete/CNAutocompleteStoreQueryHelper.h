@class CNAutocompleteStoreQueryContext, CNAutocompleteUserSession;
@protocol CNScheduler, CNAutocompleteProbeProvider, CNAutocompleteFetchDelegate, CNAutocompleteSearchProvider;

@interface CNAutocompleteStoreQueryHelper : NSObject

@property (readonly, weak, nonatomic) id<CNAutocompleteFetchDelegate> delegate;
@property (readonly, nonatomic) id<CNScheduler> scheduler;
@property (readonly, nonatomic) CNAutocompleteStoreQueryContext *queryContext;
@property (readonly, nonatomic) id<CNAutocompleteProbeProvider> probeProvider;
@property (readonly, nonatomic) CNAutocompleteUserSession *userSession;
@property (readonly, nonatomic) id<CNAutocompleteSearchProvider> searchProvider;

- (void).cxx_destruct;
- (id)executeFetchRequest:(id)a0 delegate:(id)a1 delegateToken:(id)a2;
- (id)initWithSearchProvider:(id)a0 delegate:(id)a1 probeProvider:(id)a2 scheduler:(id)a3 userSession:(id)a4;

@end
