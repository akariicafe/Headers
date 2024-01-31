@interface PKRoundedPath : NSObject

@property (readonly) struct CGPath { } *CGPath;

+ (id)pathWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;

- (id)init;
- (void)dealloc;
- (void)addContinuousCornerToPath:(struct CGPath { } *)a0 trueCorner:(struct CGPoint { double x0; double x1; })a1 cornerRadius:(struct CGSize { double x0; double x1; })a2 corners:(unsigned long long)a3 portion:(unsigned long long)a4 clockwise:(BOOL)a5 fullRadius:(BOOL)a6;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRoundedCorners:(int)a1 cornerRadii:(id)a2 smoothPillShapes:(BOOL)a3;

@end
