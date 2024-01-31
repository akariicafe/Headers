@interface DRSDampeningConfiguration : NSObject

@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long countCap;
@property (nonatomic) double acceptanceRate;

+ (id)spindumpWorkflowResponsivenessConfiguration_Internal;
+ (id)hangTracerWatchOSInternalOrSeedNoDownsamplingConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_Internal;
+ (id)memoryToolsDefaultConfiguration;
+ (id)memoryToolsInternalMemgraphOverTimeConfiguration;
+ (id)rapidMicroDiagnosticsConfiguration;
+ (id)drmResourceUsageConfiguration;
+ (id)defaultSignatureDampeningConfiguration;
+ (id)nandDefaultConfiguration;
+ (id)RMEIssueCategoryConfiguration;
+ (id)coreAudioOverloadConfiguration;
+ (id)spindumpWorkflowResponsivenessConfiguration_External;
+ (id)hangTracerNonWatchOSInternalNoDownsamplingConfiguration;
+ (id)ppsArchiveConfiguration;
+ (id)hangTracerNonWatchOSSeedConfiguration;
+ (id)hangTracerNonWatchOSCustomerConfiguration;
+ (id)abcDefaultConfiguration;
+ (id)caHitchesConfiguration;
+ (id)watchdogdDefaultConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedDownsamplingConfiguration;
+ (id)nandAutoGBBSweepConfiguration;
+ (id)mailIssueCategoryConfiguration;
+ (id)sentryMacOSAppLaunchConfiguration;
+ (id)hangTracerNonWatchOSInternalDownsamplingConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_SeedRC;
+ (id)_entityName;

- (id)_initWithMO_ON_MOC_QUEUE:(id)a0;
- (id)initWithPlistDict:(id)a0;
- (id)description;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 identifier:(id)a1;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithHysteresis:(double)a0 cap:(unsigned long long)a1 acceptanceRate:(double)a2;
- (BOOL)isEqualToDampeningConfiguration:(id)a0;
- (id)jsonCompatibleDictRepresentation;

@end
