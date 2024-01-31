@class NSNumber, NSString;

@interface SSAMSPurchase : AMSPurchase <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *mediaType;
@property (nonatomic, getter=isPreauthenticated) BOOL preauthenticated;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToPurchase:(id)a0;

@end
