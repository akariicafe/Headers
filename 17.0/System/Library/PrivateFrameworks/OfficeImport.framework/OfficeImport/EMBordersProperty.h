@class OITSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {
    OITSUColor *mBorderColor;
    OITSUColor *mBorderTopColor;
    OITSUColor *mBorderLeftColor;
    OITSUColor *mBorderBottomColor;
    OITSUColor *mBorderRightColor;
    int mBorderStyle[5];
    int mBorderWidth[5];
}

- (id)borderColor;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)styleString;
- (id)colorString;
- (int *)borderWidths;
- (id)styleHashNumber;
- (id)widthHashNumber;
- (int *)borderStyles;
- (id)cssString;
- (id)cssStringForName:(id)a0;
- (BOOL)hasSameColorsAs:(id)a0;
- (BOOL)hasSameStylesAs:(id)a0;
- (BOOL)hasSameWidthsAs:(id)a0;
- (id)initWithEDBorders:(id)a0;
- (id)initWithOADStroke:(id)a0;
- (BOOL)isNoneAtLocation:(int)a0;
- (void)setBorderStyleAndWidth:(int)a0 location:(unsigned int)a1;
- (void)setNoneAtLocation:(int)a0;
- (id)stringFromColor:(id)a0;
- (id)stringFromStyleEnum:(int)a0;
- (id)stringFromWidthEnum:(int)a0;
- (id)widthString;

@end
