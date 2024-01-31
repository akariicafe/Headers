@interface JFXMetadataValidator : NSObject

@property (nonatomic) long long faceDataDetectedFacesCount;
@property (nonatomic) unsigned long long lastARFrameHasFaceAnchors;
@property (nonatomic) unsigned long long lastARFrameIsFaceTracked;

- (id)init;
- (void)reset;
- (void)validateARImageData:(id)a0;
- (void)validateFaceTrackedARFrame:(id)a0;

@end
