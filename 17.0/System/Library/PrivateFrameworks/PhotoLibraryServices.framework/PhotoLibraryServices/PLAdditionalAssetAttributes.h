@class PLEditedIPTCAttributes, PLSceneprint, CLLocation, NSDate, PLAssetDescription, PLCloudMasterMediaMetadata, PLSpatialOverCaptureInformation, NSString, NSSet, PLManagedAsset, NSNumber, NSData, PLUnmanagedAdjustment, CPLScopedIdentifier;

@interface PLAdditionalAssetAttributes : PLManagedObject <PLPTPTransferableAdditionalAssetAttributes>

@property (readonly, copy, nonatomic) NSString *masterFingerPrint;
@property (readonly, copy, nonatomic) NSString *originatingAssetIdentifier;
@property (readonly, retain, nonatomic) NSNumber *embeddedThumbnailHeight;
@property (readonly, retain, nonatomic) NSNumber *embeddedThumbnailLength;
@property (readonly, retain, nonatomic) NSNumber *embeddedThumbnailOffset;
@property (readonly, retain, nonatomic) NSNumber *embeddedThumbnailWidth;
@property (readonly, retain, nonatomic) NSString *exifTimestampString;
@property (readonly, nonatomic) long long ptpTrashedState;
@property (readonly, retain, nonatomic) PLSpatialOverCaptureInformation *spatialOverCaptureInformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *longDescription;
@property (retain, nonatomic) NSData *mediaMetadataData;
@property (retain, nonatomic) PLSceneprint *sceneprint;
@property (nonatomic) short destinationAssetCopyState;
@property (readonly) PLSpatialOverCaptureInformation *spatialOverCaptureInformation;
@property (retain, nonatomic, setter=_setCachedShiftedLocation:) CLLocation *_cachedShiftedLocation;
@property (retain, nonatomic) NSString *sourceAssetForDuplicationIdentifier;
@property (retain, nonatomic) NSString *sourceAssetForDuplicationScopeIdentifier;
@property (retain, nonatomic) NSString *importedByBundleIdentifier;
@property (retain, nonatomic) NSString *importedByDisplayName;
@property (retain, nonatomic) NSString *editorBundleID;
@property (retain, nonatomic) NSString *exifTimestampString;
@property (retain, nonatomic) NSNumber *embeddedThumbnailHeight;
@property (retain, nonatomic) NSNumber *embeddedThumbnailLength;
@property (retain, nonatomic) NSNumber *embeddedThumbnailOffset;
@property (retain, nonatomic) NSNumber *embeddedThumbnailWidth;
@property (retain, nonatomic) NSString *montage;
@property (retain, nonatomic) id originalAssetsUUID;
@property (retain, nonatomic) NSString *originalFilename;
@property (retain, nonatomic) NSNumber *originalFilesize;
@property (retain, nonatomic) NSData *originalHash;
@property (retain, nonatomic) NSNumber *originalHeight;
@property (retain, nonatomic) NSNumber *originalOrientation;
@property (retain, nonatomic) NSNumber *originalResourceChoice;
@property (retain, nonatomic) NSNumber *originalWidth;
@property (retain, nonatomic) NSString *publicGlobalUUID;
@property (retain, nonatomic) NSData *reverseLocationData;
@property (retain, nonatomic) NSNumber *reverseLocationDataIsValid;
@property (nonatomic) short dateCreatedSource;
@property (retain, nonatomic) NSString *timeZoneName;
@property (retain, nonatomic) NSNumber *timeZoneOffset;
@property (retain, nonatomic) NSNumber *inferredTimeZoneOffset;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *accessibilityDescription;
@property (retain, nonatomic) NSDate *lastUploadAttemptDate;
@property (retain, nonatomic) NSNumber *uploadAttempts;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (retain, nonatomic) NSSet *keywords;
@property (retain, nonatomic) PLUnmanagedAdjustment *unmanagedAdjustment;
@property (retain, nonatomic) NSNumber *locationHash;
@property (retain, nonatomic) PLAssetDescription *assetDescription;
@property (retain, nonatomic) NSData *faceRegions;
@property (retain, nonatomic) NSData *objectSaliencyRectsData;
@property (retain, nonatomic) NSSet *personReferences;
@property (nonatomic) short cameraCaptureDevice;
@property (copy, nonatomic) NSString *originatingAssetIdentifier;
@property (copy, nonatomic) NSString *spatialOverCaptureGroupIdentifier;
@property (nonatomic) long long playCount;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long viewCount;
@property (nonatomic) long long pendingPlayCount;
@property (nonatomic) long long pendingShareCount;
@property (nonatomic) long long pendingViewCount;
@property (copy, nonatomic) NSDate *lastViewedDate;
@property (nonatomic) BOOL allowedForAnalysis;
@property (nonatomic) unsigned long long cloudRecoveryState;
@property (nonatomic) short cloudStateRecoveryAttemptsCount;
@property (nonatomic) short importedBy;
@property (nonatomic) long long ptpTrashedState;
@property (nonatomic) short shareType;
@property (copy, nonatomic) NSString *shareOriginator;
@property (copy, nonatomic) NSString *deferredPhotoIdentifier;
@property (nonatomic) unsigned short deferredProcessingCandidateOptions;
@property (retain, nonatomic) PLCloudMasterMediaMetadata *mediaMetadata;
@property (retain, nonatomic) NSString *mediaMetadataType;
@property (retain, nonatomic) NSString *photoStreamTagId;
@property (retain, nonatomic) NSSet *sceneClassifications;
@property (retain, nonatomic) NSSet *temporalSceneClassifications;
@property (nonatomic) short sceneAnalysisVersion;
@property (retain, nonatomic) NSDate *sceneAnalysisTimestamp;
@property (nonatomic) BOOL sceneAnalysisIsFromPreview;
@property (retain, nonatomic) NSData *distanceIdentity;
@property (nonatomic) int cloudAvalanchePickType;
@property (nonatomic) short cloudKindSubtype;
@property (nonatomic) BOOL shiftedLocationIsValid;
@property (retain, nonatomic) NSData *shiftedLocationData;
@property (nonatomic) int videoCpDurationTimescale;
@property (nonatomic) long long videoCpDisplayValue;
@property (nonatomic) int videoCpDisplayTimescale;
@property (copy, nonatomic) NSString *masterFingerPrint;
@property (copy, nonatomic) NSString *adjustedFingerPrint;
@property (retain, nonatomic) NSData *placeAnnotationData;
@property (retain, nonatomic) CLLocation *shiftedLocation;
@property (nonatomic) unsigned long long variationSuggestionStates;
@property (retain, nonatomic) NSDate *alternateImportImageDate;
@property (retain, nonatomic) PLEditedIPTCAttributes *editedIPTCAttributes;
@property (nonatomic) double gpsHorizontalAccuracy;
@property (retain, nonatomic) NSString *syndicationIdentifier;
@property (nonatomic) unsigned short syndicationHistory;
@property (retain, nonatomic) CPLScopedIdentifier *sourceAssetForDuplicationCPLScopedIdentifier;
@property (nonatomic) short faceAnalysisVersion;
@property (retain, nonatomic) NSSet *libraryScopeAssetContributorsToUpdate;
@property (nonatomic) unsigned short duplicateDetectorPerceptualProcessingState;

+ (id)entityName;
+ (BOOL)shouldPersistImportedByDisplayName:(id)a0;
+ (id)descriptionForDestinationAssetCopyState:(short)a0;
+ (id)predicateToIncludeOnlyAllowedForAnalysisWithNoindex:(BOOL)a0;
+ (void)fromExtraDurationData:(id)a0 getStillDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2;
+ (id)predicateToIncludeOnlyAllowedForAnalysisAndProcessedToSceneVersion:(id)a0 noindex:(BOOL)a1;
+ (id)predicateToIncludeOnlyAllowedForAnalysisAndProcessedToFaceVersion:(id)a0 noindex:(BOOL)a1;
+ (id)newExtraDurationDataFromStillDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (id)predicateToIncludeOnlyAllowedForAnalysisAndProcessedToLatestSceneVersionWithNoindex:(BOOL)a0;
+ (id)listOfSyncedProperties;
+ (id)predicateToIncludeOnlyAllowedForAnalysisAndProcessedToLatestFaceVersionWithNoindex:(BOOL)a0;

- (void)willSave;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (void)setSceneprintWithData:(id)a0;
- (id)duplicateSortPropertyNames;
- (BOOL)hasDuplicateMatchingData;
- (BOOL)supportsCloudUpload;
- (BOOL)isSyncableChange;
- (id)allSceneClassifications;
- (void)setCloudRecoveryStateFlag:(unsigned long long)a0;
- (void)_updateInferredTimeZoneOffsetWithChangedValues:(id)a0;
- (void)setShiftedLocationIsValid:(BOOL)a0;
- (void)addDuplicateDetectorPerceptualProcessingStates:(unsigned short)a0 removeProcessingStates:(unsigned short)a1;
- (void)truncatedOriginalCheckChangedValues:(id)a0;
- (BOOL)isUserInterfaceChange;
- (BOOL)containsDuplicateDetectorPerceptualProcessingState:(unsigned short)a0;
- (id)duplicateSortPropertyNamesSkip;
- (BOOL)hasConsistentCloudState;
- (void).cxx_destruct;
- (id)sourceAssetForDuplicationCPLScopedIdentifier;
- (void)resetCloudRecoveryState;
- (void)appendLibraryScopeAssetContributorsToUpdate:(id)a0;
- (void)correctOriginalOrientationIfRequired;
- (BOOL)hasCloudRecoveryStateFlagSet:(unsigned long long)a0;
- (void)setDuplicateMatchingData:(id)a0 duplicateMatchingAlternateData:(id)a1 processingSucceeded:(BOOL)a2;
- (void)removeCloudRecoveryStateFlag:(unsigned long long)a0;
- (void)setSourceAssetForDuplicationCPLScopedIdentifier:(id)a0;

@end
