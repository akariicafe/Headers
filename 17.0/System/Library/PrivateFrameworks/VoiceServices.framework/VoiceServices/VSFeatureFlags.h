@interface VSFeatureFlags : NSObject

@property (class, readonly) BOOL isTrialEnabled;
@property (class, readonly) BOOL isLowPowerDeviceNeuralEnabled;
@property (class, readonly) BOOL useSiriTTSService;
@property (class, readonly) BOOL useSiriTTSServiceV2;
@property (class, readonly) BOOL lowInactiveMemory;

@end
