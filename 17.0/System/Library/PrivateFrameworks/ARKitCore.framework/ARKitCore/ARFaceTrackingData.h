@class NSUUID, NSDictionary, NSString, NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface ARFaceTrackingData : NSObject <ARFaceTrackingDataProtocol> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _meshVertices;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _verticesImageSpace;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _normals;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _blendShapeCoefficients;
    struct { void /* unknown type, empty encoding */ columns[4]; } _transform;
    NSObject<OS_dispatch_semaphore> *_normalsSemaphore;
    NSObject<OS_dispatch_semaphore> *_imageVerticesSemaphore;
    NSUUID *_anchorIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } leftEyeTransform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } rightEyeTransform;
@property (nonatomic) void /* unknown type, empty encoding */ gazePoint;
@property (retain, nonatomic) NSDictionary *trackingData;
@property (readonly, nonatomic) NSError *trackingError;
@property (readonly, nonatomic) float tongueOut;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transform;
@property (readonly, nonatomic) unsigned long long vertexCount;
@property (readonly, nonatomic) const void *vertices;
@property (readonly, nonatomic) const void *imageVertices;
@property (readonly, nonatomic) unsigned long long normalCount;
@property (readonly, nonatomic) const void *normals;
@property (readonly, nonatomic) unsigned long long blendShapeCoefficientsCount;
@property (readonly, nonatomic) const float *blendShapeCoefficients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedNeutralGeometry;

- (id)initPrivate;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_extractMetaDataAndTransformToMirrored:(BOOL)a0;
- (id)initWithTrackingData:(id)a0 anchorIdentifier:(id)a1;
- (id)initWithTrackingData:(id)a0 transformToMirrored:(BOOL)a1 anchorIdentifier:(id)a2;

@end
