@class NSData, ACAccountStore, NSString;

@interface MSMSPlatform : NSObject <MSPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) BOOL isPerfLoggingEnabled;
@property (retain, nonatomic) NSData *pushToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)thePlatform;

- (Class)pluginClass;
- (id)contentURLForPersonID:(id)a0;
- (id)init;
- (void)logFile:(const char *)a0 func:(const char *)a1 line:(int)a2 facility:(int)a3 level:(int)a4 format:(id)a5 args:(char *)a6;
- (Class)deletePluginClass;
- (Class)subscriberPluginClass;
- (struct __CFString { } *)_facilityStringForFacility:(int)a0;
- (BOOL)shouldEnableNewFeatures;
- (BOOL)policyMayDownload;
- (id)stringForSysctlKey:(id)a0;
- (id)OSString;
- (id)UDID;
- (Class)publisherPluginClass;
- (id)authTokenForPersonID:(id)a0;
- (id)pushTokenForPersonID:(id)a0;
- (id)socketOptions;
- (id)appBundleInfoString;
- (id)OSVersion;
- (BOOL)shouldLogAtLevel:(int)a0;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (void)_rereadDefaults;
- (void).cxx_destruct;
- (id)theDaemon;
- (BOOL)_mayPerformFileTransfer;
- (id)fullNameFromFirstName:(id)a0 lastName:(id)a1;
- (id)hardwareString;
- (id)pathMediaStreamDir;
- (BOOL)isPerformanceLoggingEnabled;
- (BOOL)policyMayUpload;
- (void)logFacility:(int)a0 level:(int)a1 format:(id)a2 args:(char *)a3;
- (id)baseURLForPersonID:(id)a0;
- (void)didDetectUnrecoverableCondition;
- (id)_accountForPersonID:(id)a0;

@end
