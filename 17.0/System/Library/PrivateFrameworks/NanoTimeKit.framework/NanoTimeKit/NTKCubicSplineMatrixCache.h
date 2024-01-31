@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NTKCubicSplineMatrixCache : NSObject {
    NSMutableDictionary *_openMatrixCache;
    NSMutableDictionary *_closedMatrixCache;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (struct { double *x0; float *x1; int x2; } *)closedSplineMatrixWithDimension:(int)a0;
- (struct { double *x0; float *x1; int x2; } *)openSplineMatrixWithDimension:(int)a0;
- (struct { double *x0; float *x1; int x2; } *)splineMatrixWithDimension:(int)a0 cache:(id)a1 matrixGenerator:(id /* block */)a2;

@end
