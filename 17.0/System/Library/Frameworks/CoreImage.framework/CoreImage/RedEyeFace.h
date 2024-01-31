@class VNFaceLandmarks2D, NSArray, CIVector, CIImage, VNFaceObservation;

@interface RedEyeFace : NSObject

@property (nonatomic) int imageOrientation;
@property (nonatomic) float faceOrientation;
@property (nonatomic) float junkiness;
@property (nonatomic) float areaMax;
@property (retain, nonatomic) VNFaceObservation *observation;
@property (retain, nonatomic) VNFaceLandmarks2D *landmarks;
@property (retain, nonatomic) CIImage *segmentationSkin;
@property (retain, nonatomic) CIImage *segmentationSclera;
@property (retain, nonatomic) CIImage *segmentationIris;
@property (retain, nonatomic) NSArray *uvLeft;
@property (retain, nonatomic) NSArray *uvRight;
@property (retain, nonatomic) CIVector *faceRect;
@property (retain, nonatomic) CIVector *roiRenderOriginLeft;
@property (retain, nonatomic) CIVector *roiRenderOriginRight;
@property (retain, nonatomic) CIVector *roiRenderSize;
@property (retain, nonatomic) CIVector *pupilLeft;
@property (retain, nonatomic) CIVector *pupilRight;

- (id)init;
- (void)dealloc;

@end
