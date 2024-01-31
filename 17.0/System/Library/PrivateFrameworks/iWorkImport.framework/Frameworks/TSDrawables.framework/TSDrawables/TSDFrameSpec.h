@class NSString, NSBundle, NSDictionary, NSMutableDictionary, TSUOnce;

@interface TSDFrameSpec : NSObject <NSCopying> {
    NSBundle *mBundle;
    NSDictionary *mInfoDictionary;
    BOOL mProviderWasInvalid;
    double mLeftInset;
    double mRightInset;
    double mTopInset;
    double mBottomInset;
    struct CGPoint { double x; double y; } mAdornmentPosition;
    double mMinimumAssetScale;
    int mTilingMode;
    BOOL mHasImages;
    BOOL mHasMask;
    BOOL mHasAdornment;
    NSMutableDictionary *mProvidersByKey;
    double mLeftWidth;
    double mRightWidth;
    double mTopHeight;
    double mBottomHeight;
    struct CGSize { double width; double height; } mAdornmentSize;
    TSUOnce *mLoadedImageMetricsOnce;
    _Atomic int mInterest;
}

@property (readonly, copy, nonatomic) NSString *frameName;
@property (readonly, nonatomic) BOOL displayInPicker;

+ (void)initialize;
+ (id)frameSpecWithName:(id)a0;
+ (id)p_imageKeys;

- (id)initWithBundle:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })i_adornmentSize;
- (void)i_addInterestInProviders;
- (struct CGPoint { double x0; double x1; })i_adornmentPosition;
- (double)i_bottomHeight;
- (double)i_bottomInset;
- (BOOL)i_hasAdornment;
- (BOOL)i_hasImages;
- (BOOL)i_hasMask;
- (double)i_leftInset;
- (double)i_leftWidth;
- (double)i_minimumAssetScale;
- (id)i_providerForIndex:(int)a0 mask:(BOOL)a1;
- (void)i_removeInterestInProviders;
- (double)i_rightInset;
- (double)i_rightWidth;
- (int)i_tilingMode;
- (double)i_topHeight;
- (double)i_topInset;
- (id)p_imageDataForKey:(id)a0;
- (id)p_infoDictionary;
- (void)p_loadImageMetrics;

@end
