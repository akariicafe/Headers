@class NSString, NSSet, NSURL, NSDate, PKImage;

@interface PKPhysicalCard : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *accountUserAltDSID;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSURL *frontFaceImageURL;
@property (copy, nonatomic) NSString *nameOnCard;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSString *FPANSuffix;
@property (copy, nonatomic) NSString *trackingNumber;
@property (copy, nonatomic) NSString *shippingCompany;
@property (copy, nonatomic) NSSet *orderActivity;
@property (copy, nonatomic) NSSet *shippingActivity;
@property (copy, nonatomic) NSString *activationCodeHash;
@property (retain, nonatomic) PKImage *frontFaceImage;

+ (BOOL)physicalCard:(id)a0 matchesActivationCode:(id)a1;

- (id)jsonDictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)latestOrderActivity;
- (id)latestShippingActivity;
- (id)shipmentTrackingURL;

@end
