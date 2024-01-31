@class OADStyleMatrixReference, OADFontReference;

@interface OADShapeStyle : NSObject <NSCopying> {
    OADStyleMatrixReference *mLineReference;
    OADStyleMatrixReference *mFillReference;
    OADStyleMatrixReference *mEffectReference;
    OADFontReference *mFontReference;
}

+ (id)defaultOfficeShapeStyle;
+ (id)defaultShapeStyle;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectReference;
- (void)applyToGraphicProperties:(id)a0 styleMatrix:(id)a1;
- (void)applyToGraphicProperties:(id)a0 styleMatrix:(id)a1 useNull:(BOOL)a2 strokeWidthMultiplier:(float)a3;
- (void)applyToParagraphProperties:(id)a0;
- (void)applyToTextBody:(id)a0;
- (void)applyToTextListStyle:(id)a0;
- (id)fillReference;
- (id)fontReference;
- (id)lineReference;
- (void)setEffectMatrixIndex:(unsigned int)a0 color:(id)a1;
- (void)setEffectReference:(id)a0;
- (void)setFillMatrixIndex:(unsigned int)a0 color:(id)a1;
- (void)setFillReference:(id)a0;
- (void)setFontReference:(id)a0;
- (void)setLineMatrixIndex:(unsigned int)a0 color:(id)a1;
- (void)setLineReference:(id)a0;

@end
