@class NSString, NSURL;

@interface UARPAccessoryMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long accessoryCategoryNumber;
@property (readonly) NSString *productGroup;
@property (readonly) NSString *productNumber;
@property (copy) NSString *manufacturerAppBundleID;
@property (copy) NSString *manufacturerAppStoreID;
@property (copy) NSString *manufacturerName;
@property (copy) NSString *accessoryModel;
@property (copy) NSString *vendorName;
@property (copy) NSString *companyLegalName;
@property (copy) NSString *companyPreferredName;
@property (copy) NSString *accessoryMarketingName;
@property (copy) NSString *accessoryProductLabel;
@property (copy) NSURL *accessoryInstallationGuideURL;
@property unsigned long long accessoryCapability;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProductGroup:(id)a0 productNumber:(id)a1;

@end
