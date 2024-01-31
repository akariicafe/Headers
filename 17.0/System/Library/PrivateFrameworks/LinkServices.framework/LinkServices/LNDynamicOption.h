@class LNValue, LNStaticDeferredLocalizedString, LNImage;

@interface LNDynamicOption : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNValue *value;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *subtitle;
@property (readonly, nonatomic) LNImage *image;
@property (readonly, nonatomic) long long indentationLevel;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValue:(id)a0 indentationLevel:(long long)a1;

@end
