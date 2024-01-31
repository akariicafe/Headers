@class UIFont;

@interface _UIFieldEditorLayoutManager : NSLayoutManager {
    UIFont *_fontForExtraBulletRendering;
}

- (void).cxx_destruct;
- (void)resetFontForExtraBulletRendering;
- (void)useFontForExtraBulletRendering:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingBoxForBulletAtCharIndex:(long long)a0 inUnobscuredRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_completeBulletRenderingForTextContainer:(id)a0;
- (long long)_generateBulletGlyphs:(const unsigned short *)a0 properties:(const long long *)a1 characterIndexes:(const unsigned long long *)a2 font:(id)a3 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 unobscuredRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;
- (void)showCGGlyphs:(const unsigned short *)a0 positions:(const struct CGPoint { double x0; double x1; } *)a1 count:(long long)a2 font:(id)a3 textMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 attributes:(id)a5 inContext:(struct CGContext { } *)a6;

@end
