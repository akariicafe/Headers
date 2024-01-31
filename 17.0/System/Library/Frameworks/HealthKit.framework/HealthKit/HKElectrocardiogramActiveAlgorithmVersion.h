@interface HKElectrocardiogramActiveAlgorithmVersion : NSObject

+ (long long)algorithmVersionForOnboardingVersion:(long long)a0;
+ (unsigned long long)onboardingVersionForKnownAlgorithmVersion:(long long)a0;
+ (id)knownAlgorithmVersionFromOnboardedVersion:(id)a0 keyValueDomain:(id)a1;
+ (id)versionWithHealthStore:(id)a0 error:(id *)a1;
+ (id)_maxKnownAlgorithmVersionOnboardedWithKeyValueDomain:(id)a0;

@end
