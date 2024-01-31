@class FCAsyncSerialQueue, NSString, NTSourceAvailabilityManager, NSObject;
@protocol FCContentContext, FCWritablePrivateDataStorage, NTTodayResultsSource, FCReadablePrivateDataStorage, FCFeedPersonalizerFactoryType, OS_dispatch_queue;

@interface NTTodayContext : NSObject <FCNetworkReachabilityObserving, NTTodayContext>

@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) id<FCFeedPersonalizerFactoryType> feedPersonalizerFactory;
@property (readonly, nonatomic) id<FCReadablePrivateDataStorage> readablePrivateDataStorage;
@property (readonly, nonatomic) id<FCWritablePrivateDataStorage> writablePrivateDataStorage;
@property (readonly, nonatomic) NTSourceAvailabilityManager *sourceAvailabilityManager;
@property (retain, nonatomic) id<NTTodayResultsSource> todayResultsSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) FCAsyncSerialQueue *fetchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ newResultsHandler;

- (id)init;
- (void)writeUserDidSeeHeadlinesWithAnalyticsElements:(id)a0 atDate:(id)a1 withCompletion:(id /* block */)a2;
- (id)initWithContentContext:(id)a0 feedPersonalizerFactory:(id)a1 processVariant:(unsigned long long)a2 accessQueue:(id)a3 fetchQueue:(id)a4;
- (void)fetchLatestResultsWithOperationInfo:(id)a0 completion:(id /* block */)a1;
- (id)initWithContentHostDirectory:(id)a0 feedPersonalizerFactory:(id)a1 processVariant:(unsigned long long)a2 accessQueue:(id)a3 fetchQueue:(id)a4;
- (void)fetchModuleDescriptorsWithCompletion:(id /* block */)a0;
- (void)writeUserDidReadHeadlineWithAnalyticsElement:(id)a0 atDate:(id)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_setupTodayResultsSource;
- (void)networkReachabilityDidChange:(id)a0;
- (id)placeholderResultsWithOperationInfo:(id)a0;

@end
