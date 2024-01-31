@interface PXStoryTransitionFactory : NSObject

+ (id)panTransitionWithConfiguration:(id)a0;
+ (id)effectTransitionWithInfo:(struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })a0 entityManager:(id)a1;
+ (id)segmentTransitionWithInfo:(struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })a0 event:(long long)a1 clipLayouts:(id)a2;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })visibleOrderOutDurationForTransitionInfo:(struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })a0;
+ (id)wipeTransitionWithConfiguration:(id)a0;

@end
