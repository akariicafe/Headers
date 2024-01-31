@class NSError, NSString, HKDevice, HKCodableQuantitySeries, NSDate, HKHealthStore, NSUUID, HKTaskServerProxyProvider, NSObject, HKQuantityType;
@protocol OS_dispatch_queue;

@interface HKQuantitySeriesSampleBuilder : NSObject <_HKXPCExportable> {
    HKQuantityType *_quantityType;
    NSDate *_startDate;
    HKDevice *_device;
    long long _batchSize;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_fatalError;
    long long _state;
    HKCodableQuantitySeries *_quantitySeries;
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (copy, nonatomic) id /* block */ unitTest_insertQuantityCompletion;
@property (readonly, nonatomic) long long unitTest_state;
@property (readonly, copy) HKQuantityType *quantityType;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) HKDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverInterface;
+ (id)_clientErrorForFinishedSeries;
+ (id)_exceptionForPreviouslyDiscardedBuilder;

- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)discard;
- (void).cxx_destruct;
- (BOOL)_changeStateForFinishWithError:(out id *)a0;
- (id)_queue_clientErrorForFatalError;
- (void)unitTest_discardWithCompletion:(id /* block */)a0;
- (BOOL)_changeStateForInsertWithError:(out id *)a0;
- (BOOL)_changeStateForDiscardWithError:(out id *)a0;
- (void)_changeStateForFatalError:(id)a0;
- (void)_discardWithCompletion:(id /* block */)a0;
- (void)_finishSeriesWithMetadata:(id)a0 endDate:(id)a1 completion:(id /* block */)a2;
- (BOOL)_insertQuantity:(id)a0 dateInterval:(id)a1 error:(id *)a2;
- (void)_taskServer_discardWithCompletion:(id /* block */)a0;
- (void)_taskServer_finishSeriesWithMetadata:(id)a0 endDate:(id)a1 finalSeries:(id)a2 completion:(id /* block */)a3;
- (void)_taskServer_insertQuantitySeries:(id)a0 completion:(id /* block */)a1;
- (BOOL)_validateDateInterval:(id)a0 error:(out id *)a1;
- (BOOL)_validateQuantity:(id)a0 error:(out id *)a1;
- (void)finishSeriesWithMetadata:(id)a0 completion:(id /* block */)a1;
- (void)finishSeriesWithMetadata:(id)a0 endDate:(id)a1 completion:(id /* block */)a2;
- (id)initWithHealthStore:(id)a0 quantityType:(id)a1 startDate:(id)a2 device:(id)a3;
- (BOOL)insertQuantity:(id)a0 date:(id)a1 error:(id *)a2;
- (BOOL)insertQuantity:(id)a0 dateInterval:(id)a1 error:(id *)a2;
- (void)unitTest_setBatchSize:(long long)a0;

@end
