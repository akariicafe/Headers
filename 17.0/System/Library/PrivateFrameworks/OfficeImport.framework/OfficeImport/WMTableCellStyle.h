@interface WMTableCellStyle : WMStyle {
    double mLeftPadding;
    double mRightPadding;
}

+ (id)dominantColorOf:(id)a0;
+ (float)resolveColorValueWithPercentage:(float)a0 foregroundComponent:(float)a1 backgroundComponent:(float)a2;
+ (id)resolveStyleColorWithPercentage:(float)a0 foregroundColor:(id)a1 backgroundColor:(id)a2;
+ (id)resolveStyleColorWithPercentage:(float)a0 shading:(id)a1;

- (void)addTableCellProperties:(id)a0;
- (void)addTableCellStyleProperties:(id)a0;
- (id)initWithTableCellProperties:(id)a0;
- (double)leftPadding;
- (double)rightPadding;

@end
