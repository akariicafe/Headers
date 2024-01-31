@class NSURL, AVAssetInspector, NSMutableArray;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSMutableArray *_keysAwaitingCompletion;
    long long _status;
    int _basicInspectionFailureCode;
    NSURL *_URL;
}

- (BOOL)isExportable;
- (BOOL)isPlayable;
- (id)lyrics;
- (long long)fragmentCount;
- (BOOL)isReadable;
- (long long)_status;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (id)initWithURL:(id)a0;
- (void)dealloc;
- (BOOL)_isStreaming;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)assetInspector;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)URL;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (BOOL)_inspectionRequiresAFormatReader;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (BOOL)isComposable;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (BOOL)hasProtectedContent;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (long long)firstFragmentSequenceNumber;
- (id)figChapterGroupInfo;
- (void)cancelLoading;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (id)_loadValuesWhileMutexLockedForKeys:(id)a0;
- (BOOL)_providesAccurateTiming;
- (void)_serverHasDied;
- (void)_setStatus:(long long)a0 figErrorCode:(int)a1;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (long long)_statusOfValueWhileMutexLockedForKey:(id)a0 error:(id *)a1;
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)a0;
- (BOOL)_updateStatusWhileMutexLocked:(long long)a0 figErrorCode:(int)a1;

@end
