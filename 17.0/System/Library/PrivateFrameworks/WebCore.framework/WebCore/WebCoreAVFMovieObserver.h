@class NSString;

@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate, AVPlayerItemMetadataOutputPushDelegate, AVPlayerItemMetadataCollectorPushDelegate> {
    struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_player;
    int m_delayCallbacks;
    struct RefPtr<WTF::WorkQueue, WTF::RawPtrTraits<WTF::WorkQueue>, WTF::DefaultRefDerefTraits<WTF::WorkQueue>> { struct WorkQueue *m_ptr; } m_backgroundQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disconnect;
- (id).cxx_construct;
- (id)initWithPlayer:(void *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(int)a3;
- (void).cxx_destruct;
- (void)legibleOutput:(id)a0 didOutputAttributedStrings:(id)a1 nativeSampleBuffers:(id)a2 forItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)metadataCollector:(id)a0 didCollectDateRangeMetadataGroups:(id)a1 indexesOfNewGroups:(id)a2 indexesOfModifiedGroups:(id)a3;
- (void)metadataOutput:(id)a0 didOutputTimedMetadataGroups:(id)a1 fromPlayerItemTrack:(id)a2;
- (void)outputSequenceWasFlushed:(id)a0;
- (void)didEnd:(id)a0;
- (void)chapterMetadataDidChange:(id)a0;
- (void)metadataLoaded;

@end
