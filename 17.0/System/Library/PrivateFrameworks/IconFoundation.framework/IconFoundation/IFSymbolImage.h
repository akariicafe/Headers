@class CUINamedVectorGlyph;

@interface IFSymbolImage : IFImage {
    struct CGImage { } *_internalCGImage;
    double _internalScale;
    struct CGSize { double width; double height; } _internalSize;
}

@property (retain) CUINamedVectorGlyph *vectorGlyph;
@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) unsigned long long symbolSize;
@property (readonly, nonatomic) long long symbolWeight;
@property (readonly, nonatomic) double referencePointSize;
@property (readonly, nonatomic) double fontMatchingScaleFactor;
@property (readonly, nonatomic) double baselineOffset;
@property (readonly, nonatomic) double capHeight;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } alignmentRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (readonly, nonatomic, getter=isFlippable) BOOL flippable;
@property (readonly, nonatomic) long long layoutDirection;

- (void)dealloc;
- (struct CGImage { } *)CGImage;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (void).cxx_destruct;
- (id)initWithNamedVectorGlyph:(id)a0;

@end
