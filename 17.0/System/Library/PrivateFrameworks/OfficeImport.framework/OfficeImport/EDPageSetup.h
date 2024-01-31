@interface EDPageSetup : NSObject {
    int mOrientation;
    int mPageOrder;
    BOOL mCustomFirstPageNumber;
    unsigned long long mFirstPageNumber;
    unsigned long long mFitToHeight;
    unsigned long long mFitToWidth;
    unsigned long long mScale;
    float mLeftMargin;
    float mRightMargin;
    float mTopMargin;
    float mBottomMargin;
    float mHeaderMargin;
    float mFooterMargin;
}

+ (id)pageSetup;

- (void)setOrder:(int)a0;
- (id)init;
- (void)setOrientation:(int)a0;
- (int)order;
- (float)topMargin;
- (unsigned long long)scale;
- (float)rightMargin;
- (void)setLeftMargin:(float)a0;
- (id)description;
- (float)leftMargin;
- (float)bottomMargin;
- (int)orientation;
- (void)setScale:(unsigned long long)a0;
- (void)setRightMargin:(float)a0;
- (void)setBottomMargin:(float)a0;
- (void)setTopMargin:(float)a0;
- (float)footerMargin;
- (float)headerMargin;
- (void)setFooterMargin:(float)a0;
- (void)setHeaderMargin:(float)a0;
- (unsigned long long)firstPageNumber;
- (void)setFitToHeight:(unsigned long long)a0;
- (BOOL)customFirstPageNumber;
- (unsigned long long)fitToHeight;
- (unsigned long long)fitToWidth;
- (void)setCustomFirstPageNumber:(BOOL)a0;
- (void)setFirstPageNumber:(unsigned long long)a0;
- (void)setFitToWidth:(unsigned long long)a0;

@end
