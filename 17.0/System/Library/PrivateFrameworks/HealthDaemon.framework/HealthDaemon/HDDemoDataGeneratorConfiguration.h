@interface HDDemoDataGeneratorConfiguration : NSObject

@property (nonatomic) long long profileType;
@property (nonatomic) long long generationPeriodInDays;
@property (nonatomic) BOOL highFidelityGeneration;
@property (nonatomic) BOOL shouldPresentNotifications;
@property (nonatomic) long long biologicalSex;
@property (nonatomic) long long sampleTrackingType;
@property (nonatomic) long long nutritionTrackingType;
@property (nonatomic) long long resultsTrackingType;
@property (nonatomic) BOOL shouldGenerateHealthDocuments;
@property (nonatomic) BOOL shouldGenerateMedicalID;
@property (nonatomic) BOOL shouldEnsureRecentWorkoutHasRoute;
@property (nonatomic) BOOL shouldGenerateRecentLiquidsIntake;
@property (nonatomic) BOOL shouldGenerateLoudHeadphoneData;

+ (id)configurationFromDefaults:(id)a0;

- (id)init;
- (void)configureForProfileType:(long long)a0;
- (void)persistToDefaults:(id)a0;

@end
