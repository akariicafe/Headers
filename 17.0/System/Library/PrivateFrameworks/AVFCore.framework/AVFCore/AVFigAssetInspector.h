@class NSArray, AVDispatchOnce, NSURL, AVDisplayCriteria;

@interface AVFigAssetInspector : AVAssetInspector {
    struct OpaqueFigAsset { } *_figAsset;
    AVDispatchOnce *_checkIsStreamingOnce;
    AVDispatchOnce *_makeDisplayCriteriaOnce;
    AVDisplayCriteria *_displayCriteria;
    BOOL _isStreaming;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property (readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset { } *figAsset;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSArray *figChapterGroupInfo;
@property (readonly, nonatomic) NSArray *figChapters;
@property (readonly, nonatomic) NSURL *resolvedURL;
@property (readonly, nonatomic) NSURL *originalNetworkContentURL;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic, getter=_isStreaming) BOOL streaming;
@property (readonly, nonatomic) unsigned long long downloadToken;
@property (readonly, nonatomic) NSArray *variants;
@property (readonly, nonatomic) NSArray *contentKeySpecifiersEligibleForPreloading;

- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (BOOL)isExportable;
- (long long)trackCount;
- (float)preferredVolume;
- (BOOL)_isDefunct;
- (BOOL)isPlayable;
- (id)lyrics;
- (long long)fragmentCount;
- (BOOL)isReadable;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (unsigned long long)hash;
- (int)naturalTimeScale;
- (id)httpSessionIdentifier;
- (void)dealloc;
- (id)creationDate;
- (id)makePropertyListForProxyWithOptions:(id)a0;
- (long long)_moovAtomSize;
- (struct CGSize { double x0; double x1; })maximumVideoResolution;
- (BOOL)providesPreciseDurationAndTiming;
- (BOOL)_hasQTSaveRestriction;
- (id)availableMetadataFormats;
- (id)availableVideoDynamicRanges;
- (id)SHA1Digest;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (id)alternateTrackGroups;
- (float)preferredRate;
- (id)identifyingTagClass;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (id)commonMetadata;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)isComposable;
- (id)trackReferences;
- (id)metadataForFormat:(id)a0;
- (float)preferredSoundCheckVolumeNormalization;
- (id)_assetAnalysisMessages;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (id)_nameForProxy;
- (id)_mediaSelectionGroupDictionaries;
- (BOOL)containsFragments;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (long long)firstFragmentSequenceNumber;
- (BOOL)canContainFragments;
- (BOOL)supportsAnalysisReporting;
- (BOOL)isEqual:(id)a0;
- (id)preferredDisplayCriteria;
- (id)identifyingTag;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)propertyListForProxy;

@end
