@class NSString, NSDate;

@interface AVMutableAssetDownloadStorageManagementPolicy : AVAssetDownloadStorageManagementPolicy

@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSDate *expirationDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
