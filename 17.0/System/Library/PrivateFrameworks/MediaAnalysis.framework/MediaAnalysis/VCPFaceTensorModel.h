@interface VCPFaceTensorModel : NSObject {
    int _numBlendshapePlusOne;
    int _numComponents;
    int _numIdentities;
    float *_transformedCoeff;
    float *_blendShapeDelta;
}

@property (readonly) int numVertices;
@property (readonly) float *meanBlendshape;
@property (readonly) float *tensorCoeff;
@property (readonly) float *componentsBlendshape;
@property (readonly) int *blendshapeComponentIndex;

- (void)dealloc;
- (void)calculateMesh:(float *)a0 numVertices:(int)a1 blendshapes:(float *)a2 outputMesh:(float *)a3;
- (void)calculateModelBlendshapes:(float *)a0 outputBlendshapes:(float *)a1;
- (id)initWithModelFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;

@end
