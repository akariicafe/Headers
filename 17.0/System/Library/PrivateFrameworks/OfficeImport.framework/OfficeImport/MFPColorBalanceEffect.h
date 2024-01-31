@interface MFPColorBalanceEffect : MFPEffect {
    int mCyanRed;
    int mMagentaGreen;
    int mYellowBlue;
}

+ (id)GUID;

- (id)initWithCyanRed:(int)a0 magentaGreen:(int)a1 yellowBlue:(int)a2;

@end
