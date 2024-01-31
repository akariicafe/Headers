@interface CMCameraFitnessMachineSample : NSObject

@property (nonatomic) double localMachtime;
@property (nonatomic) double globalMachtime;
@property (nonatomic) double elapsedTime;
@property (nonatomic) float energy;
@property (nonatomic) float treadmillDistance;
@property (nonatomic) float indoorBikeDistance;
@property (nonatomic) float crossTrainerDistance;
@property (nonatomic) int floors;
@property (nonatomic) int stepCount;
@property (nonatomic) float strideCount;
@property (nonatomic) float instantaneousSpeed;
@property (nonatomic) float averageSpeed;
@property (nonatomic) float instantaneousPace;
@property (nonatomic) float averagePace;
@property (nonatomic) float elevationGain;
@property (nonatomic) float inclination;
@property (nonatomic) float resistanceLevel;
@property (nonatomic) float instantaneousPower;
@property (nonatomic) float averagePower;
@property (nonatomic) float instantaneousCadence;
@property (nonatomic) float averageCadence;
@property (nonatomic) float instantaneousHeartRate;
@property (nonatomic) float averageHeartRate;

@end
