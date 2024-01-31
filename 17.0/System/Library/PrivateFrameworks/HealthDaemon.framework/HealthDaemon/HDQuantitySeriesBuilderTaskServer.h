@class NSObject, HKQuantitySeriesSampleBuilderTaskServerConfiguration, NSError, NSMutableArray, HKQuantitySample;
@protocol OS_dispatch_queue;

@interface HDQuantitySeriesBuilderTaskServer : HDStandardTaskServer <HKQuantitySeriesSampleBuilderTaskServerInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    HKQuantitySample *_series;
    long long _state;
    NSMutableArray *_values;
    NSError *_fatalError;
    id /* block */ _queue_activeHandler;
    HKQuantitySeriesSampleBuilderTaskServerConfiguration *_configuration;
}

@property (readonly, nonatomic) long long state;
@property (copy, nonatomic) id /* block */ unitTest_saveSamplesCompletion;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void).cxx_destruct;
- (void)remote_finishSeriesWithMetadata:(id)a0 endDate:(id)a1 finalSeries:(id)a2 completion:(id /* block */)a3;
- (void)remote_discardWithCompletion:(id /* block */)a0;
- (void)remote_insertQuantitySeries:(id)a0 completion:(id /* block */)a1;

@end
