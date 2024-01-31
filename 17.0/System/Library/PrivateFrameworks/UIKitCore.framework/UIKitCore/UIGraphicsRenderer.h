@class UIGraphicsRendererFormat, _UIReusePool;

@interface UIGraphicsRenderer : NSObject {
    _UIReusePool *_reusePool;
}

@property (readonly, nonatomic) UIGraphicsRendererFormat *format;
@property (readonly, nonatomic) BOOL allowsImageOutput;

+ (Class)rendererContextClass;
+ (void)prepareCGContext:(struct CGContext { } *)a0 withRendererContext:(id)a1;
+ (struct CGContext { } *)contextWithFormat:(id)a0;
+ (void)_destroyCGContext:(struct CGContext { } *)a0 withRenderer:(id)a1;
+ (struct CGContext { } *)_contextWithFormat:(id)a0 renderer:(id)a1;
+ (BOOL)_supportsContextReuse;

- (id)init;
- (BOOL)runDrawingActions:(id /* block */)a0 completionActions:(id /* block */)a1 format:(id)a2 error:(id *)a3;
- (struct CGContext { } *)_dequeueContextForReuse;
- (void)popContext:(id)a0;
- (BOOL)runDrawingActions:(id /* block */)a0 completionActions:(id /* block */)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(id)a1;
- (id)initWithFormat:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_configureReuseState;
- (void)pushContext:(id)a0;
- (void)_prepareContextForReuse:(struct CGContext { } *)a0;
- (void)_enqueueContextForReuse:(struct CGContext { } *)a0;

@end
