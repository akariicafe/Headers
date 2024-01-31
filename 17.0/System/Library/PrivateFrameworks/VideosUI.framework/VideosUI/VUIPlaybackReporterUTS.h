@class WLKPlaybackReporter, VUIPlaybackUpNextConfig;

@interface VUIPlaybackReporterUTS : VUIPlaybackReporter

@property (retain, nonatomic) WLKPlaybackReporter *reporter;
@property (retain, nonatomic) VUIPlaybackUpNextConfig *playbackUpNextConfig;

+ (id)sharedInstance;
+ (void)_cachePlaybackResumeTime:(id)a0 absoluteResumeTime:(id)a1 featureRelativeResumeTime:(id)a2;
+ (BOOL)_shouldCacheResumeTimeForMediaType:(id)a0;

- (void).cxx_destruct;
- (void)_endSession:(id)a0;
- (void)_reportForSession:(id)a0 state:(id)a1 reason:(id)a2;
- (double)_completionFudgeFactor;
- (id)_createSessionForPlayer:(id)a0;
- (BOOL)_isTransitionValidForPlayer:(id)a0 fromState:(id)a1 toState:(id)a2;
- (void)_reportForPlayer:(id)a0 playerState:(id)a1 completionState:(unsigned long long)a2 completionBlock:(id /* block */)a3;
- (void)_reportLinearOrEBSForPlayer:(id)a0 isLinear:(BOOL)a1 playerState:(id)a2 completionState:(unsigned long long)a3 completionBlock:(id /* block */)a4;
- (void)_reportSummary:(id)a0 sessionID:(id)a1 completion:(id /* block */)a2;
- (void)_reportVODForPlayer:(id)a0 playerState:(id)a1 completionState:(unsigned long long)a2 completionBlock:(id /* block */)a3;
- (id)_wlkPlaybackRateForState:(id)a0 player:(id)a1;
- (long long)_wlkPlaybackStateForState:(id)a0;
- (BOOL)enforceSinglePlaybackSession;
- (void)reportForPlayer:(id)a0 completionState:(unsigned long long)a1 completionBlock:(id /* block */)a2;

@end
