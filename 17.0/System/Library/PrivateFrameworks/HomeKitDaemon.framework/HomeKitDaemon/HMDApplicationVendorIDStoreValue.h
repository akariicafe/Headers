@class NSData, NSString;

@interface HMDApplicationVendorIDStoreValue : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *vendorIdSha1;
@property (readonly, nonatomic) NSString *applicationBundleId;
@property (readonly, nonatomic) NSString *companionAppBundleId;
@property (readonly, nonatomic) BOOL spiClient;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithVendorIDSha1:(id)a0 applicationBundleId:(id)a1 companionAppBundleId:(id)a2 spiClient:(BOOL)a3;

@end
