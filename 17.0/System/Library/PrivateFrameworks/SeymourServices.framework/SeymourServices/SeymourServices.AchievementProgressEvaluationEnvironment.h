@class NSString;

@interface SeymourServices.AchievementProgressEvaluationEnvironment : NSObject {
    void /* unknown type, empty encoding */ achievementDataStore;
    void /* unknown type, empty encoding */ catalogDataStore;
    void /* unknown type, empty encoding */ workoutPlanDataStore;
    void /* unknown type, empty encoding */ configurationDataStore;
    void /* unknown type, empty encoding */ numberOfWorkoutsOver5MinutesForModalities;
    void /* unknown type, empty encoding */ numberOfGuidedWorkoutsOver5MinutesForModalities;
    void /* unknown type, empty encoding */ modalityIdentifier;
}

@property (nonatomic) void /* unknown type, empty encoding */ sessionDuration;
@property (nonatomic, copy) NSString *modalityIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ isSessionGuided;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfWorkoutsOver5Minutes;
@property (nonatomic) void /* unknown type, empty encoding */ currentWeeklyStreak;
@property (nonatomic) void /* unknown type, empty encoding */ longestWeeklyStreak;
@property (nonatomic) void /* unknown type, empty encoding */ sessionEnergyBurned;
@property (nonatomic) void /* unknown type, empty encoding */ bestEnergyBurnedOfWorkoutModality;
@property (nonatomic) void /* unknown type, empty encoding */ isSessionCompletingProgram;
@property (nonatomic) void /* unknown type, empty encoding */ currentPlanCompletedNumberOfWorkouts;
@property (nonatomic) void /* unknown type, empty encoding */ currentPlanTotalNumberOfWorkouts;

- (id)numberOfGuidedWorkoutsOver5MinutesForModality:(id)a0;
- (id)numberOfWorkoutsOver5MinutesForModality:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
