@class NSString, UIColor;

@interface _UICellAccessoryConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_isSystemType) BOOL isSystemType;
@property (readonly, nonatomic, getter=_systemType) long long systemType;
@property (readonly, nonatomic, getter=_identifier) NSString *identifier;
@property (retain, nonatomic, getter=_backgroundColor, setter=_setBackgroundColor:) UIColor *backgroundColor;
@property (nonatomic) BOOL usesDefaultLayoutWidth;
@property (retain, nonatomic) UIColor *tintColor;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
