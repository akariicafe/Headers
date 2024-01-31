@interface _PSContactFillerDataCollectionUtilities : NSObject

+ (void)calculateNormContantsGivenInteractionStore:(id)a0 normConstants:(id)a1;
+ (id)calculateNormalizedCallingFrequencyForContactGivenContactIdPredicate:(id)a0 totalFrequency:(id)a1 numberOfDaysToLookBack:(long long)a2 timeOfShareInteraction:(id)a3 interactionStore:(id)a4 direction:(id)a5;
+ (id)calculateNormalizedShareFrequencyForContactGivenContactIdPredicate:(id)a0 totalFrequency:(id)a1 numberOfDaysToLookBack:(long long)a2 timeOfShareInteraction:(id)a3 interactionStore:(id)a4;
+ (id)calculateNormalizedTextingFrequencyForContactGivenContactIdPredicate:(id)a0 totalFrequency:(id)a1 numberOfDaysToLookBack:(long long)a2 timeOfShareInteraction:(id)a3 interactionStore:(id)a4 direction:(id)a5;
+ (int)calculateTimeBucketGivenInteraction:(id)a0 timeOfShareInteraction:(id)a1;
+ (int)calculateTimeSinceLastCallForContactGivenContactIdPredicate:(id)a0 direction:(id)a1 timeOfShareInteraction:(id)a2 interactionCache:(id)a3;
+ (int)calculateTimeSinceLastShareForContactGivenContactIdPredicate:(id)a0 timeOfShareInteraction:(id)a1 interactionCache:(id)a2;
+ (int)calculateTimeSinceLastTextForContactGivenContactIdPredicate:(id)a0 direction:(id)a1 timeOfShareInteraction:(id)a2 interactionCache:(id)a3;
+ (unsigned int)contactFillerBucketedValue:(unsigned long long)a0;
+ (BOOL)doesSuggestionProxyMatch:(id)a0 withInteraction:(id)a1;
+ (BOOL)doesTheRecipientsMatchInInteraction1:(id)a0 interaction2:(id)a1;
+ (double)enforceOneSignificantFigureForDouble:(double)a0;
+ (unsigned int)enforceOneSignificantFigureForSmallDouble:(double)a0;
+ (void)extractFeaturesFromBehaviorRulesIntoPETMessage:(id)a0 behaviorRules:(id)a1 MLModelScores:(id)a2;
+ (void)extractFeaturesFromBehaviorRulesIntoPETMessage:(id)a0 behaviorRules:(id)a1 contextItems:(id)a2 ruleRankingModel:(id)a3;
+ (void)extractFrequencyRecencyFeaturesIntoPETMessage:(id)a0 recipientID:(id)a1 interaction:(id)a2 normConstants:(id)a3 numberOfDaysToLookBack:(long long)a4 interactionStore:(id)a5 timeOfShareInteraction:(id)a6 contactPropertyCache:(id)a7 interactionCache:(id)a8;
+ (void)extractUserFeaturesIntoPETMessage:(id)a0 normConstants:(id)a1 behaviorRetriever:(id)a2;
+ (id)filterRulesBasedOnInteractionGivenRuleList:(id)a0 interaction:(id)a1;
+ (id)getBehaviorRulesGivenContext:(id)a0 behaviorRetriever:(id)a1;
+ (id)getInteractionModelScoreForEvent:(id)a0 forInteractionRecipients:(id)a1;
+ (id)getInteractionModelScoreForSuggestions:(id)a0 forInteractionRecipients:(id)a1;
+ (id)getInteractionRecipientFromInteraction:(id)a0;
+ (id)getListOfContactsFromCashedMessagesInteraction:(id)a0 cashedShareInteractions:(id)a1;
+ (id)getListOfContactsInteractedInTheLastNumberOfDays:(int)a0 interactionStore:(id)a1 limit:(int)a2;
+ (id)initContactPropertyCache:(id)a0 timeOfShareInteraction:(id)a1 interactionStore:(id)a2;
+ (BOOL)recipientPredictedCorrectlyByRule:(id)a0 interaction:(id)a1 bundleId:(id)a2;
+ (id)resolveUniqueContactIdGivenInteraction:(id)a0;

@end
