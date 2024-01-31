@interface AVFormatReaderInspector : AVAssetInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

- (BOOL)isExportable;
- (long long)trackCount;
- (float)preferredVolume;
- (id)lyrics;
- (long long)fragmentCount;
- (BOOL)isReadable;
- (unsigned long long)hash;
- (int)naturalTimeScale;
- (void)dealloc;
- (BOOL)providesPreciseDurationAndTiming;
- (BOOL)_hasQTSaveRestriction;
- (id)availableMetadataFormats;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (id)alternateTrackGroups;
- (float)preferredRate;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (id)commonMetadata;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)isComposable;
- (id)trackReferences;
- (id)metadataForFormat:(id)a0;
- (float)preferredSoundCheckVolumeNormalization;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (BOOL)containsFragments;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (long long)firstFragmentSequenceNumber;
- (BOOL)canContainFragments;
- (BOOL)isEqual:(id)a0;
- (void)_setFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0;

@end
