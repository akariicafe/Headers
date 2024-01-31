@class _HMMediaSession, NSUUID, HMMediaProfile, NSString, HMAudioControl;
@protocol HMMediaSessionDelegate;

@interface HMMediaSession : NSObject <_HMMediaSessionDelegate, HMObjectMerge, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMMediaSession *mediaSession;
@property (retain, nonatomic) NSUUID *uuid;
@property (weak) HMMediaProfile *mediaProfile;
@property (readonly, nonatomic) NSString *routeUID;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (weak) id<HMMediaSessionDelegate> delegate;
@property (readonly) long long playbackState;
@property (readonly) long long shuffleState;
@property (readonly) long long repeatState;
@property (readonly, copy) NSString *mediaUniqueIdentifier;
@property (readonly) unsigned long long sleepWakeState;
@property (readonly) HMAudioControl *audioControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)resumeWithCompletionHandler:(id /* block */)a0;
- (void)_unconfigure;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)messageTargetUUID;
- (id)initWithCoder:(id)a0;
- (void)mediaSession:(id)a0 didUpdateRouteUID:(id)a1;
- (void)configure:(id)a0 messageTargetUUID:(id)a1;
- (id)initWithUUID:(id)a0 routeUID:(id)a1 playbackState:(long long)a2 shuffleState:(long long)a3 repeatState:(long long)a4 mediaUniqueIdentifier:(id)a5 sleepWakeState:(unsigned long long)a6;
- (void)mediaSession:(id)a0 didUpdatePlaybackState:(long long)a1;
- (void)mediaSessionDidUpdate:(id)a0;
- (BOOL)mergeFromNewObject:(id)a0;
- (void)pauseWithCompletionHandler:(id /* block */)a0;
- (id)playbackStateDescription;
- (void)refreshPlaybackStateWithCompletionHandler:(id /* block */)a0;
- (void)updateMediaState:(id)a0;
- (void)updatePlaybackState:(id)a0;
- (void)updatePlaybackState:(long long)a0 completionHandler:(id /* block */)a1;

@end
