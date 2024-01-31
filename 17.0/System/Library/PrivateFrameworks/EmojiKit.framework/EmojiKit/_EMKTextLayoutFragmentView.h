@class EMKGlyphRippler, NSTextLayoutFragment;

@interface _EMKTextLayoutFragmentView : UIView

@property (retain, nonatomic) NSTextLayoutFragment *layoutFragment;
@property (retain, nonatomic) EMKGlyphRippler *rippler;
@property (nonatomic) unsigned long long timeIndex;
@property (nonatomic) unsigned long long animatingGlyphCount;
@property (nonatomic) unsigned long long animatingGlyphCountBeforeFragment;

- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)__drawAnimatingEmojiRun:(struct __CTRun { } *)a0 textPosition:(struct CGPoint { double x0; double x1; })a1 animatingGlyphCountBefore:(long long)a2 drawnRunGlyphCount:(long long *)a3;
- (void)___drawAnimatingEmojiGlyph:(unsigned short)a0 textPosition:(struct CGPoint { double x0; double x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 font:(struct __CTFont { } *)a3 attributes:(id)a4;
- (void)_drawTextLineFragment:(id)a0 animatingGlyphCountBefore:(long long)a1 drawnGlyphCount:(long long *)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutFragment:(id)a1;
- (void)startAnimationWithRippler:(id)a0 animatingGlyphCount:(unsigned long long)a1 animatingGlyphCountBefore:(unsigned long long)a2;
- (void)updateWithTimeIndex:(unsigned long long)a0;

@end
