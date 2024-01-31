@class MPPlaybackContext;

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {
    MPPlaybackContext *_playbackContext;
    long long _replaceIntent;
}

- (id)privateListeningOverride;
- (id)description;
- (void).cxx_destruct;
- (id)siriAssetInfo;
- (BOOL)isRequestingImmediatePlayback;
- (long long)replaceIntent;
- (void)setReplaceIntent:(long long)a0;
- (id)asMusicPlaybackContextWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)initWithPlaybackContext:(id)a0;
- (id)siriRecommendationIdentifier;
- (id)siriWHAMetricsInfo;

@end
