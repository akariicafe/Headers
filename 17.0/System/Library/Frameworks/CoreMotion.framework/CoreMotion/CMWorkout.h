@class NSUUID, NSString, NSDate;

@interface CMWorkout : NSObject <NSSecureCoding, NSCopying> {
    NSUUID *fSessionId;
    long long fType;
    long long fLocationType;
    NSDate *fStartDate;
    NSDate *fEndDate;
    BOOL fIsUserInitiated;
    unsigned long long fMode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isUserInitiated;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long locationType;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *appId;

+ (BOOL)isAvailable;
+ (long long)CMSwimWorkoutLocationFromCMWorkoutLocationType:(long long)a0;
+ (long long)CMWorkoutTypeFromCLMotionActivityType:(int)a0;
+ (int)CLMotionActivityTypeFromCMWorkoutType:(long long)a0;
+ (long long)CMWorkoutLocationTypeFromCMSwimWorkoutLocation:(long long)a0;
+ (BOOL)workoutIsSupportedForLowPower:(long long)a0;
+ (BOOL)workoutIsTypePedestrian:(long long)a0;
+ (BOOL)workoutIsTypeRunning:(long long)a0;
+ (BOOL)workoutIsTypeWalking:(long long)a0;
+ (id)workoutLocationName:(long long)a0;
+ (long long)workoutLocationTypeFromCMWorkoutType:(long long)a0;
+ (id)workoutModeName:(unsigned long long)a0;
+ (id)workoutName:(long long)a0;

- (void)setLocationType:(long long)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIsUserInitiated:(BOOL)a0;
- (void)setWorkoutType:(long long)a0;
- (void)setWorkoutMode:(unsigned long long)a0;
- (id)_initWithSessionId:(id)a0 type:(long long)a1 locationType:(long long)a2 mode:(unsigned long long)a3 startDate:(id)a4 endDate:(id)a5;
- (id)initWithSessionId:(id)a0 type:(long long)a1;
- (id)initWithSessionId:(id)a0 type:(long long)a1 locationType:(long long)a2;
- (id)initWithSessionId:(id)a0 type:(long long)a1 locationType:(long long)a2 mode:(unsigned long long)a3;
- (id)initWithSessionId:(id)a0 type:(long long)a1 locationType:(long long)a2 mode:(unsigned long long)a3 startDate:(id)a4 endDate:(id)a5;
- (BOOL)isSameWorkout:(id)a0;

@end
