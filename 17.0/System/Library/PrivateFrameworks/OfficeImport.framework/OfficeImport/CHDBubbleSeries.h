@class CHDData;

@interface CHDBubbleSeries : CHDSeries {
    CHDData *mSizeData;
    BOOL mBubble3D;
    BOOL mInvertIfNegative;
    BOOL mShowBubbleSize;
}

- (void).cxx_destruct;
- (BOOL)isBubble3D;
- (BOOL)isInvertIfNegative;
- (BOOL)isShowBubbleSize;
- (void)setBubble3D:(BOOL)a0;
- (void)setCategoryData:(id)a0;
- (void)setInvertIfNegative:(BOOL)a0;
- (void)setShowBubbleSize:(BOOL)a0;
- (void)setSizeData:(id)a0;
- (id)sizeData;

@end
