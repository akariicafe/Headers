@interface OADNormalTextBodyAutoFit : OADTextBodyAutoFit {
    float mFontScalePercent;
    float mLineSpacingReductionPercent;
}

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (float)fontScalePercent;
- (id)initWithFontScalePercent:(float)a0 lineSpacingReductionPercent:(float)a1;
- (float)lineSpacingReductionPercent;

@end
