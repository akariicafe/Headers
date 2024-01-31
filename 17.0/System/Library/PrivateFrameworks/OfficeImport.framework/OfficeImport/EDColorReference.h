@class EDResources;

@interface EDColorReference : NSObject <NSCopying> {
    EDResources *mResources;
    int mSystemColorID;
    unsigned long long mColorIndex;
    unsigned long long mThemeIndex;
    double mTint;
}

+ (id)colorReferenceWithColor:(id)a0 resources:(id)a1;
+ (id)colorReferenceWithColorIndex:(unsigned long long)a0 resources:(id)a1;
+ (id)colorReferenceWithResources:(id)a0;
+ (id)colorReferenceWithSystemColorID:(int)a0 resources:(id)a1;
+ (id)colorReferenceWithThemeIndex:(unsigned long long)a0 tint:(double)a1 resources:(id)a2;

- (unsigned long long)themeIndex;
- (unsigned long long)hash;
- (id)color;
- (double)tint;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResources:(id)a0;
- (unsigned long long)colorIndex;
- (id)initWithColor:(id)a0 resources:(id)a1;
- (BOOL)isEqualToColorReference:(id)a0;
- (int)systemColorID;

@end
