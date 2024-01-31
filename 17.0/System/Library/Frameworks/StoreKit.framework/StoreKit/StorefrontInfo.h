@class NSString, NSLocale;

@interface StorefrontInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSLocale *locale;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 countryCode:(id)a1 locale:(id)a2;

@end
