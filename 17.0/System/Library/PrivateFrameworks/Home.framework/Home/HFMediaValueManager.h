@class NSError, NSMutableArray, NSString;
@protocol HFHomeKitObject, HFMediaProfileContainer;

@interface HFMediaValueManager : NSObject <HFMediaObjectObserver, HFMediaSessionObserver, HFMediaValueSource, HFHomeKitItemProtocol>

@property (retain, nonatomic) NSMutableArray *transactionStack;
@property (retain, nonatomic) NSError *cachedPlaybackStateWriteError;
@property (readonly, weak, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (readonly, nonatomic) BOOL hasPendingWrites;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;

- (id)init;
- (void).cxx_destruct;
- (void)mediaObject:(id)a0 didUpdateMediaSession:(id)a1;
- (void)mediaSession:(id)a0 didUpdatePlaybackState:(long long)a1;
- (id)cachedPlaybackStateWriteErrorForRouteID:(id)a0;
- (void)clearCachedPlaybackStateWriteErrorWithReason:(id)a0 notifyDelegates:(BOOL)a1;
- (BOOL)hasPendingWritesForRouteID:(id)a0;
- (id)initWithMediaProfileContainer:(id)a0;
- (long long)lastPlaybackStateForProfileForRouteID:(id)a0;
- (id)mediaProfileContainerForRouteID:(id)a0;
- (id)writePlaybackState:(long long)a0 playbackArchive:(id)a1 forRouteID:(id)a2;
- (void)_notifyDelegatesDidUpdatePlaybackState:(long long)a0 mediaSession:(id)a1;
- (void)_notifyDelegatesFailedToUpdatePlaybackStateWithError:(id)a0 mediaSession:(id)a1;
- (void)_notifyDelegatesWillUpdatePlaybackState:(long long)a0 mediaSession:(id)a1;
- (void)_updateCachedPlaybackStateWriteError:(id)a0 operationType:(id)a1 notifyDelegates:(BOOL)a2;
- (void)_updateLastPlaybackState:(long long)a0 sender:(SEL)a1 notifyWillUpdate:(BOOL)a2 notifyDidUpdate:(BOOL)a3;

@end
