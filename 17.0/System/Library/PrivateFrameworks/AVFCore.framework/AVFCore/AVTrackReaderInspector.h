@class AVDispatchOnce, AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigTrackReader { } *_trackReader;
    AVDispatchOnce *_copySampleCursorServiceOnce;
    struct OpaqueFigSampleCursorService { } *_figSampleCursorService;
    BOOL _sampleCursorTimeAccuracyIsExact;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
    BOOL _prefersNominalDurations;
}

- (id)segments;
- (float)preferredVolume;
- (BOOL)isPlayable;
- (long long)layer;
- (BOOL)requiresFrameReordering;
- (unsigned long long)hash;
- (struct CGSize { double x0; double x1; })dimensions;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (int)naturalTimeScale;
- (void)dealloc;
- (long long)alternateGroupID;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (id)languageCode;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (id)availableMetadataFormats;
- (float)estimatedDataRate;
- (float)nominalFrameRate;
- (int)playabilityValidationResult;
- (id)formatDescriptions;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (id)commonMetadata;
- (id)extendedLanguageTag;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)metadataForFormat:(id)a0;
- (BOOL)isEnabled;
- (id)asset;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (id)mediaType;
- (long long)totalSampleDataLength;
- (id)loudnessInfo;
- (int)trackID;
- (int)decodabilityValidationResult;
- (long long)provisionalAlternateGroupID;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (id)segmentsAsPresented;
- (long long)defaultAlternateGroupID;
- (BOOL)isEqual:(id)a0;
- (float)peakDataRate;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;
- (BOOL)isSelfContained;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minSampleDuration;
- (id)_trackReferences;
- (unsigned int)_figMediaType;
- (BOOL)isDecodable;
- (id)_segmentsPreferringNominalDurations:(BOOL)a0;
- (BOOL)hasAudioSampleDependencies;
- (id)mediaCharacteristics;

@end
