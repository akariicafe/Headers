@interface CAMView : NSObject

+ (void)animateIfNeededWithDuration:(double)a0 animations:(id /* block */)a1;
+ (void)animateIfNeededWithDuration:(double)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)animateIfNeededWithDuration:(double)a0 options:(unsigned long long)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)animateIfNeededWithDuration:(double)a0 usingSpringWithDamping:(double)a1 initialSpringVelocity:(double)a2 options:(unsigned long long)a3 animations:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)ceilBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 andRoundCenter:(struct CGPoint { double x0; double x1; } *)a1 toViewScale:(id)a2;
+ (void)convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCeiledBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 andRoundedCenter:(struct CGPoint { double x0; double x1; } *)a2 toViewScale:(id)a3;
+ (void)rotateView:(id)a0 toInterfaceOrientation:(long long)a1 animated:(BOOL)a2;
+ (void)setBorderColor:(id)a0 forView:(id)a1;
+ (void)setBorderColor:(id)a0 width:(double)a1 forView:(id)a2;
+ (void)setBorderForView:(id)a0;

@end
