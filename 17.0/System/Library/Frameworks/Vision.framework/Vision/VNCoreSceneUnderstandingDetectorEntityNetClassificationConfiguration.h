@class VNDisallowedList;

@interface VNCoreSceneUnderstandingDetectorEntityNetClassificationConfiguration : VNCoreSceneUnderstandingDetectorFeatureConfiguration

@property (retain) VNDisallowedList *disallowedList;
@property float minimumConfidence;
@property unsigned long long maximumClassifications;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObservationsRecipient:(id)a0;

@end
