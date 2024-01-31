@interface TAAnalyticsManagerSettings : NSObject

@property (nonatomic) unsigned long long settingsVersion;
@property BOOL enableSubmission;

- (id)init;
- (id)initWithEnableSubmissionOrDefault:(id)a0 andSettingsVersion:(unsigned long long)a1;

@end
