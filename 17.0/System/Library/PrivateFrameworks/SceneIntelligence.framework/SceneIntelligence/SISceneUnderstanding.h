@interface SISceneUnderstanding : NSObject {
    void *_context;
    void *_plan;
    struct { void *plan; int network_index; } _network;
    struct networkparams_t { struct inputparams_t { struct { float bias_r; float bias_g; float bias_b; float scale; BOOL network_wants_bgr; } preprocessor; struct CGSize { double width; double height; } resolution; } input; struct outputparams_t { struct CGSize { double width; double height; } resolution; } output; struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } temp; } _parameters;
    struct networkvariables_t { struct outputvariables_t { struct _SITensorDim { unsigned long long value[4]; } labels; struct _SITensorDim { unsigned long long value[4]; } normals; struct _SITensorDim { unsigned long long value[4]; } propabilities; } output; } _variables;
}

@property (readonly, nonatomic) struct _SITensorDim { unsigned long long x0[4]; } labelTensorDimensions;
@property (readonly, nonatomic) struct _SITensorDim { unsigned long long x0[4]; } normalTensorDimensions;
@property (readonly, nonatomic) struct _SITensorDim { unsigned long long x0[4]; } probabilitiesTensorDimensions;

+ (struct CGSize { double x0; double x1; })inputResolution;

- (void)dealloc;
- (BOOL)initMLNetworkWithComputeEngine:(long long)a0;
- (long long)evaluateImage:(struct __CVBuffer { } *)a0 results:(id)a1;
- (id)initWithComputeEngine:(long long)a0;

@end
