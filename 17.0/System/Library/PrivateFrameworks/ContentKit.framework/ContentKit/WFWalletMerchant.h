@class NSString, NSURL;

@interface WFWalletMerchant : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSURL *logoURL;
@property (readonly, nonatomic) unsigned long long merchantType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayName:(id)a0 uniqueIdentifier:(id)a1 logoURL:(id)a2 merchantType:(unsigned long long)a3;

@end
