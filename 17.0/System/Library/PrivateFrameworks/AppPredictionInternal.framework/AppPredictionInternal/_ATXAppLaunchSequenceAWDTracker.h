@class _ATXDuetHelper;

@interface _ATXAppLaunchSequenceAWDTracker : NSObject {
    _ATXDuetHelper *_duetHelper;
    double _sessionGapSeconds;
    double _sameLaunchGapSeconds;
}

@property (readonly, nonatomic) unsigned long long maxLength;

+ (id)_defaultLaunchSequenceTimestampPath;
+ (id)_randomlyClipSequence:(id)a0 maxLength:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_queryStartTime;
- (void)_addBundleId:(id)a0 buffer:(id)a1;
- (void)_emitAndResetLaunchSequenceBuffer:(id)a0;
- (id)_readTimestamp;
- (void)_writeTimestamp:(id)a0;
- (id)initWithMaxLength:(unsigned long long)a0 sessionGapSeconds:(double)a1 sameLaunchGapSeconds:(double)a2 duetHelper:(id)a3;
- (void)logSampledLaunchSequences;
- (void)postLaunchSequence:(id)a0;

@end
