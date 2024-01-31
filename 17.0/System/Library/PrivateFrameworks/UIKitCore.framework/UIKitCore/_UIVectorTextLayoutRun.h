@class NSString, NSAttributedString, _UIVectorTextLayoutInfo;

@interface _UIVectorTextLayoutRun : NSObject <_UIVectorTextLayoutRun> {
    unsigned long long _glyphCount;
    NSAttributedString *_sourceString;
    _UIVectorTextLayoutInfo *_layoutInfo;
}

@property (readonly, nonatomic) struct __CTRun { } *_CTRun;
@property (nonatomic) double baseline;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lineRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } usedLineRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } usedRunRect;
@property (readonly, nonatomic) unsigned long long lineIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (long long)glyphCount;
- (id)font;
- (void)renderInContext:(struct CGContext { } *)a0;
- (id)string;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })stringRange;
- (void).cxx_destruct;
- (void)_enumerateGlyphsUsingBlock:(id /* block */)a0;
- (void)enumerateGlyphsUsingBlock:(id /* block */)a0;
- (id)initWithCTRun:(struct __CTRun { } *)a0 lineIndex:(unsigned long long)a1 layoutInfo:(id)a2;
- (BOOL)shouldRender;

@end
