@class NSString, CHSWidgetMargins;

@interface CHSWidgetMetrics : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) unsigned long long dynamicTextSupport;
@property (readonly, nonatomic) long long fontStyle;
@property (readonly, copy, nonatomic) CHSWidgetMargins *margins;
@property (readonly, nonatomic) struct CHSEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;
@property (readonly, nonatomic) struct CHSEdgeInsets { double x0; double x1; double x2; double x3; } layoutInsets;
@property (readonly, nonatomic) struct CHSEdgeInsets { double x0; double x1; double x2; double x3; } contentMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_replaceFontStyleIn:(id)a0 withTextSizeAdjustment:(long long)a1;
+ (void)_removeSafeAreaInsetsIn:(id)a0;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3;
- (struct CGSize { double x0; double x1; })_effectiveSizePixelAlignedForDisplayScale:(double)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 textSizeAdjustment:(long long)a3;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })_rawSizePixelAlignedForDisplayScale:(double)a0;
- (struct CGSize { double x0; double x1; })scale;
- (long long)compare:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 textSizeAdjustment:(long long)a2;
- (BOOL)_isUnitScale;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 margins:(id)a4 supportsDynamicText:(unsigned long long)a5;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scale:(struct CGSize { double x0; double x1; })a2 textSizeAdjustment:(long long)a3;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a4 layoutInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a5 contentMargins:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a6 supportsDynamicText:(unsigned long long)a7;
- (struct CGSize { double x0; double x1; })_rawEffectiveSize;
- (id)succinctDescription;
- (double)_effectiveCornerRadius;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (id)_stringKeyRepresentation;
- (double)_roundToNearestOrUp:(double)a0 withScale:(double)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)_hasZeroLayoutInsets;
- (struct CGSize { double x0; double x1; })_rawLayoutInsetAdjustedSizePixelAlignedForDisplayScale:(double)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)textSizeAdjustment;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a4 supportsDynamicText:(unsigned long long)a5;

@end
