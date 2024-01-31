@class NSString, HMDCompositeSettingsZoneManager, NSObject;
@protocol OS_dispatch_queue, HMDCompositeSettingsDatabaseAdapterDelegate;

@interface HMDCompositeSettingsLegacyDatabaseAdapter : NSObject <HMBLocalZoneModelObserver, HMFLogging, HMDCompositeSettingsDatabaseAdapter>

@property (readonly, weak, nonatomic) id<HMDCompositeSettingsDatabaseAdapterDelegate> delegate;
@property (readonly, weak, nonatomic) HMDCompositeSettingsZoneManager *zoneManager;
@property (readonly, nonatomic) Class modelClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id rawDatabase;

+ (id)logCategory;

- (id)localZone:(id)a0 didProcessModelCreation:(id)a1;
- (id)localZone:(id)a0 didProcessModelDeletion:(id)a1;
- (void).cxx_destruct;
- (id)localZone:(id)a0 didProcessModelUpdate:(id)a1;
- (void)startWithDelegate:(id)a0;
- (id)initWithZoneManager:(id)a0 modelClass:(Class)a1;
- (void)addModel:(id)a0 withOptionsLabel:(id)a1 completion:(id /* block */)a2;
- (id)emptyModelWithID:(id)a0 parentModelID:(id)a1 modelClass:(Class)a2;
- (id)fetchModelWithID:(id)a0;
- (void)startObservingModelWithID:(id)a0;
- (void)stopObservingModelWithID:(id)a0;

@end
