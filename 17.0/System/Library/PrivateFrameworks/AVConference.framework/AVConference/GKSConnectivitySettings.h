@interface GKSConnectivitySettings : NSObject

+ (int)getNATTypeFromCarrierBundle;
+ (double)getLongTermValueWeightC;
+ (int)getLongTermHistoryLength;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getCachedIPPort;
+ (double)getLongTermValueWeightA;
+ (id)getTestGroupPermutations:(unsigned char)a0;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getIPPortForService:(id)a0;
+ (double)getShortTermValueWeightA;
+ (double)getAdaptiveLearningB;
+ (id)getAllSettings;
+ (id)getStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (double)getShortTermValueWeightC;
+ (double)getAdaptiveLearningA;
+ (double)getNoRemoteDuplicationThresholdFast;
+ (unsigned char)getAbTestingState;
+ (double)getAdjustmentFactorA;
+ (int)getRateControllerType;
+ (void)setAddress:(id)a0 forService:(id)a1;
+ (int)getWRMRSSIThresholdValue:(int)a0;
+ (void)setClientOptions:(id)a0;
+ (id)getClientOption:(id)a0;
+ (unsigned int)getAbTestMasterLocalSwitches;
+ (int)getNewSessionJoiningInterval;
+ (int)getDecryptionMKMRecoveryInterval;
+ (int)getShortTermHistoryLength;
+ (id)getStorebagValueStorebagKey:(id)a0 defaultValue:(id)a1;
+ (double)getShortTermValueWeightB;
+ (double)getLongTermValueWeightB;
+ (void)clearAllSettingsWithRefreshIntervalInSeconds:(int)a0;
+ (double)getAdjustmentFactorC;
+ (BOOL)supportsEVSCodec;
+ (double)getRemoteMediaStallTimeout;
+ (void)setServerAddresses:(id)a0;
+ (BOOL)supportsRedAudio;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (int)getAdaptiveLearningState;
+ (BOOL)getFeatureFlagForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3;
+ (id)getAddressForService:(id)a0;
+ (BOOL)supportsHEVCEncoding;
+ (id)getVCRCSeverBagConfigWithKey:(id)a0;
+ (double)getThresholdForSwitch:(unsigned int)a0;
+ (BOOL)supportiRATRecommendation;
+ (double)getAdjustmentFactorB;
+ (int)getDecryptionTimeoutInterval;

- (id)init;
- (void)dealloc;

@end
