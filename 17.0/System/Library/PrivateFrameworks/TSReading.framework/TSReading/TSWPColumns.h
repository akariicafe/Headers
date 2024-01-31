@interface TSWPColumns : NSObject {
    double _widthArray[10];
    double _gapArray[9];
}

@property (nonatomic) unsigned long long columnCount;
@property (nonatomic) BOOL equalWidth;

+ (id)columns;

- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 outWidth:(double *)a2 outGap:(double *)a3;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (id)initWithColumnCount:(unsigned long long)a0;
- (id)initWithColumnCount:(unsigned long long)a0 equalWidth:(BOOL)a1 widthArray:(double *)a2 gapArray:(double *)a3;
- (id)initWithEqualColumnCount:(unsigned long long)a0 gapFraction:(double)a1;
- (double)p_equalGapForEqualWidth:(double)a0;
- (double)p_equalWidthForEqualGap:(double)a0;
- (double)p_maxEqualGapForBodyWidth:(double)a0;
- (void)p_setColumnCount:(unsigned long long)a0 gapFraction:(double)a1;
- (void)p_setEqualWidth:(double)a0 equalGap:(double)a1;
- (void)setGap:(double)a0 forColumnIndex:(unsigned long long)a1 bodyWidth:(double)a2;
- (void)setWidth:(double)a0 forColumnIndex:(unsigned long long)a1 bodyWidth:(double)a2;

@end
