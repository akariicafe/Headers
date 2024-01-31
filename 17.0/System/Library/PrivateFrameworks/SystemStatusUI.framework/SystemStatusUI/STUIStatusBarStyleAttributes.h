@class UIColor, UIFont, NSArray, NSString, UITraitCollection;

@interface STUIStatusBarStyleAttributes : NSObject <BSDebugDescriptionProviding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic, getter=isScaledFixedWidthBar) BOOL scaledFixedWidthBar;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) long long effectiveLayoutDirection;
@property (nonatomic) double iconScale;
@property (nonatomic) long long symbolScale;
@property (nonatomic) long long iconSize;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) UIFont *emphasizedFont;
@property (copy, nonatomic) UIFont *smallFont;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIColor *imageTintColor;
@property (copy, nonatomic) UIColor *imageDimmedTintColor;
@property (copy, nonatomic) NSArray *imageNamePrefixes;
@property (readonly, nonatomic, getter=isRounded) BOOL rounded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)overriddenStyleAttributes;
+ (id)styleAttributesForStatusBar:(id)a0 style:(long long)a1;

- (id)fontForStyle:(long long)a0;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)styleAttributesWithOverrides:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
