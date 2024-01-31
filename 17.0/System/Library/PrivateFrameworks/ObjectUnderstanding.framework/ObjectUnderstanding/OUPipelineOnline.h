@class NSMutableDictionary, NSArray, OUObjectAsset, _OUFrame, OUPointCloud, OU3DObjectDetector;
@protocol OUCamera;

@interface OUPipelineOnline : NSObject {
    OUObjectAsset *objectAsset_;
    BOOL enable_3dor_;
    id<OUCamera> camera_;
    _OUFrame *arframe_;
    struct float4x4 { void /* unknown type, empty encoding */ columns[4]; } cameraPose_;
    struct float4x4 { void /* unknown type, empty encoding */ columns[4]; } sceneUnderstandingPose_;
    NSMutableDictionary *accumulatedPointCloud_;
    OUPointCloud *arframePointCloud_;
    int num_pre_key_frames_;
    int num_cur_key_frames_;
    float depth_confidence_threshold_;
    NSArray *allObjects;
    OU3DObjectDetector *ou3dod_;
    struct unique_ptr<ou3dor::OU3DObjectRepresentation, std::default_delete<ou3dor::OU3DObjectRepresentation>> { struct __compressed_pair<ou3dor::OU3DObjectRepresentation *, std::default_delete<ou3dor::OU3DObjectRepresentation>> { struct OU3DObjectRepresentation *__value_; } __ptr_; } ou3dor_;
    BOOL write_debug_output_;
    struct unique_ptr<utils::OUFrameWriter, std::default_delete<utils::OUFrameWriter>> { struct __compressed_pair<utils::OUFrameWriter *, std::default_delete<utils::OUFrameWriter>> { struct OUFrameWriter *__value_; } __ptr_; } frame_writer_;
}

- (void)clear;
- (id)init;
- (id)initWithConfig:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)CommonInit;
- (id)getObjectAsset;
- (void)getPointCloudFromOUFrame:(id)a0 scenUnderstandingPose:(struct float4x4 { void /* unknown type, empty encoding */ x0[4]; })a1;
- (BOOL)updateCameraWithValid:(id)a0 ouframe:(id)a1;
- (void)updateObjectAsset;
- (id)updatePipelineWithKeyframes:(id)a0 currentCameraPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)updatePipelineWithKeyframes:(id)a0 ouframe:(id)a1;
- (BOOL)updateWorldPCWithKeyframes:(id)a0;

@end
