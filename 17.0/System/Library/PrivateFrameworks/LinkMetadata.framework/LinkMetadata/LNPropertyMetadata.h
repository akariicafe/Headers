@class NSString, LNStaticDeferredLocalizedString, LNValueType;

@interface LNPropertyMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) LNValueType *valueType;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 valueType:(id)a1 title:(id)a2;

@end
