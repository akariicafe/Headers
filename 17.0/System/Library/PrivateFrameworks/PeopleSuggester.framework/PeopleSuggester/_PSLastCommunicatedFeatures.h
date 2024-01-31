@interface _PSLastCommunicatedFeatures : NSObject

+ (int)bucketFromTimeInterval:(double)a0;
+ (id)featureValueFromTimeInterval:(double)a0;
+ (id)lastCommunicationFromCandidates:(id)a0 direction:(long long)a1 mechanisms:(id)a2 caches:(id)a3;
+ (id)lastInteractionFromCandidate:(id)a0 caches:(id)a1 direction:(long long)a2 mechanisms:(id)a3;
+ (id)recipientDetailsFromContact:(id)a0;
+ (double)timeIntervalSinceNowForInteraction:(id)a0;

@end
