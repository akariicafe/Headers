@class PLManagedAsset;

@interface PLComputedAssetAttributes : PLManagedObject

@property (retain, nonatomic) PLManagedAsset *asset;
@property (nonatomic) float wellFramedSubjectScore;
@property (nonatomic) float wellChosenSubjectScore;
@property (nonatomic) float tastefullyBlurredScore;
@property (nonatomic) float sharplyFocusedSubjectScore;
@property (nonatomic) float wellTimedShotScore;
@property (nonatomic) float pleasantLightingScore;
@property (nonatomic) float pleasantReflectionsScore;
@property (nonatomic) float harmoniousColorScore;
@property (nonatomic) float livelyColorScore;
@property (nonatomic) float pleasantSymmetryScore;
@property (nonatomic) float pleasantPatternScore;
@property (nonatomic) float immersivenessScore;
@property (nonatomic) float pleasantPerspectiveScore;
@property (nonatomic) float pleasantPostProcessingScore;
@property (nonatomic) float noiseScore;
@property (nonatomic) float failureScore;
@property (nonatomic) float pleasantCompositionScore;
@property (nonatomic) float interestingSubjectScore;
@property (nonatomic) float intrusiveObjectPresenceScore;
@property (nonatomic) float pleasantCameraTiltScore;
@property (nonatomic) float lowLight;
@property (nonatomic) float behavioralScore;
@property (nonatomic) float interactionScore;

+ (id)entityName;
+ (id)fetchRequest;

- (void)setPropertiesFromImageAestheticsObservation:(id)a0;

@end
