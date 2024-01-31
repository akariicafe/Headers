@class OADColor, OADFontReference;

@interface OADTableTextStyle : NSObject {
    OADFontReference *mFontReference;
    OADColor *mColor;
    int mBold;
    int mItalic;
}

+ (id)defaultStyle;
+ (id)defaultColor;
+ (int)defaultBold;
+ (id)defaultFontReference;
+ (int)defaultItalic;

- (id)init;
- (id)color;
- (id)description;
- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (int)bold;
- (void)setBold:(int)a0;
- (id)shallowCopy;
- (int)italic;
- (void)setItalic:(int)a0;
- (void)applyOverridesFrom:(id)a0;
- (id)fontReference;
- (void)setFontReference:(id)a0;

@end
