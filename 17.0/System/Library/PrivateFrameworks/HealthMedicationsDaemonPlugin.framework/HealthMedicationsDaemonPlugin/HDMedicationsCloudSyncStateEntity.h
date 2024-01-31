@class NSString, HDStateSyncEntitySchema;

@interface HDMedicationsCloudSyncStateEntity : NSObject <HDCloudSyncStateEntity>

@property (class, readonly, copy, nonatomic) HDStateSyncEntitySchema *stateEntitySchema;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeWindow;
+ (void)syncDidFinishWithResult:(long long)a0 stateStore:(id)a1 profile:(id)a2;
+ (BOOL)updateDataWithStateStorage:(id)a0 transaction:(id)a1 error:(id *)a2;

- (id)init;

@end
