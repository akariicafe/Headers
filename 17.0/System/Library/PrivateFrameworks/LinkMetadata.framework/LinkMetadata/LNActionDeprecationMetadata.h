@class NSString, LNStaticDeferredLocalizedString;

@interface LNActionDeprecationMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *messageText;
@property (readonly, copy, nonatomic) NSString *replacedByIntentIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessageText:(id)a0 replacedByIntentIdentifier:(id)a1;

@end
