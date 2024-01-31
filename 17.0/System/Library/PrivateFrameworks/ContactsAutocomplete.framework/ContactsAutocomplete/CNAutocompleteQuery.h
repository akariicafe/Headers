@class CNCancelationToken, NSString, CNAutocompleteUserSession, CNAutocompleteFetchRequest, CNAutocompleteDelegateWrapper;
@protocol CNScheduler, CNAutocompleteSourceInclusionPolicy, CNAutocompleteProbeProvider, CNAutocompleteSearchProvider, CNCancelable;

@interface CNAutocompleteQuery : NSObject <CNCancelable>

@property (copy) CNAutocompleteFetchRequest *request;
@property (retain) id<CNAutocompleteSearchProvider> searchProvider;
@property (retain) CNAutocompleteDelegateWrapper *delegate;
@property (retain) id<CNScheduler> scheduler;
@property (retain) id<CNAutocompleteProbeProvider> probeProvider;
@property (retain) CNAutocompleteUserSession *userSession;
@property (retain) CNCancelationToken *cancelationToken;
@property (weak) id<CNCancelable> delegateToken;
@property (retain) id<CNAutocompleteSourceInclusionPolicy> sourceInclusionPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureNetworkActivityHandlersForBuilder:(id)a0 query:(id)a1;
+ (void)configureNetworkForBuilder:(id)a0 query:(id)a1;
+ (void)configureNetworkPolicyForBuilder:(id)a0 query:(id)a1;
+ (id)observableForQuery:(id)a0 context:(id)a1;
+ (id)observableWithSupplementalResultsForQuery:(id)a0;
+ (id)queryWithRequest:(id)a0 searchProvider:(id)a1 delegate:(id)a2 probeProvider:(id)a3 scheduler:(id)a4 userSession:(id)a5 delegateToken:(id)a6;
+ (BOOL)searchTypeSupportsSuppressionOfAlreadyChosenAddresses:(unsigned long long)a0;
+ (BOOL)shouldPerformQueryForRequest:(id)a0;
+ (BOOL)shouldSortResultsForPolicy:(id)a0;
+ (BOOL)shouldSuppressAddressesAlreadyChosenForRequest:(id)a0;

- (id)execute;
- (void).cxx_destruct;
- (void)cancel;
- (id)executeWithContext:(id)a0;
- (void)searchOperationReportedResults:(id)a0;
- (id)initWithRequest:(id)a0 searchProvider:(id)a1 delegate:(id)a2 probeProvider:(id)a3 scheduler:(id)a4 userSession:(id)a5 delegateToken:(id)a6;
- (id)makeDelegateWrapperWithDelegate:(id)a0 forRequest:(id)a1 sourceInclusionPolicy:(id)a2 userSession:(id)a3;
- (void)searchOperationEncounteredError:(id)a0;
- (void)searchOperationsHaveBegunNetworkActivity;
- (void)searchOperationsHaveEndedNetworkActivity;
- (void)searchOperationsHaveFinished;

@end
