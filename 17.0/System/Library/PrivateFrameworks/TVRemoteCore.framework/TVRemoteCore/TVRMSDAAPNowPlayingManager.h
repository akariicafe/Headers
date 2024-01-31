@class NSString, NSArray, TVRMSControlInterface, TVRMSDAAPRequestManager, TVRMSNowPlayingInfo, NSObject, NSURLSessionDataTask, NSNumber;
@protocol OS_dispatch_source, TVRMSDAAPNowPlayingManagerDelegate;

@interface TVRMSDAAPNowPlayingManager : NSObject {
    TVRMSDAAPRequestManager *_requestManager;
    TVRMSNowPlayingInfo *_currentNowPlayingInfo;
    NSURLSessionDataTask *_nowPlayingInfoRequest;
    NSURLSessionDataTask *_artworkRequest;
    NSURLSessionDataTask *_audioRoutesRequest;
    NSURLSessionDataTask *_volumeRequest;
    NSObject<OS_dispatch_source> *_artworkRetryTimer;
    long long _requestBackoffInterval;
    long long _artworkRequestBackoffInterval;
    NSString *_currentArtworkIdentifier;
    NSArray *_currentAudioRoutes;
    NSNumber *_lastVolume;
    BOOL _isObserving;
}

@property (weak, nonatomic) id<TVRMSDAAPNowPlayingManagerDelegate> delegate;
@property (retain, nonatomic) TVRMSControlInterface *controlInterface;
@property (readonly, nonatomic, getter=isObserving) BOOL observing;

- (void).cxx_destruct;
- (BOOL)_audioRoutes:(id)a0 equalAudioRoutes:(id)a1;
- (void)_cancelArtworkRetryTimer;
- (void)_refreshNowPlayingInfoRequest;
- (void)_requestArtworkDataIfNecessaryForNowPlayingInfo:(id)a0;
- (void)_requestAudioRoutes;
- (void)_requestNowPlayingInfoWithCompletionHandler:(id /* block */)a0;
- (void)_requestVolume;
- (void)_scheduleArtworkRetryForNowPlayingInfo:(id)a0 delay:(double)a1;
- (void)beginObservingNowPlaying;
- (void)endObservingNowPlaying;
- (id)initWithRequestManager:(id)a0;

@end
