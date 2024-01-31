@class NSString;

@interface MPStoreAssetInfoPlaybackCacheRequest : NSObject <NSCopying>

@property (nonatomic) unsigned long long accountID;
@property (nonatomic) unsigned long long delegatedAccountID;
@property (nonatomic) long long requestType;
@property (copy, nonatomic) NSString *redownloadParameters;
@property (copy, nonatomic) NSString *cloudUniversalLibraryID;
@property (nonatomic) long long storeSubscriptionAdamID;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storePurchasedAdamID;
@property (nonatomic) long long storeRadioAdamID;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
