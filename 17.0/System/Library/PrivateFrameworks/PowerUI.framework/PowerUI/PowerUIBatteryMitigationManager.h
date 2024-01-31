@class NSString, NSArray, NSDate, NSObject, NSNumber;
@protocol OS_os_log;

@interface PowerUIBatteryMitigationManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) NSArray *lastDOD0Values;
@property (retain) NSDate *lastDOD0Update;
@property (retain, nonatomic) NSArray *lastQMaxArray;
@property (retain) NSDate *lastQMaxUpdate;
@property unsigned long long decisionSignalID;
@property (nonatomic) unsigned long long testDaysSinceQmaxUpdate;
@property (nonatomic) unsigned long long testHoursSinceDOD0Update;
@property (retain, nonatomic) NSNumber *lastDOD0ValueAtQualQmax;
@property (retain, nonatomic) NSDate *lastQualifiedQmaxDate;
@property (retain, nonatomic) NSDate *lastFullChargeDate;
@property (retain, nonatomic) NSDate *lastAttemptedFullChargeDate;
@property (nonatomic) double timeSinceLastDOD0Update;
@property (nonatomic) double timeSinceLastQmaxUpdate;

+ (id)sharedManager;
+ (id)managerWithDefaultsDomain:(id)a0;

- (void)updateLastQMaxArray:(id)a0 atDate:(id)a1;
- (double)maxAdditionalWaitTimeForQMax;
- (id)readLastDOD0Update;
- (double)additionalWaitTimeForDOD0WithInterval:(double)a0;
- (void)requestPeriodicQMaxCheckInMinutes:(int)a0 waking:(BOOL)a1;
- (id)readLastQMaxUpdate;
- (id)readLastDOD0Values;
- (void).cxx_destruct;
- (void)periodicQMaxCheck;
- (void)updateLastDOD0Values:(id)a0 atDate:(id)a1;
- (double)additionalWaitTimeForQMaxWithInterval:(double)a0;
- (id)qMaxFromBatteryProperties:(id)a0;
- (id)dod0ArrayFromBatteryProperties:(id)a0;
- (double)additionalWaitTime;
- (id)readLastQMaxArray;
- (id)initWithDefaultsDomain:(id)a0;
- (double)additionalWaitTimeWithProperties:(id)a0;

@end
