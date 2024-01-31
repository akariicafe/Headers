@interface IRCandicateClassificationEligibility : NSObject

+ (long long)_eligibilityTypeFromEvent:(id)a0;
+ (id)_generateSettingsStruct:(id)a0;
+ (long long)classificationEligibilityForCandidate:(id)a0 withHistoryEventsAsc:(id)a1 systemState:(id)a2;

@end
