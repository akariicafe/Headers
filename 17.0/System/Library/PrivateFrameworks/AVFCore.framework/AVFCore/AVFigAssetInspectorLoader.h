@class AVDispatchOnce, AVWeakReference, NSURL, AVAssetInspector, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {
    struct OpaqueFigAsset { } *_figAsset;
    int _figAssetCreationStatus;
    AVWeakReference *_weakReferenceToAsset;
    AVAssetInspector *_assetInspector;
    AVDispatchOnce *_assetInspectorOnce;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSMutableArray *_loadingBatches;
    BOOL _loadingCanceled;
    BOOL _registeredForFigAssetNotifications;
    BOOL _prefersNominalDurations;
    long long _fragmentMinderAssociationCount;
    NSURL *_URL;
}

+ (id)_figAssetTrackMediaSelectionPropertiesArray;
+ (void)_mapAssetKeys:(id)a0 toFigAssetPropertySet:(id)a1 figAssetTrackPropertySet:(id)a2 callerName:(id)a3;
+ (id)_figAssetTrackPropertiesForKeys;
+ (id)_figAssetMediaSelectionPropertiesArray;
+ (id)_figAssetPropertiesForKeys;

- (struct OpaqueFigAsset { } *)_figAsset;
- (BOOL)isExportable;
- (id)figChapters;
- (id)variants;
- (BOOL)isPlayable;
- (id)lyrics;
- (long long)fragmentCount;
- (BOOL)isReadable;
- (id)resolvedURL;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (id)_loadingBatches;
- (BOOL)_prefersNominalDurations;
- (void)dealloc;
- (void)_removeFigAssetNotifications;
- (id)contentKeySpecifiersEligibleForPreloading;
- (long long)_loadStatusForProperty:(id)a0 figAsset:(struct OpaqueFigAsset { } *)a1 error:(id *)a2;
- (BOOL)_isStreaming;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)assetInspector;
- (void)_addFigAssetNotifications;
- (id)URL;
- (id)originalNetworkContentURL;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (Class)_classForTrackInspectors;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (BOOL)isComposable;
- (unsigned long long)downloadToken;
- (double)_fragmentMindingInterval;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0 forAsset:(id)a1;
- (id)asset;
- (long long)_statusOfValueForKey:(id)a0 error:(id *)a1 firstNonLoadedDependencyKey:(id *)a2;
- (void)_setFragmentMindingInterval:(double)a0;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasProtectedContent;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (long long)firstFragmentSequenceNumber;
- (id)figChapterGroupInfo;
- (id)initWithURL:(id)a0 figAssetCreationFlags:(unsigned long long)a1 figAssetCreationOptions:(id)a2 avAssetInitializationOptions:(id)a3 forAsset:(id)a4 figErr:(int *)a5;
- (BOOL)isAssociatedWithFragmentMinder;
- (void)cancelLoading;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (id)_completionHandlerQueue;

@end
