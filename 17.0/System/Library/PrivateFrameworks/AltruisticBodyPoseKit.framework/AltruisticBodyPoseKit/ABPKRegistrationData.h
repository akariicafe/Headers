@interface ABPKRegistrationData : NSObject {
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _imagePointsVector;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _jointsLifted3DVector;
}

@property (readonly, nonatomic) const void *imagePoints;
@property (readonly, nonatomic) unsigned long long imagePointsCount;
@property (readonly, nonatomic) const void *jointsLifted3D;
@property (readonly, nonatomic) unsigned long long jointsLifted3DCount;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageDimensions;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraFromBodyPose;
@property (readonly, nonatomic) BOOL registrationValid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithImagePoints:(const void *)a0 imagePointsCount:(unsigned long long)a1 jointsLifted3D:(const void *)a2 jointsLifted3DCount:(unsigned long long)a3 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a4 imageDimensions:(struct CGSize { double x0; double x1; })a5 cameraFromBodyPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a6 registrationValid:(BOOL)a7;

@end
