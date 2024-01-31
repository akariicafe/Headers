@class NSString, AVAssetDownloadStorageManagementPolicyInternal, NSDate;

@interface AVAssetDownloadStorageManagementPolicy : NSObject <NSCopying, NSMutableCopying> {
    AVAssetDownloadStorageManagementPolicyInternal *_storageManagementPolicy;
}

@property (readonly, copy, nonatomic) NSString *priority;
@property (readonly, copy, nonatomic) NSDate *expirationDate;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setExpirationDate:(id)a0;
- (void)setPriority:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_policyDictionary;
- (void)_setPolicyDictionary:(id)a0;

@end
