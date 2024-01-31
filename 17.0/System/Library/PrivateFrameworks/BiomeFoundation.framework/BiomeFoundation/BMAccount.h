@class NSString;

@interface BMAccount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSString *biomeAccountIdentifier;

+ (id)new;
+ (id)biomeIdentifierForAccountIdentifier:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithAccountIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBiomeAccountIdentifier:(id)a0;

@end
