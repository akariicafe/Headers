@class NSString, NSNumber;

@interface HMDAccessoryMetricVendorDetails : HMFObject

@property (class, readonly) unsigned long long maximumDifferentiationNumber;

@property (readonly, nonatomic) NSString *productData;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *firmwareVersion;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSNumber *differentiationNumber;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithAccessory:(id)a0;
- (id)initWithProductData:(id)a0 manufacturer:(id)a1 model:(id)a2 firmwareVersion:(id)a3 category:(id)a4 differentiationNumber:(id)a5;

@end
