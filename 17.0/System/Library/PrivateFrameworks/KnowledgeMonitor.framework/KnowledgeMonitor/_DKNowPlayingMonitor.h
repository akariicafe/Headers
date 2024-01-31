@class AVOutputContext, _DKEvent, NSNumber;

@interface _DKNowPlayingMonitor : _DKMonitor {
    _DKEvent *_previousEvent;
    NSNumber *_previousArtistStoreIdentifier;
    NSNumber *_previousAlbumStoreIdentifier;
    unsigned int _bmSaveState;
}

@property (nonatomic) unsigned int lastPlaybackState;
@property (retain, nonatomic) AVOutputContext *outputContext;

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (void)setPlaybackState:(unsigned int)a0 bundleId:(id)a1 track:(id)a2 outputDeviceIDs:(id)a3 mediaType:(id)a4 iTunesStoreIdentifier:(id)a5 iTunesSubscriptionIdentifier:(id)a6;
+ (id)entitlements;
+ (id)_eventWithBundleIdentifier:(id)a0 metadata:(id)a1;
+ (id /* block */)_eventFilterBlock;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)_stripMetadata:(id)a0 forBundleId:(id)a1;
- (void)saveBMEventWithCurrent:(id)a0 outputDevices:(id)a1 artistStoreIdentifier:(id)a2 albumStoreIdentifier:(id)a3;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)_nowPlayingInfoDidChange:(void *)a0 outputDevices:(id)a1;
- (void)outputDevicesDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_metadataFromInfo:(id)a0 outputDevices:(id)a1;
- (void)_registerForNowPlayingNotifications;
- (void)deactivate;

@end
