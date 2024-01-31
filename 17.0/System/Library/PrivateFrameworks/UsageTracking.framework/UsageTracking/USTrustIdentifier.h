@class NSString;

@interface USTrustIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly) BOOL trusted;

+ (id)identifierWithIdentifier:(id)a0 trusted:(BOOL)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_USTrustIdentifierCommonInitWithIdentifier:(id)a0 trusted:(BOOL)a1;
- (id)initWithIdentifier:(id)a0 trusted:(BOOL)a1;

@end
