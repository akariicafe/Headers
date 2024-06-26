@class AVDispatchOnce, AVWeakReference, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVFigAssetTrackInspector : AVAssetTrackInspector {
    struct OpaqueFigAsset { } *_figAsset;
    struct OpaqueFigAssetTrack { } *_figAssetTrack;
    AVDispatchOnce *_copyFigFormatReaderOnce;
    struct OpaqueFigFormatReader { } *_figFormatReader;
    AVDispatchOnce *_copyFigTrackReaderOnce;
    struct OpaqueFigTrackReader { } *_figTrackReader;
    AVDispatchOnce *_copySampleCursorServiceOnce;
    struct OpaqueFigSampleCursorService { } *_figSampleCursorService;
    BOOL _sampleCursorTimeAccuracyIsExact;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    NSMutableArray *_loadingBatches;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
    BOOL _prefersNominalDurations;
}

- (id)segments;
- (float)preferredVolume;
- (BOOL)_isDefunct;
- (BOOL)isPlayable;
- (long long)layer;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })gaplessSourceTimeRange;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (BOOL)requiresFrameReordering;
- (id)_loadingBatches;
- (unsigned long long)hash;
- (struct CGSize { double x0; double x1; })dimensions;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (int)naturalTimeScale;
- (void)dealloc;
- (long long)alternateGroupID;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)languageCode;
- (struct OpaqueFigFormatReader { } *)_figFormatReader;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (BOOL)segmentsExcludeAudioPrimingAndRemainderDurations;
- (id)availableMetadataFormats;
- (BOOL)isAudibleBooksContentAuthorized;
- (float)estimatedDataRate;
- (void)_removeFigNotifications;
- (float)nominalFrameRate;
- (BOOL)hasSeamSamples;
- (int)playabilityValidationResult;
- (id)formatDescriptions;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (id)commonMetadata;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (id)extendedLanguageTag;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)_segmentsForProperty:(struct __CFString { } *)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })mediaDecodeTimeRange;
- (id)metadataForFormat:(id)a0;
- (BOOL)isEnabled;
- (id)asset;
- (long long)_loadStatusForFigAssetTrackProperty:(id)a0 error:(id *)a1;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (id)mediaType;
- (long long)totalSampleDataLength;
- (id)loudnessInfo;
- (int)trackID;
- (int)decodabilityValidationResult;
- (BOOL)hasProtectedContent;
- (long long)provisionalAlternateGroupID;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (id)segmentsAsPresented;
- (void)_addFigNotifications;
- (long long)defaultAlternateGroupID;
- (BOOL)hasAudibleBooksContent;
- (BOOL)isEqual:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })mediaPresentationTimeRange;
- (float)peakDataRate;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;
- (BOOL)isSelfContained;
- (struct OpaqueFigAssetTrack { } *)_figAssetTrack;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minSampleDuration;
- (id)_trackReferences;
- (struct __CFString { } *)figAssetPropertyForSegments;
- (unsigned int)_figMediaType;
- (BOOL)isDecodable;

@end
