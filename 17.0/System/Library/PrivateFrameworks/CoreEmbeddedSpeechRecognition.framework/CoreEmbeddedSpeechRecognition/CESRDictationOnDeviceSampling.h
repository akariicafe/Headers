@class NSObject, NSMutableDictionary, NSDate;
@protocol OS_dispatch_queue;

@interface CESRDictationOnDeviceSampling : NSObject

@property (nonatomic) long long numberOfRequestsTillNow;
@property (retain, nonatomic) NSDate *samplingDate;
@property (retain, nonatomic) NSMutableDictionary *dictationSamplingVariables;
@property (nonatomic) BOOL isDeviceSampledFromConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue;

+ (id)sharedManager;
+ (BOOL)_isInternalInstall;
+ (BOOL)_isSamplingAllowed;
+ (id)_readDictationSampledPlist;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isSamplingDateCurrent;
- (void)_setRequestCount:(long long)a0;
- (void)_setSamplingDateToCurrentDate;
- (void)_updateDictationSampledPlist;
- (void)incrementSampledRequestCount;
- (BOOL)isRequestSelectedForSamplingFromConfigForLanguage:(id)a0;

@end
