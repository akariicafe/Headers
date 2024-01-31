@interface CKiCloudSyncStateBuilder : NSObject

+ (id)noSyncStorageFullForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x0; id x1; unsigned long long x2; unsigned long long x3; id x4; })a0;
+ (id)_messagesInCloudCountStringWithLongCount:(unsigned long long)a0;
+ (id)_syncingMessagesStringWithLongCount:(unsigned long long)a0;
+ (id)accountMismatchStateForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x0; id x1; unsigned long long x2; unsigned long long x3; id x4; })a0;
+ (id)idleStateForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x0; id x1; unsigned long long x2; unsigned long long x3; id x4; })a0;
+ (id)noSyncStorageAlmostFullForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x0; id x1; unsigned long long x2; unsigned long long x3; id x4; })a0;
+ (id)noSyncStorageOverFullForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x0; id x1; unsigned long long x2; unsigned long long x3; id x4; })a0;
+ (id)syncCompleteForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x0; id x1; unsigned long long x2; unsigned long long x3; id x4; })a0;
+ (id)syncDownloadingForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x0; id x1; unsigned long long x2; unsigned long long x3; id x4; })a0;
+ (id)syncModelForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x0; id x1; unsigned long long x2; unsigned long long x3; id x4; })a0;
+ (id)syncPausedAirplaneModeForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x0; id x1; unsigned long long x2; unsigned long long x3; id x4; })a0;
+ (id)syncPausedCellularDataDisabledForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x0; id x1; unsigned long long x2; unsigned long long x3; id x4; })a0;
+ (id)syncPausedNoInternetConnectionForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x0; id x1; unsigned long long x2; unsigned long long x3; id x4; })a0;
+ (id)syncUploadingForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x0; id x1; unsigned long long x2; unsigned long long x3; id x4; })a0;

@end
