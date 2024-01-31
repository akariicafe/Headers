@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}

+ (id)autoBackgroundColor;
+ (id)autoForegroundColor;
+ (id)nilShading;

- (void)setForeground:(id)a0;
- (id)foreground;
- (id)init;
- (unsigned long long)hash;
- (id)background;
- (void)setBackground:(id)a0;
- (id)description;
- (void)setStyle:(int)a0;
- (void).cxx_destruct;
- (int)style;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToShading:(id)a0;
- (void)setShading:(id)a0;

@end
