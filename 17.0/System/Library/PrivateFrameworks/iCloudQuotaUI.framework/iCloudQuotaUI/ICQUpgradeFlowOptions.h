@class UIColor;

@interface ICQUpgradeFlowOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) UIColor *navigationBarTintColor;
@property (copy, nonatomic) UIColor *buttonTintColor;

+ (id)flowOptionsFromData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)serializedData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
