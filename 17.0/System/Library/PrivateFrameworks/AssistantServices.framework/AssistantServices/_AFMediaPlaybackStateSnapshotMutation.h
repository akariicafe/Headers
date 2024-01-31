@class NSString, AFMediaPlaybackStateSnapshot, NSDate;

@interface _AFMediaPlaybackStateSnapshotMutation : NSObject <AFMediaPlaybackStateSnapshotMutating> {
    AFMediaPlaybackStateSnapshot *_base;
    long long _playbackState;
    NSDate *_nowPlayingTimestamp;
    NSString *_mediaType;
    NSString *_groupIdentifier;
    BOOL _isProxyGroupPlayer;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasPlaybackState : 1; unsigned char hasNowPlayingTimestamp : 1; unsigned char hasMediaType : 1; unsigned char hasGroupIdentifier : 1; unsigned char hasIsProxyGroupPlayer : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsProxyGroupPlayer:(BOOL)a0;
- (id)initWithBase:(id)a0;
- (void)setMediaType:(id)a0;
- (BOOL)isDirty;
- (id)getGroupIdentifier;
- (void)setGroupIdentifier:(id)a0;
- (BOOL)getIsProxyGroupPlayer;
- (id)getMediaType;
- (long long)getPlaybackState;
- (id)getNowPlayingTimestamp;
- (void)setNowPlayingTimestamp:(id)a0;
- (void).cxx_destruct;
- (void)setPlaybackState:(long long)a0;

@end
