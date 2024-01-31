@class CIVector, NSDictionary, CIImage, NSNumber;

@interface CIFaceMaskDelta : CIFilter

@property (retain, nonatomic) CIVector *inputImageSize;
@property (retain, nonatomic) CIImage *inputParameterImage;
@property (copy, nonatomic) CIVector *inputFacesCenterX;
@property (copy, nonatomic) CIVector *inputFacesCenterY;
@property (copy, nonatomic) CIVector *inputFacesChinX;
@property (copy, nonatomic) CIVector *inputFacesChinY;
@property (copy, nonatomic) CIVector *inputFacesLeftEyeX;
@property (copy, nonatomic) CIVector *inputFacesLeftEyeY;
@property (copy, nonatomic) CIVector *inputFacesRightEyeX;
@property (copy, nonatomic) CIVector *inputFacesRightEyeY;
@property (copy, nonatomic) CIVector *inputK0;
@property (copy, nonatomic) CIVector *inputK1;
@property (copy, nonatomic) CIVector *inputK2;
@property (copy, nonatomic) CIVector *inputK3;
@property (copy, nonatomic) NSNumber *inputDistanceAdd;
@property (copy, nonatomic) NSNumber *inputAdditiveMaxBlur;
@property (copy, nonatomic) NSNumber *inputSubtractiveMaxBlur;
@property (copy, nonatomic) NSNumber *inputApertureScaling;
@property (copy, nonatomic) NSNumber *inputMaxBlur;
@property (copy, nonatomic) NSNumber *inputSubjectDistanceMinimumFocusDistance;
@property (copy, nonatomic) NSNumber *inputSubjectDistanceMaximumFocusDistance;
@property (copy, nonatomic) NSNumber *inputSubjectDistanceScalingFactor;
@property (copy, nonatomic) NSNumber *inputSubjectDistanceOffset;
@property (copy, nonatomic) CIVector *inputFocusRect;
@property (copy, nonatomic) NSDictionary *inputTuningParameters;

- (id)outputImage;
- (BOOL)_isValidFace:(unsigned int)a0;
- (double)_landmarksToDist:(unsigned int)a0 minimumDistance:(float)a1 maximumDistance:(float)a2 scalingFactor:(float)a3 offset:(float)a4;
- (float)distanceToAdd;
- (unsigned int)findMostProminentFace;

@end
