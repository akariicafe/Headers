@class PKPaintAreaView, NSString, CIContext, PKController, NSMutableSet, NSMutableArray, NSObject;
@protocol MTLDevice, PKPaintSurface, OS_dispatch_queue, PKDrawingUUID;

@interface PKPaintAreaViewSurface : NSObject <PKControllerDelegate, PKMetalRendererControllerDelegate> {
    NSMutableArray *_textureSet;
    struct CGSize { double width; double height; } _pixelSize;
    struct CGPoint { double x; double y; } _oldEraseLocation;
    CIContext *_imageContext;
    id<MTLDevice> _device;
}

@property (nonatomic) BOOL isDrawing;
@property (readonly, nonatomic) BOOL waitingForStrokeToEnd;
@property (readonly, nonatomic) BOOL isErasingObjects;
@property (readonly, nonatomic) NSMutableArray *strokesToErase;
@property (readonly, nonatomic) NSMutableSet *strokeIDsToErase;
@property (readonly, nonatomic) PKController *drawingController;
@property (weak, nonatomic) PKPaintAreaView *paintAreaView;
@property (readonly, nonatomic) id<PKPaintSurface> surface;
@property (readonly, nonatomic) struct CGSize { double width; double height; } drawingSize;
@property (readonly, nonatomic) double textureScale;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } strokeTransform;
@property (readonly, nonatomic) BOOL isMipmapped;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) id<PKDrawingUUID> drawingUUID;
@property (nonatomic) struct CGPoint { double x; double y; } previousPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)CIImageFromTexture:(id)a0;
- (void)drawingChanged:(id)a0;
- (void)eraserCancelled;
- (void)eraseStrokesForPoint:(struct CGPoint { double x0; double x1; })a0 prevPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_didFinishErasingStrokes:(BOOL)a0;
- (void)_setupPKController;
- (void)dispatchSyncOnSurfaceQueue:(id /* block */)a0;
- (void)drawingBegan:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a0 activeInputProperties:(unsigned long long)a1 inputType:(long long)a2;
- (void)drawingCancelled;
- (void)drawingEndedWithDetectedShape:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)eraserBeganAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)eraserEnded;
- (void)eraserMovedToLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithPaintSurface:(id)a0 dispatchQueue:(id)a1 device:(id)a2;
- (void)metalRendererController:(id)a0 didCommitRenderingIntoTexture:(id)a1;
- (id)nextTextureTargetForMetalRendererController:(id)a0;
- (void)vsync:(double)a0;

@end
