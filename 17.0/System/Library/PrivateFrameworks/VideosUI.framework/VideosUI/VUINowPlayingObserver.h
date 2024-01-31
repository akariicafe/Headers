@class VUINowPlayingObservation, NSObject;
@protocol OS_dispatch_queue, VUINowPlayingObserverDelegate;

@interface VUINowPlayingObserver : NSObject

@property (retain, nonatomic) VUINowPlayingObservation *latestObservation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (nonatomic, getter=isObserving) BOOL observing;
@property (nonatomic) unsigned long long updateObservationContext;
@property (weak, nonatomic) id<VUINowPlayingObserverDelegate> delegate;

- (void)startObserving;
- (void)_startObserving;
- (void)stopObserving;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_stopObserving;
- (void)_handleNowPlayingAppDidChangeNotification:(id)a0;
- (void)_handleNowPlayingAppIsPlayingDidChangeNotification:(id)a0;
- (void)_notifyDelegateLatestObservationDidChange:(id)a0;
- (void)_updateLatestObservation;
- (void)_updateLatestObservationWithBundleIdentifier:(id)a0 playbackState:(unsigned int)a1;

@end
