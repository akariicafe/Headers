@class NSMutableDictionary, NSDictionary, NSArray, NSMutableSet, VCIDRScheduler, NSMutableArray;

@interface VCSessionUplinkVideoStreamController : NSObject {
    float _startTime;
    id _delegate;
    NSMutableDictionary *_videoStreams;
    NSMutableDictionary *_streamInfoMap;
    NSMutableDictionary *_activeVideoStreams;
    NSMutableSet *_streamToPause;
    NSMutableSet *_streamToResume;
    NSMutableDictionary *_streamScheduleWifi;
    NSMutableDictionary *_streamScheduleCell;
    NSMutableDictionary *_currentStreamSchedule;
    VCIDRScheduler *_schedulerWifi;
    VCIDRScheduler *_schedulerCell;
    BOOL _pendingStreamsUpdated;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    double _pendingKeyFrameGenerationStartTime;
    NSMutableArray *_streamsPendingKeyFrameGeneration;
    NSMutableArray *_streamResetIDR;
    BOOL _streamsUseRTCP;
    NSDictionary *_cachedActiveVideoStreams;
    struct opaqueRTCReporting { } *_reportingAgent;
}

@property (readonly) NSDictionary *activeVideoStreams;
@property (copy, nonatomic) NSMutableDictionary *pendingVideoStreams;
@property unsigned int captureFrameRate;
@property (copy, nonatomic) NSArray *streamIDsWifi;
@property (copy, nonatomic) NSArray *streamIDsCell;
@property (nonatomic) float currentFrameTime;
@property (nonatomic) BOOL dynamicVideoPriorityEnabled;
@property (nonatomic) BOOL shouldSkipIDRScheduler;

- (void)dealloc;
- (id)delegate;
- (void)lock;
- (void)unlock;
- (void)restart;
- (id)schedulerStreamWithVideoStream:(id)a0;
- (void)setPendingVideoStreamsInternal:(id)a0;
- (id)anchorStreamIDWithCappedVideoStreamIDs:(id)a0;
- (BOOL)filterPendingTemporalStreams;
- (void)generateKeyFrameWithStreamID:(id)a0 firType:(int)a1;
- (id)getMultiwayConfigForStreamID:(id)a0;
- (void)handleStreamsPendingKeyFrameGeneration;
- (void)handleStreamsResetIDR;
- (id)initWithVideoStreams:(id)a0 streamInfos:(id)a1 reportingAgent:(struct opaqueRTCReporting { } *)a2 delegate:(id)a3;
- (void)initilizeStreamInfoMapWithStreamInfos:(id)a0;
- (id)newVideoStreamKeyFrameScheduleWithStreamIDs:(id)a0;
- (BOOL)pauseStreams;
- (void)printPendingKeyFrameWarningOnThresholdTimeElapsedWithCurrentFrameTime:(float)a0;
- (BOOL)resumeStreams;
- (void)selectVideoStreamForVideoPriority;
- (void)setCachedActiveVideoStreams:(id)a0;
- (void)setIsLocalOnCellular:(BOOL)a0 cappedVideoStreamIDs:(id)a1;
- (BOOL)setStreamsUseRTCPWithStreamInfos:(id)a0;
- (BOOL)shouldGenerateIDRWithStreamSchedule:(id)a0;
- (id)videoStreamPendingKeyFrameGenerationWithStreamID:(id)a0 shouldRemoveFromPendingArray:(BOOL *)a1;

@end
