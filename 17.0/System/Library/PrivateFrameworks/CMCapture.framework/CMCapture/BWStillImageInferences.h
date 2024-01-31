@class NSArray, NSDictionary;

@interface BWStillImageInferences : NSObject {
    NSDictionary *_smartCameraClassifications;
}

@property (readonly, nonatomic) struct __CVBuffer { } *skinMask;
@property (readonly, nonatomic) struct __CVBuffer { } *hairMask;
@property (readonly, nonatomic) struct __CVBuffer { } *skyMask;
@property (readonly, nonatomic) struct __CVBuffer { } *personMask;
@property (readonly, nonatomic) struct __CVBuffer { } *lowResPersonMask;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceMasks;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceConfidences;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceBoundingBoxes;
@property (readonly, nonatomic) NSArray *skinToneClassifications;
@property (readonly, nonatomic) NSArray *faceObservations;
@property (readonly, nonatomic) NSDictionary *inferenceAttachedMediaMetadata;

- (void)dealloc;
- (id)description;
- (void)addInference:(id)a0 inferenceAttachmentKey:(id)a1;
- (void)addInferenceAttachedMediaMetadata:(id)a0;
- (void)addInferenceBuffer:(struct __CVBuffer { } *)a0 inferenceAttachedMediaKey:(id)a1;
- (id)initWithSkinMask:(struct __CVBuffer { } *)a0 hairMask:(struct __CVBuffer { } *)a1 skyMask:(struct __CVBuffer { } *)a2 personMask:(struct __CVBuffer { } *)a3 lowResPersonMask:(struct __CVBuffer { } *)a4 lowResPersonInstanceMasks:(id)a5 lowResPersonInstanceConfidences:(id)a6 lowResPersonInstanceBoundingBoxes:(id)a7 skinToneClassifications:(id)a8 faceObservations:(id)a9 inferenceAttachedMediaMetadata:(id)a10;

@end
