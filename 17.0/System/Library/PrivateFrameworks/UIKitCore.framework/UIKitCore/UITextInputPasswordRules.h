@class NSString;

@interface UITextInputPasswordRules : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *passwordRulesDescriptor;

+ (id)passwordRulesWithDescriptor:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initPasswordRulesWithDescriptor:(id)a0;

@end
