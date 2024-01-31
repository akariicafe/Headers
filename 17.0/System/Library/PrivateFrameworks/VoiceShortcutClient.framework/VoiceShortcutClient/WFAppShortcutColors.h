@class WFColor, WFGradient;

@interface WFAppShortcutColors : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFGradient *backgroundGradient;
@property (readonly, nonatomic) WFColor *tintColor;
@property (readonly, nonatomic) BOOL isDefaultTintColor;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithComplementingColors:(id)a0 tintColor:(id)a1;

@end
