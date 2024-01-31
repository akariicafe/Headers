@class NSDate, NSCalendar, HKHealthStore, ACHActivitySummaryUtility, ACHActivitySummaryIterator, HDProfile, ACHEarnedInstanceStore, NSNumber, ACHTemplateStore;
@protocol ACHAchievementStoring;

@interface ACHMonthlyChallengeTemplateDataProvider : NSObject {
    NSDate *_currentDateOverride;
    NSCalendar *_currentCalendarOverride;
    NSNumber *_moveModeOverride;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) ACHActivitySummaryIterator *activitySummaryIterator;
@property (weak, nonatomic) id<ACHAchievementStoring> achievementStore;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) NSCalendar *currentCalendar;
@property (retain, nonatomic) NSDate *currentDate;
@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility;
@property (readonly, nonatomic) BOOL isUsingNewAwardingSystem;

- (long long)numberOfEarnedInstancesOfTemplateWithUniqueName:(id)a0 inDateComponentInterval:(id)a1 withCalendar:(id)a2 error:(id *)a3;
- (void)setCurrentCalendarOverride:(id)a0;
- (BOOL)monthlyChallengeExistsForMonth:(id)a0;
- (BOOL)hasMinimumActiveDaysWithError:(id *)a0;
- (void)setMoveModeOverride:(long long)a0;
- (BOOL)isDate:(id)a0 betweenStartDate:(id)a1 andEndDate:(id)a2;
- (BOOL)isWheelchairUserWithError:(id *)a0;
- (id)existingMonthlyChallengeTemplates;
- (unsigned long long)currentExperienceType;
- (unsigned long long)monthlyChallengeTypeForMonth:(id)a0;
- (long long)currentActivityMoveModeWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)hasMinimumActiveDays;
- (void)setCurrentDateOverride:(id)a0;
- (unsigned long long)currentExperienceTypeWithError:(id *)a0;
- (id)initWithHealthStore:(id)a0 earnedInstanceStore:(id)a1 templateStore:(id)a2 activitySummaryIterator:(id)a3;
- (long long)currentActivityMoveMode;
- (id)initWithProfile:(id)a0 achievementStore:(id)a1 activitySummaryUtility:(id)a2;
- (BOOL)isWheelchairUser;

@end
