@interface _BMLighthouseLedgerLibraryNode : _BMLibraryNode

+ (id)validKeyPaths;
+ (id)identifier;
+ (id)sublibraries;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)MlruntimedEvent;
+ (id)DediscoPrivacyEvent;
+ (id)configurationForMlruntimedEvent;
+ (id)DeviceTelemetry;
+ (id)LighthousePluginEvent;
+ (id)configurationForDeviceTelemetry;
+ (id)storeConfigurationForTaskStatus;
+ (id)TaskError;
+ (id)TaskStatus;
+ (id)TaskTelemetry;
+ (id)TrialdEvent;
+ (id)configurationForDediscoPrivacyEvent;
+ (id)configurationForLighthousePluginEvent;
+ (id)configurationForTaskError;
+ (id)configurationForTaskStatus;
+ (id)configurationForTaskTelemetry;
+ (id)configurationForTrialdEvent;
+ (id)storeConfigurationForDediscoPrivacyEvent;
+ (id)storeConfigurationForDeviceTelemetry;
+ (id)storeConfigurationForLighthousePluginEvent;
+ (id)storeConfigurationForMlruntimedEvent;
+ (id)storeConfigurationForTaskError;
+ (id)storeConfigurationForTaskTelemetry;
+ (id)storeConfigurationForTrialdEvent;
+ (id)syncPolicyForDediscoPrivacyEvent;
+ (id)syncPolicyForDeviceTelemetry;
+ (id)syncPolicyForLighthousePluginEvent;
+ (id)syncPolicyForMlruntimedEvent;
+ (id)syncPolicyForTaskError;
+ (id)syncPolicyForTaskStatus;
+ (id)syncPolicyForTaskTelemetry;
+ (id)syncPolicyForTrialdEvent;

@end
