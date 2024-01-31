@interface CHDPie2DType : CHDChartType {
    int mFirstSliceAngle;
    BOOL mDoughnutType;
    BOOL mPieOfPieType;
    BOOL mBarOfPieType;
}

- (int)firstSliceAngle;
- (id)contentFormat;
- (int)defaultLabelPosition;
- (BOOL)hasExplosion;
- (id)initWithChart:(id)a0;
- (BOOL)isBarOfPieType;
- (BOOL)isDoughnutType;
- (BOOL)isPieOfPieType;
- (void)setBarOfPieType:(BOOL)a0;
- (void)setDoughnutType:(BOOL)a0;
- (void)setFirstSliceAngle:(int)a0;
- (void)setPieOfPieType:(BOOL)a0;

@end
