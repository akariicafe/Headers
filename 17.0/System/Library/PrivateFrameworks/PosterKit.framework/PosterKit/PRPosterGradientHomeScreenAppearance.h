@class PRPosterColor, PREditorColorPickerConfiguration, NSArray;

@interface PRPosterGradientHomeScreenAppearance : PRPosterHomeScreenAppearance

@property (readonly, copy, nonatomic) PRPosterColor *color;
@property (readonly, copy, nonatomic) PREditorColorPickerConfiguration *colorPickerConfiguration;
@property (readonly, copy, nonatomic) PRPosterColor *effectiveColor;
@property (readonly, copy, nonatomic) NSArray *gradientColors;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (unsigned long long)hash;
- (id)initWithColor:(id)a0 colorPickerConfiguration:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)description;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
