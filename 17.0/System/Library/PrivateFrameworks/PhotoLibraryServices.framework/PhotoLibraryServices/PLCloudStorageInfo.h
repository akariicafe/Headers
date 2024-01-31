@interface PLCloudStorageInfo : NSObject

@property (readonly, nonatomic) long long totalBytes;
@property (readonly, nonatomic) long long availableBytes;
@property (readonly, nonatomic) long long usedBytes;
@property (readonly, nonatomic) long long cameraRollBackupBytes;
@property (readonly, nonatomic) long long iCloudPhotosBytes;
@property (readonly, nonatomic) BOOL hasMaxQuotaTier;

+ (id)storageInfoWithTotal:(long long)a0 available:(long long)a1 used:(long long)a2 cameraRollBackupBytes:(long long)a3 iCloudPhotosSize:(long long)a4 hasMaxQuotaTier:(BOOL)a5;

- (id)description;
- (id)initWithTotalQuotaBytes:(long long)a0 totalAvailableBytes:(long long)a1 totalUsedBytes:(long long)a2 cameraRollBackupBytes:(long long)a3 iCloudPhotosSize:(long long)a4 hasMaxQuotaTier:(BOOL)a5;

@end
