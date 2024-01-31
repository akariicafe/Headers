@class NSString;

@interface UISVectorGlyphDrawing : NSObject <UISDrawing> {
    struct CGImage { } *_image;
    struct CGColor { } *_tintColor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _alignmentRect;
    struct CGSize { double width; double height; } _size;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRect;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawingSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithVectorGlyph:(id)a0 tintColor:(struct CGColor { } *)a1;

@end
