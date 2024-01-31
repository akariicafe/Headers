@class ABPKResultRegistration;

@interface ABPKCameraRegistration : NSObject {
    double _tot_avg_err;
    struct BodyRegistration { struct BodyRegistrationInfo { int status; struct CameraPoseInfo { struct Matrix<double, 3U, 3U, false> { double m_data[9]; } camera_matrix; struct SE3GroupStorage<double, cva::Matrix<double, 4, 4>> { double m_data[16]; } transform; struct { void /* unknown type, empty encoding */ columns[4]; } pose; } camera_from_body; struct Correspondences2d3d { struct vector<cva::Matrix<double, 2, 1>, std::allocator<cva::Matrix<double, 2, 1>>> { void *__begin_; void *__end_; struct __compressed_pair<cva::Matrix<double, 2, 1> *, std::allocator<cva::Matrix<double, 2, 1>>> { void *__value_; } __end_cap_; } image_points; struct vector<cva::Matrix<double, 3, 1>, std::allocator<cva::Matrix<double, 3, 1>>> { void *__begin_; void *__end_; struct __compressed_pair<cva::Matrix<double, 3, 1> *, std::allocator<cva::Matrix<double, 3, 1>>> { void *__value_; } __end_cap_; } model_points; } correspondences; } m_last_result; } _body_registration;
    ABPKResultRegistration *_regResult;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _imagePoints;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _v3d_body;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _v3d_cam;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)estimateCameraPoseFromMatchingwithImageIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 imageResolution:(struct CGSize { double x0; double x1; })a1 joints2d:(const void *)a2 jointsLifted3D:(const void *)a3 jointsLifted3DCount:(unsigned long long)a4;
- (void)_endRunCameraRegistrationSignpost;
- (void)_startRunCameraRegistrationSignpost;
- (id)runCameraRegistrationWithImageIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 imageResolution:(struct CGSize { double x0; double x1; })a1 liftingResult:(id)a2;

@end
