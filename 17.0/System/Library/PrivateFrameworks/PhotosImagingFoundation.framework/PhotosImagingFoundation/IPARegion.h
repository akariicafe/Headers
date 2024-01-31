@interface IPARegion : NSObject <NSCopying, NSMutableCopying> {
    void *_imp;
}

+ (id)region;
+ (id)regionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)regionWithRegion:(id)a0;
+ (id)regionWithRectArray:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (unsigned long long)count;
- (id)description;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (double)area;
- (BOOL)intersectsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithRegion:(id)a0;
- (BOOL)intersectsRegion:(id)a0;
- (BOOL)includesRegion:(id)a0;
- (void)enumerateRects:(id /* block */)a0;
- (id)regionByClippingToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)regionByFlippingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)regionByRemovingRegion:(id)a0;
- (id)regionByShrinkingBy:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)includesRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEqualToRegion:(id)a0;
- (id)regionByAddingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)regionByAddingRegion:(id)a0;
- (id)regionByApplyingOrientation:(long long)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)regionByClippingToRegion:(id)a0;
- (id)regionByExcludingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)regionByExcludingRegion:(id)a0;
- (id)regionByGrowingBy:(struct CGPoint { double x0; double x1; })a0;
- (id)regionByGrowingBy:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)regionByRemovingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)regionByShrinkingBy:(struct CGPoint { double x0; double x1; })a0;
- (id)regionByTranslatingBy:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithRectArray:(id)a0;
- (id)regionByAddingRectArray:(id)a0;
- (id)regionByApplyingAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)regionByClippingToRectArray:(id)a0;
- (id)regionByRemovingRectArray:(id)a0;
- (id)regionByRoundingDown;
- (id)regionByRoundingUp;
- (id)regionByScalingBy:(struct CGPoint { double x0; double x1; })a0;

@end
