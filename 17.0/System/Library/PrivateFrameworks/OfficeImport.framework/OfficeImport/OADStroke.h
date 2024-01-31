@class OADLineJoin, OADLineEnd, OADFill, OADColor, OADDash;

@interface OADStroke : OADProperties <NSCopying> {
    OADColor *mColor;
    OADFill *mFill;
    OADDash *mDash;
    OADLineJoin *mJoin;
    float mWidth;
    unsigned char mCap;
    unsigned char mCompoundType;
    int mPenAlignment;
    unsigned char mIsColorOverridden : 1;
    unsigned char mIsWidthOverridden : 1;
    unsigned char mIsCapOverridden : 1;
    unsigned char mIsCompoundTypeOverridden : 1;
    unsigned char mIsPenAlignmentOverridden : 1;
}

@property (retain, nonatomic) OADLineEnd *head;
@property (retain, nonatomic) OADLineEnd *tail;

+ (id)defaultProperties;
+ (id)blackStroke;
+ (id)nullStroke;

- (void)setWidth:(float)a0;
- (void)setParent:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)color;
- (float)width;
- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fill;
- (unsigned char)compoundType;
- (void)setCompoundType:(unsigned char)a0;
- (id)join;
- (void)setFill:(id)a0;
- (unsigned char)cap;
- (void)setJoin:(id)a0;
- (void)setCap:(unsigned char)a0;
- (id)dash;
- (void)setDash:(id)a0;
- (BOOL)isCapOverridden;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isColorOverridden;
- (BOOL)isCompoundTypeOverridden;
- (BOOL)isDashOverridden;
- (BOOL)isFillOverridden;
- (BOOL)isHeadOverridden;
- (BOOL)isJoinOverridden;
- (BOOL)isPenAlignmentOverridden;
- (BOOL)isTailOverridden;
- (BOOL)isWidthOverridden;
- (int)penAlignment;
- (void)removeUnnecessaryOverrides;
- (void)setPenAlignment:(int)a0;
- (void)setStyleColor:(id)a0;

@end
