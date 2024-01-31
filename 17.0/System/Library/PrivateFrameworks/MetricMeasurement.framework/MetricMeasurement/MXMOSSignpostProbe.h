@class MXMMutableSampleData, NSURL, NSDate, NSObject, SignpostSupportObjectExtractor;
@protocol OS_dispatch_semaphore;

@interface MXMOSSignpostProbe : MXMProbe {
    SignpostSupportObjectExtractor *_extractor;
    unsigned long long _mode;
    NSURL *_logArchivePath;
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned long long _startMachContTime;
    unsigned long long _stopMachContTime;
    NSObject<OS_dispatch_semaphore> *_finishedProcessingSema;
    MXMMutableSampleData *_data;
}

+ (id)probeHostLive;
+ (id)probeHostSystemLogArchiveWithRelativeTimeInterval:(double)a0;
+ (id)probeHostSystemLogArchiveWithStartDate:(id)a0 endDate:(id)a1;
+ (id)probeHostSystemLogArchiveWithStartDate:(id)a0 endDate:(id)a1 startMachTime:(unsigned long long)a2 stopMachTime:(unsigned long long)a3;
+ (id)probeWithLogArchivePath:(id)a0;
+ (id)probeWithLogArchivePath:(id)a0 startDate:(id)a1 endDate:(id)a2;
+ (id)probeWithLogArchivePath:(id)a0 startDate:(id)a1 endDate:(id)a2 startMachTime:(unsigned long long)a3 stopMachTime:(unsigned long long)a4;

- (void)dealloc;
- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_beginUpdates;
- (void)_stopUpdates;
- (void)_addAnimationFrameCountToData:(id)a0 fromSignpostAnimationInterval:(id)a1;
- (void)_addAnimationFrameRateToData:(id)a0 fromSignpostAnimationInterval:(id)a1;
- (void)_addAnimationGlitchTimeRatioToData:(id)a0 fromSignpostAnimationInterval:(id)a1;
- (void)_addAnimationGlitchesTotalDurationToData:(id)a0 fromSignpostAnimationInterval:(id)a1;
- (void)_addAnimationNumberOfGlitchesToData:(id)a0 fromSignpostAnimationInterval:(id)a1;
- (void)_buildData:(id)a0 attributes:(id)a1 signpostEvent:(id)a2;
- (void)_buildData:(id)a0 signpostAnimationInterval:(id)a1;
- (void)_buildData:(id)a0 signpostInterval:(id)a1;
- (id)_buildSampleSetWithData:(id)a0 tag:(id)a1 unit:(id)a2 attributes:(id)a3 signpostObject:(id)a4;
- (void)_setupProcessingBlocks;
- (void)_setupProcessingFilter;
- (id)initWithLogArchive:(id)a0;
- (id)initWithLogArchive:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)initWithMode:(unsigned long long)a0 logArchive:(id)a1 startDate:(id)a2 endDate:(id)a3;
- (id)initWithMode:(unsigned long long)a0 logArchive:(id)a1 startDate:(id)a2 endDate:(id)a3 startMachTime:(unsigned long long)a4 stopMachTime:(unsigned long long)a5;
- (id)sampleWithTimeout:(double)a0 stopReason:(unsigned long long *)a1;

@end
