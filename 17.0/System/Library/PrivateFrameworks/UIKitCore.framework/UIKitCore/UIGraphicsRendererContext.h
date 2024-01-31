@class UIGraphicsRendererFormat;

@interface UIGraphicsRendererContext : NSObject {
    struct CGContext { } *_backingContext;
}

@property (nonatomic) BOOL __createsImages;
@property (readonly, nonatomic) struct CGContext { } *CGContext;
@property (readonly, nonatomic) UIGraphicsRendererFormat *format;

- (void)dealloc;
- (void)clipToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCGContext:(struct CGContext { } *)a0 format:(id)a1;
- (void)fillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blendMode:(int)a1;
- (void)strokeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)strokeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blendMode:(int)a1;
- (void)fillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
