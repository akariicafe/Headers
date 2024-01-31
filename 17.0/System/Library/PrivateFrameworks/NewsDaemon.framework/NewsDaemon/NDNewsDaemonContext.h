@class NSString;
@protocol NDNewsService;

@interface NDNewsDaemonContext : NSObject <NDNewsServiceClient, NDNewsService>

@property (retain, nonatomic) id<NDNewsService> daemon;
@property (copy, nonatomic) id /* block */ updateResultsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_queue;
- (void)fetchModuleDescriptorsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)fetchLatestResultsWithParameters:(id)a0 completion:(id /* block */)a1;
- (void)fetchPlaceholderResultsWithOperationInfo:(id)a0 syncCompletion:(id /* block */)a1;
- (void)markAnalyticsElement:(id)a0 asReadAtDate:(id)a1 withCompletion:(id /* block */)a2;
- (void)markAnalyticsElements:(id)a0 asSeenAtDate:(id)a1 withCompletion:(id /* block */)a2;
- (void)serviceHasNewTodayResults;

@end
