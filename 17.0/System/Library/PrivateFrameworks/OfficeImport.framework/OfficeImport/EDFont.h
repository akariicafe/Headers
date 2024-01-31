@class NSString, EDResources, EDColorReference;

@interface EDFont : NSObject <NSCopying, EDImmutableObject> {
    EDResources *mResources;
    NSString *mName;
    EDColorReference *mColorReference;
    int mUnderline;
    int mScript;
    double mHeightInTwips;
    int mCharSet;
    int mFamily;
    unsigned int mWeight;
    BOOL mBold;
    BOOL mItalic;
    BOOL mShadow;
    BOOL mStrike;
    BOOL mOutline;
    BOOL mUnderlineOverridden;
    BOOL mStrikeOverridden;
    BOOL mBoldOverridden;
    BOOL mWeightOverridden;
    BOOL mItalicOverridden;
    BOOL mHeightOverridden;
    BOOL mNameOverridden;
    BOOL mDoNotModify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fontWithResources:(id)a0;

- (BOOL)isShadow;
- (void)setWeight:(unsigned int)a0;
- (unsigned int)weight;
- (id)color;
- (double)height;
- (void)setName:(id)a0;
- (void)setHeight:(double)a0;
- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isBold;
- (id)name;
- (int)family;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFamily:(int)a0;
- (int)script;
- (void)setOutline:(BOOL)a0;
- (void)setScript:(int)a0;
- (void)setShadow:(BOOL)a0;
- (id)initWithResources:(id)a0;
- (void)setBold:(BOOL)a0;
- (void)setUnderline:(int)a0;
- (int)underline;
- (void)setItalic:(BOOL)a0;
- (int)charSet;
- (void)setDoNotModify:(BOOL)a0;
- (id)colorReference;
- (BOOL)isBoldOverridden;
- (BOOL)isEqualToFont:(id)a0;
- (BOOL)isHeightOverridden;
- (BOOL)isItalic;
- (BOOL)isItalicOverridden;
- (BOOL)isNameOverridden;
- (BOOL)isOutline;
- (BOOL)isStrike;
- (BOOL)isStrikeOverridden;
- (BOOL)isUnderlineOverridden;
- (BOOL)isWeightOverridden;
- (void)setCharSet:(int)a0;
- (void)setColorReference:(id)a0;
- (void)setStrike:(BOOL)a0;

@end
