@class FCCloudContext, FCUserVector, FCAsyncSerialQueue, NSDate, NSString;
@protocol FCReadonlyAggregateStoreProviderType;

@interface FCUserVectorManager : NSObject <FCAppActivityObserving>

@property (retain, nonatomic) FCAsyncSerialQueue *queue;
@property (retain, nonatomic) FCUserVector *userVector;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (retain, nonatomic) id<FCReadonlyAggregateStoreProviderType> aggregateStoreProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationDidEnterForeground;
- (void)_applicationDidEnterBackground;
- (id)initWithContext:(id)a0;
- (void)_submitPersonalizationVector;
- (void)activityObservingApplicationWillTerminate;
- (void)activityObservingApplicationWindowDidBecomeBackground;
- (void)_fetchUserVector:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_cacheGSToken;
- (void)activityObservingApplicationWindowDidBecomeForeground;

@end
