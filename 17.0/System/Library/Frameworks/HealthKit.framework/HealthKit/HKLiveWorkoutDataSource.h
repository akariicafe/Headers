@class NSUUID, NSString, HKTaskServerProxyProvider, NSSet, NSMutableDictionary, HKHealthStore, NSMutableSet, NSObject, HKWorkoutConfiguration;
@protocol OS_dispatch_queue;

@interface HKLiveWorkoutDataSource : NSObject <_HKXPCExportable> {
    HKWorkoutConfiguration *_workoutConfiguration;
}

@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *mutableSampleTypesToCollect;
@property (retain, nonatomic) NSMutableDictionary *mutableFiltersBySampleType;
@property (nonatomic) BOOL collectsDefaultTypes;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy) NSSet *typesToCollect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (id)exportedInterface;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)_queue_dataSourceConfiguration;
- (void)_queue_finishSetup;
- (void)clientRemote_didUpdateDataSourceConfiguration:(id)a0;
- (void)disableCollectionForType:(id)a0;
- (void)enableCollectionForType:(id)a0 predicate:(id)a1;
- (id)initWithHealthStore:(id)a0 workoutConfiguration:(id)a1;
- (void)unitTest_synchronizeWithCompletion:(id /* block */)a0;
- (void)workoutBuilderDidFinish;

@end
