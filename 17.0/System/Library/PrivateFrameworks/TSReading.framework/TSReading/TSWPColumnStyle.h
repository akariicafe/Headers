@class TSWPPadding;

@interface TSWPColumnStyle : TSSStyle <TSWPColumnMetrics>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } adjustedInsets;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) double textScaleFactor;

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)defaultValueForProperty:(int)a0;
+ (id)propertiesAllowingNSNull;

- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 outWidth:(double *)a2 outGap:(double *)a3;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (BOOL)equalWidth;

@end
