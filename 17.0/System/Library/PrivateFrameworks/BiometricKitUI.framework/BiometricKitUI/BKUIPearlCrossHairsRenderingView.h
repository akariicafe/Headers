@class NSObject, MTLSPathBufferData, BKUIPearlCrossHairsManager, MTLSAnimatablePathCollection, MTLSplineRenderer;
@protocol MTLCommandQueue, OS_dispatch_semaphore;

@interface BKUIPearlCrossHairsRenderingView : MTKView {
    NSObject<OS_dispatch_semaphore> *_inFlightSemaphore;
    id<MTLCommandQueue> _commandQueue;
    double _time;
    float _pathBlend;
    float _pathBlendDest;
}

@property (nonatomic) unsigned long long state;
@property void /* unknown type, empty encoding */ axis;
@property (retain) MTLSAnimatablePathCollection *crosshairsPathCollection;
@property (retain) BKUIPearlCrossHairsManager *crosshairsInstanceManager;
@property (retain) MTLSPathBufferData *crosshairsData;
@property (retain) MTLSAnimatablePathCollection *checkMarkPathCollection;
@property (retain) MTLSPathBufferData *checkMarkData;
@property (retain) MTLSplineRenderer *renderer;
@property (nonatomic) BOOL grayscale;

- (void)setSampleCount:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1;
- (unsigned long long)getState;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setAxis:(SEL)a0 animated:(BOOL)a1;

@end
