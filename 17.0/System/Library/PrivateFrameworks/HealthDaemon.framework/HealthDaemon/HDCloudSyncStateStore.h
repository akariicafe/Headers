@class HDStateSyncEntitySchema, NSMutableDictionary, HDCloudSyncCachedZone, NSString, HDProfile;

@interface HDCloudSyncStateStore : NSObject <HDCloudSyncStateStore> {
    HDProfile *_profile;
}

@property (nonatomic) unsigned long long aggregateMergedDataLength;
@property (readonly, nonatomic) NSMutableDictionary *mergedData;
@property (readonly, copy, nonatomic) HDCloudSyncCachedZone *zone;
@property (readonly, nonatomic) HDStateSyncEntitySchema *entitySchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)setData:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)data:(id *)a0 forKey:(id)a1 error:(id *)a2;
- (id)initWithEntitySchema:(id)a0 zone:(id)a1 profile:(id)a2;
- (void)unitTest_setMergedData:(id)a0;

@end
