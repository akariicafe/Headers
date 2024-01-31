@class NSString;

@interface RTVisitHyperParameter : NSObject

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned long long maxBurstNoiseLength;
@property (readonly, nonatomic) double maxHorizontalAccuracy;
@property (readonly, nonatomic) double maxNonFlankDistance;
@property (readonly, nonatomic) double minNoiseToLeftFlankDistance;
@property (readonly, nonatomic) double maxGapInVisit;
@property (readonly, nonatomic) unsigned long long smootherKernelWidth;
@property (readonly, nonatomic) unsigned long long timeIntervalBetweenSmoothedPoints;
@property (readonly, nonatomic) unsigned long long maxDistanceBetweenAdjacentPoints;
@property (readonly, nonatomic) double minSpeedToFilter;
@property (readonly, nonatomic) unsigned long long movingWindowSizeForSpeed;
@property (readonly, nonatomic) unsigned long long completeVisitMargin;
@property (readonly, nonatomic) double decoderEntryCost;
@property (readonly, nonatomic) double decoderExitCost;
@property (readonly, nonatomic) unsigned long long featureDimension;
@property (readonly, nonatomic) double featureDistanceMax;
@property (readonly, nonatomic) double featureDistanceMin;
@property (readonly, nonatomic) double featureDwellnessLogMax;
@property (readonly, nonatomic) double featureDwellnessLogMin;
@property (readonly, nonatomic) unsigned long long featurePaddingValue;
@property (readonly, nonatomic) double featureRadiusMax;
@property (readonly, nonatomic) double featureRadiusMin;
@property (readonly, nonatomic) unsigned long long maxSequenceLength;
@property (readonly, nonatomic) double minEntryProbability;
@property (readonly, nonatomic) double minExitProbability;
@property (readonly, nonatomic) unsigned long long minInferenceInterval;
@property (readonly, nonatomic) double minNoVisitProbability;
@property (readonly, nonatomic) unsigned long long minSequenceLength;
@property (readonly, nonatomic) unsigned long long noVisitMargin;
@property (readonly, nonatomic) unsigned long long numOfSlide;
@property (readonly, nonatomic) unsigned long long numOfTimeStepForDistance;
@property (readonly, nonatomic) unsigned long long numOfTimeStepForDwellness;
@property (readonly, nonatomic) unsigned long long numOfTimeStepForRadius;
@property (readonly, nonatomic) unsigned long long numTargetClass;
@property (readonly, nonatomic) unsigned long long onDeviceInferenceBatchSize;
@property (readonly, nonatomic) unsigned long long partialVisitMargin;
@property (readonly, nonatomic) unsigned long long referenceSize;
@property (readonly, nonatomic) unsigned long long stride;
@property (readonly, nonatomic) unsigned long long timeStepInterval;
@property (readonly, nonatomic) unsigned long long visitInferenceResolution;
@property (readonly, nonatomic) unsigned long long windowInterval;
@property (readonly, nonatomic) unsigned long long windowSize;
@property (readonly, nonatomic) unsigned long long binSize;
@property (readonly, nonatomic) unsigned long long maxNumOfBins;

- (void).cxx_destruct;

@end
