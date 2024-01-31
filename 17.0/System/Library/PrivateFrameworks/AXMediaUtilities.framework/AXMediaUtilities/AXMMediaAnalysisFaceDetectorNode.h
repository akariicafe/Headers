@class AXMVisionFaceNameHelper;

@interface AXMMediaAnalysisFaceDetectorNode : AXMEvaluationNode

@property (retain, nonatomic) AXMVisionFaceNameHelper *_faceNameHelper;

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_addFaceDetectionFeaturesToContext:(id)a0 fromResults:(id)a1;
- (id)_faceResultForUUID:(id)a0 inFaceDictionary:(id)a1;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)requiresVisionFramework;

@end
