@class NSAttributedString;

@interface _MKLegendString : CALayer {
    struct __CTLine { } *_line;
}

@property (retain, nonatomic) NSAttributedString *string;
@property (readonly, nonatomic) double baselineDistanceFromBottom;

- (id)init;
- (void)dealloc;
- (void)sizeToFit;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (id)actionForKey:(id)a0;

@end
