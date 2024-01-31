@interface TSWPAdornments : NSObject {
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _charIndexes;
    struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } _glyphs;
    struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } _flippedGlyphs;
    struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *__begin_; struct CGPoint *__end_; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *__value_; } __end_cap_; } _positions;
    struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *__begin_; struct CGPoint *__end_; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *__value_; } __end_cap_; } _flippedPositions;
    struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } _rects;
    struct vector<TSWPAttachmentPosition, std::allocator<TSWPAttachmentPosition>> { struct *__begin_; struct *__end_; struct __compressed_pair<TSWPAttachmentPosition *, std::allocator<TSWPAttachmentPosition>> { struct *__value_; } __end_cap_; } _attachmentPositions;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned long long charIndexCount;
@property (readonly, nonatomic) unsigned long long *charIndexes;
@property (readonly, nonatomic) unsigned long long glyphCount;
@property (readonly, nonatomic) unsigned short *glyphs;
@property (readonly, nonatomic) unsigned long long positionCount;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } *positions;
@property (readonly, nonatomic) unsigned long long flippedGlyphCount;
@property (readonly, nonatomic) unsigned short *flippedGlyphs;
@property (readonly, nonatomic) unsigned long long flippedPositionCount;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } *flippedPositions;
@property (readonly, nonatomic) unsigned long long rectCount;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *rects;
@property (readonly, nonatomic) unsigned long long attachmentPositionCount;
@property (readonly, nonatomic) struct { unsigned long long x0; double x1; } *attachmentPositions;
@property (readonly, nonatomic) double ascent;
@property (readonly, nonatomic) double descent;
@property (readonly, nonatomic) double advance;
@property (retain, nonatomic) struct CGColor { } *color;
@property (retain, nonatomic) struct __CTFont { } *font;
@property (retain, nonatomic) struct __CTFont { } *flippedFont;
@property (nonatomic) int location;
@property (nonatomic) double verticalAdjustment;
@property (nonatomic) struct CGPoint { double x; double y; } textPosition;
@property (nonatomic) BOOL shouldRotate;
@property (readonly, nonatomic) BOOL isEmpty;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAdornmentWithAttachmentPosition:(struct { unsigned long long x0; double x1; })a0;
- (void)addAdornmentWithCharIndex:(unsigned long long)a0 point:(struct CGPoint { double x0; double x1; })a1 glyph:(unsigned short)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)addAdornmentWithPoint:(struct CGPoint { double x0; double x1; })a0 glyph:(unsigned short)a1 flipped:(BOOL)a2;
- (void)incrementCharIndexes:(long long)a0 startingAt:(unsigned long long)a1;
- (id)initWithType:(int)a0 color:(struct CGColor { } *)a1 font:(struct __CTFont { } *)a2 flippedFont:(struct __CTFont { } *)a3;
- (void)removeAdornmentAt:(unsigned long long)a0;
- (void)setAscent:(double)a0 descent:(double)a1 advance:(double)a2;

@end
