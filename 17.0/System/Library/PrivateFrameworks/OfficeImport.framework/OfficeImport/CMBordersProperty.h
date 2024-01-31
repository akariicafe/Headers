@class OITSUColor;

@interface CMBordersProperty : CMProperty {
    OITSUColor *mBorderColor;
    OITSUColor *mBorderTopColor;
    OITSUColor *mBorderLeftColor;
    OITSUColor *mBorderBottomColor;
    OITSUColor *mBorderRightColor;
    int mBorderStyle[5];
    int mBorderWidth[5];
    int mCustomWidth;
}

+ (BOOL)isStroked:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)styleString;
- (id)colorString;
- (void)adjustValues;
- (id)cssString;
- (id)cssStringForName:(id)a0;
- (id)initWithOADStroke:(id)a0;
- (BOOL)isNoneAtLocation:(int)a0;
- (void)setFromOadStroke:(id)a0 atLocation:(int)a1 state:(id)a2;
- (void)setNoneAtLocation:(int)a0;
- (id)stringFromColor:(id)a0;
- (id)stringFromStyleEnum:(int)a0;
- (id)stringFromWidthEnum:(int)a0;
- (id)widthString;

@end
