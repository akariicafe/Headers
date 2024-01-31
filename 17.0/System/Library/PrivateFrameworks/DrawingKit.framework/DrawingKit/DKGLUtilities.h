@interface DKGLUtilities : NSObject

+ (void)initialize;
+ (id)pathForResource:(id)a0 ofType:(id)a1;
+ (void)_postGLActiveNotification;
+ (void)_postGLInactiveNotification;
+ (unsigned int)compileShader:(id)a0 ofType:(id)a1;
+ (void)createFBO:(unsigned int *)a0 depthRB:(unsigned int *)a1 texture:(unsigned int *)a2 width:(int)a3 height:(int)a4 format:(unsigned int)a5;
+ (id)createPlatformGLContext;
+ (void)createRepeatableTexture:(unsigned int *)a0 withImageName:(id)a1 ofType:(id)a2;
+ (id)createSharedGLContext;
+ (void)createSharedRepeatableTexture:(unsigned int *)a0 withImageName:(id)a1 ofType:(id)a2;
+ (void)createTexture:(unsigned int *)a0 withImageName:(id)a1 ofType:(id)a2;
+ (void)createVBO:(unsigned int *)a0 size:(long long)a1 data:(void *)a2 usage:(unsigned int)a3;
+ (void)deleteFBO:(unsigned int *)a0 depthRB:(unsigned int *)a1 texture:(unsigned int *)a2;
+ (void)deleteTexture:(unsigned int *)a0;
+ (void)deleteVBO:(unsigned int *)a0;
+ (void)drawQuadAtX:(float)a0 Y:(float)a1 width:(float)a2 height:(float)a3;
+ (BOOL)gpuAvailable;
+ (void)setCurrentClearColor;
+ (BOOL)setCurrentGLContext:(id)a0;
+ (void)setProjectionMatrixForWidth:(float)a0 height:(float)a1 flipped:(BOOL)a2 matrix:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a3;
+ (id)snapshotImageOfFrameBufferWithID:(unsigned int)a0 bufferSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2;
+ (void)teardownSharedGLContext;
+ (void)translateMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 byX:(float)a1 Y:(float)a2 result:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a3;

@end
