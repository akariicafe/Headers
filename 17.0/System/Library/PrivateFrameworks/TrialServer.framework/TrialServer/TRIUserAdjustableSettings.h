@interface TRIUserAdjustableSettings : NSObject

+ (BOOL)getExperimentOptOut:(id)a0;
+ (void)_deactivateAllActiveExperimentsWithServerContext:(id)a0;
+ (unsigned char)_optOutSoftwareUpdatePreferenceForAnyUser;
+ (void)updateExperimentOptOutStateWithServerContext:(id)a0;

@end
