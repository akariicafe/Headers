@class NSString;

@interface SeymourServices.AchievementSessionEvaluationEnvironment : NSObject {
    void /* unknown type, empty encoding */ achievementDataStore;
    void /* unknown type, empty encoding */ energyBurnedAwardingCache;
    void /* unknown type, empty encoding */ workoutPlanDataStore;
    void /* unknown type, empty encoding */ configurationDataStore;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ modalityReference;
    void /* unknown type, empty encoding */ planCompletionDate;
    void /* unknown type, empty encoding */ numberOfWorkoutsOver5MinutesForModality;
    void /* unknown type, empty encoding */ numberOfGuidedWorkoutsOver5MinutesForModality;
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
@property (nonatomic) void /* unknown type, empty encoding */ isSessionCompletingPlan;
@property (nonatomic) void /* unknown type, empty encoding */ isSessionParticipatingInPlan;

- (id)numberOfGuidedWorkoutsOver5MinutesForModality:(id)a0;
- (id)numberOfWorkoutsOver5MinutesForModality:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
