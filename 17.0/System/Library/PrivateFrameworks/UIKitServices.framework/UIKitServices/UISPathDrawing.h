@class NSString;

@interface UISPathDrawing : NSObject <UISDrawing> {
    long long _type;
    struct CGPath { } *_path;
    struct CGSize { double width; double height; } _size;
    struct CGColor { } *_fillColor;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawingSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithRectSize:(struct CGSize { double x0; double x1; })a0 fillColor:(struct CGColor { } *)a1;
- (void)drawInContext:(struct CGContext { } *)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithEllipseSize:(struct CGSize { double x0; double x1; })a0 fillColor:(struct CGColor { } *)a1;
- (id)initWithPath:(struct CGPath { } *)a0 size:(struct CGSize { double x0; double x1; })a1 fillColor:(struct CGColor { } *)a2;
- (id)initWithRoundedRectSize:(struct CGSize { double x0; double x1; })a0 cornerRadii:(double[4])a1 fillColor:(struct CGColor { } *)a2;
- (id)initWithType:(long long)a0 path:(struct CGPath { } *)a1 size:(struct CGSize { double x0; double x1; })a2 fillColor:(struct CGColor { } *)a3;

@end
