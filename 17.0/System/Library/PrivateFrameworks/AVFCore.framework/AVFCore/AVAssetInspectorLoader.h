@class NSArray, AVWeakReference, NSURL, NSString;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
    AVWeakReference *_weakReference;
}

@property (readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset { } *figAsset;
@property (readonly, nonatomic, getter=_playbackItem) struct OpaqueFigPlaybackItem { } *playbackItem;
@property (readonly, nonatomic, getter=_classForTrackInspectors) Class classForTrackInspectors;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) NSArray *variants;
@property (readonly, nonatomic) NSString *lyrics;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly, nonatomic, getter=isExportable) BOOL exportable;
@property (readonly, nonatomic, getter=isReadable) BOOL readable;
@property (readonly, nonatomic, getter=isComposable) BOOL composable;
@property (readonly, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) BOOL compatibleWithSavedPhotosAlbum;
@property (readonly, nonatomic) NSArray *figChapterGroupInfo;
@property (readonly, nonatomic) NSArray *figChapters;
@property (readonly, nonatomic) NSURL *resolvedURL;
@property (readonly, nonatomic) NSURL *originalNetworkContentURL;
@property (readonly, nonatomic) unsigned long long downloadToken;
@property (readonly, nonatomic) NSArray *contentKeySpecifiersEligibleForPreloading;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic, getter=_isStreaming) BOOL streaming;
@property (readonly, nonatomic, getter=_prefersNominalDurations) BOOL prefersNominalDurations;
@property (readonly, nonatomic) long long firstFragmentSequenceNumber;
@property (readonly, nonatomic) long long fragmentCount;
@property (readonly, nonatomic, getter=isAssociatedWithFragmentMinder) BOOL associatedWithFragmentMinder;
@property (nonatomic, getter=_fragmentMindingInterval, setter=_setFragmentMindingInterval:) double fragmentMindingInterval;

+ (void)initialize;

- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (id)init;
- (void)dealloc;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)assetInspector;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancelLoading;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_createAVErrorForError:(id)a0 andFigErrorCode:(int)a1;
- (void)_serverHasDied;

@end
