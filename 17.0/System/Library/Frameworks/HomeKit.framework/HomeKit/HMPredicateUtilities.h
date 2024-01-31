@interface HMPredicateUtilities : NSObject

+ (id)rewritePredicateForClient:(id)a0 home:(id)a1;
+ (BOOL)areOnlyHourAndMinuteSet:(id)a0;
+ (id)audioAnalysisNotificationOptionsInPredicate:(id)a0;
+ (id)bitwiseAndValueWithKeyPath:(id)a0 inComparisonPredicate:(id)a1 validValues:(long long)a2;
+ (id)bitwiseAndValueWithKeyPath:(id)a0 inPredicate:(id)a1 validValues:(long long)a2;
+ (BOOL)containsPresenceEvents:(id)a0;
+ (id)personFamiliarityOptionsInComparisonPredicate:(id)a0;
+ (id)rewritePredicateForDaemon:(id)a0;
+ (id)rewritePredicateForDaemon:(id)a0 characteristicIsInvalid:(BOOL *)a1;
+ (id)significantEventTypesInComparisonPredicate:(id)a0;
+ (BOOL)validatePredicate:(id)a0;

@end
