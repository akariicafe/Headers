@interface NTKNightModeTriggerSettings : NSObject

@property (nonatomic) double thresholdLuxLow;
@property (nonatomic) double thresholdLuxHigh;
@property (nonatomic) unsigned long long sampleSize;

- (id)init;
- (void)dealloc;
- (void)_registerForDarwinNotifications;
- (unsigned long long)_readSampleSizeFromPrefs;
- (double)_readThresholdLuxHighFromPrefs;
- (double)_readThresholdLuxLowFromPrefs;
- (void)_unregisterForDarwinNotifications;

@end
