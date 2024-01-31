@interface HealthUI.StateOfMindCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    void /* unknown type, empty encoding */ xValue;
    void /* unknown type, empty encoding */ maxYValue;
    void /* unknown type, empty encoding */ minYValue;
    void /* unknown type, empty encoding */ dailyYValueRanges;
    void /* unknown type, empty encoding */ momentaryYValueRanges;
}

@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) double endXValue;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ userInfo;

- (id)copyWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;

@end
