@interface MSDTestPreferences : NSObject

+ (id)sharedInstance;

- (id)LSMeasurementsFilePath;
- (double)appUsagePollingInterval;
- (double)caLogsUploadInterval;
- (double)cachingHubRetryInterval;
- (long long)concurrentDownloadOperation;
- (long long)concurrentDownloadRequest;
- (long long)concurrentSession;
- (id)contentSyncTimeoutInterval;
- (id)demoUnitServerURL;
- (long long)deviceActivationFlag;
- (BOOL)disableParallelProcessing;
- (BOOL)disassociateWiFiBeforeCheckIn;
- (BOOL)enablePeerDemoService;
- (BOOL)fakeActivationDemoBit;
- (long long)findMyHubRetryDelay;
- (id)getValueFromTestPreferencesForKey:(id)a0;
- (id)mockAccountSettingsFile;
- (BOOL)mockForBetterTogetherDemo;
- (id)mockOSUpdateRequestFile;
- (BOOL)pauseContentUpdateOnError;
- (id)pressDemoTestTarget;
- (id)pressDemoXCTestProductsPath;
- (unsigned int)rebootDelayForStaging;
- (id)screenSaverIdleDelay;
- (BOOL)skipMarkAsNotDemo;
- (BOOL)skipVerifyHashBeforeStaging;
- (long long)storePickerUIMode;
- (unsigned int)systemAppPollingInterval;
- (unsigned int)systemAppTimeoutInterval;
- (unsigned int)timeShowingFatalError;

@end
