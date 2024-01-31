@class NSDate, NSString, UTType, NSURL, NSSet, NSMutableDictionary, NSDictionary, NSTimeZone;

@interface PFAssetBundle : NSObject

@property (class, readonly) NSString *currentFormatVersion;
@property (class, readonly) UTType *contentType;

@property (copy, nonatomic) NSDictionary *propertyList;
@property (readonly, copy, nonatomic) NSMutableDictionary *metadata;
@property (readonly, nonatomic) BOOL didReadOriginalPairedVideoMetadata;
@property (copy, nonatomic) NSString *livePhotoOriginalPairingIdentifier;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } livePhotoOriginalImageDisplayTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } livePhotoOriginalVideoDuration;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) unsigned long long playbackVariation;
@property (readonly, nonatomic) unsigned short videoComplementVisibilityState;
@property (readonly, nonatomic) unsigned long long reframeVariation;
@property (readonly, nonatomic) NSURL *photoURL;
@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) NSURL *audioURL;
@property (readonly, nonatomic) NSURL *alternatePhotoURL;
@property (readonly, nonatomic) NSURL *fullSizePhotoURL;
@property (readonly, nonatomic) NSURL *fullSizeVideoURL;
@property (readonly, nonatomic) NSURL *adjustmentDataURL;
@property (readonly, nonatomic) NSURL *adjustmentBasePhotoURL;
@property (readonly, nonatomic) NSURL *pairedVideoURL;
@property (readonly, nonatomic) NSURL *fullSizePairedVideoURL;
@property (readonly, nonatomic) NSURL *adjustmentBasePairedVideoURL;
@property (readonly, nonatomic) NSURL *spatialOvercapturePhotoURL;
@property (readonly, nonatomic) NSURL *spatialOvercapturePairedVideoURL;
@property (readonly, nonatomic) NSURL *spatialOvercaptureVideoURL;
@property (readonly, nonatomic) NSURL *adjustmentBaseVideoURL;
@property (readonly, nonatomic) NSURL *originalAdjustmentDataURL;
@property (readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } livePhotoImageDisplayTime;
@property (copy, nonatomic) NSSet *keywordTitles;
@property (copy, nonatomic) NSString *assetDescription;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (copy, nonatomic) NSString *assetTitle;
@property (readonly, nonatomic) NSDate *libraryCreationDate;
@property (readonly, nonatomic) NSTimeZone *libraryCreationDateTimeZone;
@property (copy, nonatomic) NSString *originalFilename;
@property (retain, nonatomic) id libraryLocation;
@property (nonatomic) BOOL spatialOvercaptureResourcesPurgeable;

+ (BOOL)fileName:(id)a0 matchesRegex:(id)a1;
+ (id)insertAuxiliaryResourceTypeMarker:(id)a0 intoFileName:(id)a1;
+ (BOOL)isValidDCFFileName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPropertyList:(id)a0;
- (BOOL)writeToBundleAtURL:(id)a0 error:(id *)a1;
- (BOOL)isMediaSubtype:(unsigned long long)a0;
- (id)initWithAssetBundleAtURL:(id)a0;
- (id)initWithOriginalPhotoURL:(id)a0 alternatePhotoURL:(id)a1 fullSizePhotoURL:(id)a2 adjustmentBaseFullSizePhotoURL:(id)a3 spatialOvercapturePhotoURL:(id)a4 originalPairedVideoURL:(id)a5 fullSizePairedVideoURL:(id)a6 adjustmentBaseFullSizePairedVideoURL:(id)a7 spatialOvercapturePairedVideoURL:(id)a8 fullSizeVideoURL:(id)a9 adjustmentsURL:(id)a10 originalAdjustmentsURL:(id)a11 mediaSubtypes:(unsigned long long)a12 playbackStyle:(long long)a13 playbackVariation:(unsigned long long)a14 videoComplementVisibilityState:(unsigned short)a15 reframeVariation:(unsigned long long)a16;
- (id)initWithOriginalVideoURL:(id)a0 fullSizeRenderedVideoURL:(id)a1 adjustmentBaseVideoURL:(id)a2 spatialOvercaptureVideoURL:(id)a3 adjustmentsURL:(id)a4 originalAdjustmentsURL:(id)a5 mediaSubtypes:(unsigned long long)a6 playbackStyle:(long long)a7 playbackVariation:(unsigned long long)a8 reframeVariation:(unsigned long long)a9;
- (void)setLibraryCreationDate:(id)a0 inTimeZone:(id)a1;
- (BOOL)_pathExtension:(id)a0 matchesType:(id)a1 error:(id *)a2;
- (void)_readLivePhotoVideoMetadataIfNeeded;
- (BOOL)_verifyFileSourceExistsAtURL:(id)a0 error:(id *)a1;
- (BOOL)_writeFileAtURL:(id)a0 toDirectory:(id)a1 withUpdatedFilename:(id)a2 updateManifest:(id)a3 bundlePathKey:(id)a4 verifyUTIType:(struct __CFString { } *)a5 error:(id *)a6;
- (BOOL)_writeFileAtURL:(id)a0 toDirectory:(id)a1 withUpdatedFilename:(id)a2 writtenFileURL:(id *)a3 error:(id *)a4;
- (BOOL)_writeFileAtURL:(id)a0 toDirectory:(id)a1 writtenFileURL:(id *)a2 error:(id *)a3;
- (id)createAssetBundleWritingErrorWithDescription:(id)a0;
- (id)dcfCompliantFilenameBaseForWritingResourceFiles;
- (id)generateCustomFilenamesByPathKey;
- (BOOL)linkOrCopyURL:(id)a0 toURL:(id)a1 forceCopy:(BOOL)a2 error:(id *)a3;
- (id)urlsByPathKey;
- (BOOL)writeAllResourceURLsToDirectoryAtURL:(id)a0 updatingManifest:(id)a1 error:(id *)a2;
- (id)writeDowngradedRepresentationToDirectory:(id)a0 error:(id *)a1;
- (id)writeFolderRepresentationToDirectory:(id)a0 error:(id *)a1;

@end
