@interface RCAnalyticsUtilities : NSObject

+ (void)sendDidCaptureModifyExistingRecording;
+ (void)sendNewRecordingDuration:(double)a0;
+ (void)sendReceivedSharedRecording;
+ (void)sendDidOpenShareMemoController;
+ (void)sendDidTrimVoiceMemo;
+ (void)sendDidCaptureNewRecording;
+ (void)sendRecordingsCount:(long long)a0;
+ (void)sendDidShareRecording;
+ (void)sendDidPlaybackVoiceMemo;

@end
