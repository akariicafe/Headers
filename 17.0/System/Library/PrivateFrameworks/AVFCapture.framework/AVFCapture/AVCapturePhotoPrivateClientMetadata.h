@class NSString, NSDictionary;

@interface AVCapturePhotoPrivateClientMetadata : NSObject <NSSecureCoding> {
    NSDictionary *_inferenceAttachments;
    NSDictionary *_detectedObjectInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *captureFolderClientPath;
@property (readonly) NSDictionary *inferenceAttachments;
@property (readonly) NSDictionary *detectedObjectInfo;
@property (readonly) unsigned int spatialOverCaptureImageStitchingConfidenceScore;
@property (readonly) BOOL spatialOverCaptureImageHorizonLinePresent;
@property (readonly) float spatialOverCaptureImageHorizonLineAngleInDegrees;
@property (readonly) float spatialOverCaptureImageHorizonLineVerticalCenterlineIntersection;

- (id)initWithMetadataDictionary:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
