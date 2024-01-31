@class NSString, VisionCoreTensorShape, VisionCoreTensorStrides;

@interface VisionCoreTensorDescriptor : VisionCoreDescriptor {
    VisionCoreTensorShape *_shape;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long dataType;
@property (readonly, nonatomic) VisionCoreTensorShape *shape;
@property (readonly, nonatomic) VisionCoreTensorStrides *strides;
@property (readonly, nonatomic) unsigned long long storageByteCount;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorForEspressoBlobDimensions:(struct { char *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })a0 dataType:(unsigned long long)a1 error:(id *)a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)getByteOffset:(unsigned long long *)a0 forPosition:(const unsigned long long *)a1 rank:(unsigned long long)a2 error:(id *)a3;
- (id)E5RTExecutionContextNewIOSurfacePropertiesAndReturnError:(id *)a0;
- (BOOL)E5RTExecutionContextAssignNewTensorInstanceToNamedObjects:(id)a0 error:(id *)a1;
- (id)confidencesDescriptorWithLabelsFileURL:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 dataType:(unsigned long long)a1 shape:(id)a2 strides:(id)a3;

@end
