@class NSString, NSURL, NSDateComponents, NSDate;

@interface PKAccountPhysicalCardShippingUpdate : NSObject <NSSecureCoding, PKRecordObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *physicalCardIdentifier;
@property (nonatomic) long long shippingStatus;
@property (copy, nonatomic) NSString *localizedDeliveryExceptionReason;
@property (copy, nonatomic) NSString *trackingNumber;
@property (copy, nonatomic) NSString *shippingCompany;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDateComponents *estimatedDeliveryDate;
@property (readonly, nonatomic) NSURL *shipmentTrackingURL;
@property (readonly, copy, nonatomic) NSString *formattedEstimatedDeliveryDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordType;
+ (id)recordNamePrefix;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRecord:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithRecord:(id)a0;
- (BOOL)isEqualToPhysicalCardShippingUpdate:(id)a0;

@end
