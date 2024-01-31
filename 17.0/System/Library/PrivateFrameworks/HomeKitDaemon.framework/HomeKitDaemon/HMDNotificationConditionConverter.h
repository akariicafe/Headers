@class NSString;

@interface HMDNotificationConditionConverter : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)predicateFromPresenceCondition:(id)a0;
+ (BOOL)_isTimePredicate:(id)a0;
+ (id)_presencePredicatesFromPredicate:(id)a0;
+ (id)_sunriseSunsetTimePeriodElementFromComparisonPredicate:(id)a0;
+ (id)_timeOfDayTimePeriodElementFromComparisonPredicate:(id)a0;
+ (id)_timePredicatesFromPredicate:(id)a0;
+ (id)conditionsFromPredicate:(id)a0;
+ (id)negateOffsetDateComponents:(id)a0;
+ (id)predicateFromTimePeriodCondition:(id)a0;
+ (id)predicatesFromConditions:(id)a0;
+ (id)presenceNotificationConditionFromPredicate:(id)a0;
+ (id)timePeriodNotificationConditionFromPredicate:(id)a0;


@end
