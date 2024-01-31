@interface ACHVisibilityEnvironment : NSObject

@property (nonatomic) long long activityMoveMode;
@property (nonatomic) unsigned long long experienceType;
@property (nonatomic) BOOL isStandalonePhoneFitnessMode;
@property (nonatomic) BOOL prerequisiteMet;
@property (nonatomic) long long earnedInstanceCount;
@property (nonatomic) BOOL isWheelchairUser;

- (id)valueForUndefinedKey:(id)a0;

@end
