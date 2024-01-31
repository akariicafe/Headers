@class NSString;

@interface SSMetricsAppInstallEvent : SSMetricsMutableEvent

@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *hardwareType;
@property (retain, nonatomic) NSString *installError;
@property (nonatomic) unsigned long long installStatus;
@property (nonatomic) unsigned long long installType;
@property (nonatomic) long long jobID;

+ (unsigned long long)_installStatusForString:(id)a0;
+ (unsigned long long)_installTypeForString:(id)a0;
+ (id)_stringForInstallStatus:(unsigned long long)a0;
+ (id)_stringForInstallType:(unsigned long long)a0;

- (id)init;
- (id)description;
- (BOOL)requiresDiagnosticSendingPermission;

@end
