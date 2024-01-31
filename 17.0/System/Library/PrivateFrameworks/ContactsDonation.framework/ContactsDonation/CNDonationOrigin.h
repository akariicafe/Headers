@class NSDictionary, NSString, NSDate;

@interface CNDonationOrigin : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *donationIdentifier;
@property (readonly, copy, nonatomic) NSString *clusterIdentifier;
@property (readonly, copy, nonatomic) NSDate *donationDate;
@property (readonly, copy, nonatomic) NSDate *expirationDate;

+ (id)originWithUpdatedDonationIdentifier:(id)a0 fromOrigin:(id)a1;

- (id)initWithPropertyListRepresentation:(id)a0;
- (id)initWithDonationOrigin:(id)a0;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)a0 donationIdentifier:(id)a1 clusterIdentifier:(id)a2 donationDate:(id)a3 expirationDate:(id)a4;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 donationIdentifier:(id)a1 donationDate:(id)a2 expirationDate:(id)a3;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
