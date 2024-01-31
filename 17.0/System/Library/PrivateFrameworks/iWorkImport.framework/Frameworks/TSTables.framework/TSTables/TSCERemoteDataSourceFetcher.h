@class TSCERemoteDataSpecifierSet, TSUNetworkReachability, NSString, NSDate, NSObject, TSCERemoteDataCoordinator;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface TSCERemoteDataSourceFetcher : NSObject

@property (readonly, nonatomic) TSCERemoteDataSpecifierSet *allRequestedKeys;
@property (readonly, nonatomic) TSCERemoteDataSpecifierSet *newlyRequestedKeys;
@property (retain, nonatomic) TSUNetworkReachability *serverReachability;
@property (retain, nonatomic) TSUNetworkReachability *internetReachability;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSDate *lastRequestDate;
@property (retain, nonatomic) NSDate *lastFullRefreshDate;
@property BOOL offline;
@property BOOL doFullRefresh;
@property BOOL earlyRefreshRequested;
@property long long state;
@property long long requestsInFlight;
@property (readonly, weak, nonatomic) TSCERemoteDataCoordinator *coordinator;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) long long dataKind;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double minimumTimeBetweenRequests;
@property (readonly, nonatomic) double recommendedTimeBetweenRequests;
@property (readonly, nonatomic) double recommendedTimeBetweenRequestsForWWAN;
@property (readonly, nonatomic) NSString *reachabilityCheckHost;

+ (id)fetcherWithCoordinator:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithCoordinator:(id)a0;
- (void).cxx_destruct;
- (void)requestCompleted;
- (void)stopUpdating;
- (void)requestLaunched;
- (id)addRemoteDataInterest:(id)a0;
- (void)autoCompleteQuotesWithInput:(id)a0 completion:(id /* block */)a1;
- (BOOL)canFetchKey:(id)a0;
- (void)enqueueRequestForKeys:(id)a0;
- (void)fetchQuotesWithTickers:(id)a0 completion:(id /* block */)a1;
- (id)fetchableKeysFromSet:(id)a0;
- (void)p_configureReachabilityWithHost:(id)a0;
- (void)p_refreshSpecifiers;
- (id)removeRemoteDataInterest:(id)a0;
- (void)resumeUpdating;
- (void)sendRequestForKeys:(id)a0;

@end
