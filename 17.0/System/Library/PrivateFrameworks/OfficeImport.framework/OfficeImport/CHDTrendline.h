@class EDString, CHDTrendlineLabel, OADGraphicProperties;

@interface CHDTrendline : NSObject {
    BOOL mDisplayEquation;
    BOOL mDisplayRSquaredValue;
    double mBackward;
    double mForward;
    double mInterceptYAxis;
    int mPolynomialOrder;
    long long mMovingAveragePeriod;
    int mType;
    OADGraphicProperties *mGraphicProperties;
    CHDTrendlineLabel *mLabel;
    EDString *mName;
}

+ (id)trendline;

- (void)setType:(int)a0;
- (id)init;
- (void)setName:(id)a0;
- (id)label;
- (void)setLabel:(id)a0;
- (id)description;
- (double)forward;
- (void).cxx_destruct;
- (double)backward;
- (id)name;
- (int)type;
- (void)setForward:(double)a0;
- (long long)movingAveragePeriod;
- (void)setMovingAveragePeriod:(long long)a0;
- (int)polynomialOrder;
- (id)defaultNameWithSeriesName:(id)a0;
- (id)graphicProperties;
- (double)interceptYAxis;
- (BOOL)isDisplayEquation;
- (BOOL)isDisplayRSquaredValue;
- (void)setBackward:(double)a0;
- (void)setDisplayEquation:(BOOL)a0;
- (void)setDisplayRSquaredValue:(BOOL)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setInterceptYAxis:(double)a0;
- (void)setPolynomialOrder:(int)a0;

@end
