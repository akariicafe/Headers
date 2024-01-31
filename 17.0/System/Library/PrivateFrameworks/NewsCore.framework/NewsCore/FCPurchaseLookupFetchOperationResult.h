@class NSDictionary, NSString, NSError;

@interface FCPurchaseLookupFetchOperationResult : NSObject

@property (copy, nonatomic) NSDictionary *channelIDsByPurchaseID;
@property (copy, nonatomic) NSDictionary *bundleChannelIDsByPurchaseID;
@property (copy, nonatomic) NSString *bundleChannelIDsVersion;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithChannelIDsByPurchaseID:(id)a0 bundleChannelIDsByPurchaseID:(id)a1 bundleChannelIDsVersion:(id)a2 error:(id)a3;

@end
