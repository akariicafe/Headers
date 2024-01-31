@interface TSCHGridPartitioner : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (unsigned long long)gridKeyForSourcePoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 gridWidth:(unsigned long long)a1 gridHeight:(unsigned long long)a2;
- (id)initWithSourceSize:(struct CGSize { double x0; double x1; })a0 gridWidth:(unsigned long long)a1 gridHeight:(unsigned long long)a2;

@end
