@interface MPUMutableFontDescriptor : MPUFontDescriptor

@property (nonatomic) long long textStyle;
@property (nonatomic) double systemFontSize;
@property (nonatomic) long long weight;
@property (nonatomic) long long leadingAdjustment;
@property (nonatomic) double defaultPointSizeAdjustment;
@property (nonatomic) BOOL usesItalic;
@property (nonatomic) BOOL usesCondensedMetrics;
@property (nonatomic) BOOL wantsMonospaceNumbers;

- (void)setWeight:(long long)a0;
- (void)_resetToDefaultValues;
- (void)setUsesCondensedMetrics:(BOOL)a0;
- (void)setTextStyle:(long long)a0;
- (void)setLeadingAdjustment:(long long)a0;
- (void)setSystemFontSize:(double)a0;
- (id)_copyAllowingGlobalCacheLookup:(BOOL)a0;
- (void)setWantsMonospaceNumbers:(BOOL)a0;
- (void)setUsesItalic:(BOOL)a0;
- (void)setDefaultPointSizeAdjustment:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
