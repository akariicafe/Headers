@class VNDisallowedList;

@interface VNCoreSceneUnderstandingDetectorRecognizeObjectsConfiguration : VNCoreSceneUnderstandingDetectorFeatureConfiguration

@property (copy, nonatomic) VNDisallowedList *disallowedList;
@property (nonatomic) float minimumDetectionConfidence;
@property (nonatomic) float nonMaximumSuppressionThreshold;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObservationsRecipient:(id)a0;

@end
