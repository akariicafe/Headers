@interface PXSharingSettings : PXSettings

@property (nonatomic) BOOL showConfidentialityWarnings;
@property (nonatomic) BOOL disableMailDrop;
@property (nonatomic) unsigned long long maxMessagesAssetLimit;
@property (nonatomic) unsigned long long maxMailPhotoLimit;
@property (nonatomic) BOOL showInternalGIFExport;
@property (nonatomic) BOOL allowCopyingVideos;
@property (nonatomic) unsigned long long confidentialityWarningsVersion;
@property (nonatomic) BOOL enableNewActionContextMenu;
@property (nonatomic) BOOL enableOneUpAnimation;
@property (nonatomic) BOOL allowFallbacksWhilePreparing;
@property (nonatomic) long long locationBakingComparisonStrategy;
@property (nonatomic) BOOL disableMetadataCorrections;
@property (nonatomic) BOOL forceDateTimeMetadataBaking;
@property (nonatomic) BOOL forceLocationMetadataBaking;
@property (nonatomic) BOOL forceCaptionMetadataBaking;
@property (nonatomic) BOOL forceAccessibilityDescriptionMetadataBaking;
@property (nonatomic) BOOL sendAssetURLsToMessages;
@property (nonatomic) BOOL simulateError;
@property (nonatomic) BOOL simulateDownloadFailure;
@property (nonatomic) BOOL simulateCPLNotReadyError;
@property (nonatomic) BOOL simulateLowDiskSpaceError;
@property (nonatomic) BOOL simulateUserCloudNotAuthenticated;
@property (nonatomic) BOOL simulateMaxFilesizeLimitForGIFsInSharedAlbumsError;
@property (nonatomic) BOOL simulateSyndicatedResourceUnavailable;
@property (nonatomic) BOOL simulateMismatchedExportCounts;
@property (nonatomic) BOOL showFileRadarButtonOnInternalInstalls;
@property (nonatomic) long long simulatedErrorType;
@property (nonatomic) BOOL showSingleVideoDurationInShareSheetHeader;
@property (nonatomic) long long sharingHeaderLocationDisplayStyle;
@property (nonatomic) BOOL showUnmodifiedOriginalsExportSwitch;
@property (nonatomic) BOOL showGlobalLivenessExclusionSwitch;
@property (nonatomic) BOOL showGlobalLocationExclusionSwitch;
@property (nonatomic) BOOL excludeLivenessByDefaultWhenSharing;
@property (nonatomic) BOOL excludeLocationByDefaultWhenSharing;
@property (nonatomic) BOOL showSendAsAssetBundlesForCMM;
@property (nonatomic) BOOL showSendAsAssetBundlesForIndividualItems;
@property (nonatomic) BOOL sendAsAssetBundlesByDefaultWhenSharing;
@property (nonatomic) BOOL savePhotosBundlesToFilesWithoutExtractingMedia;
@property (nonatomic) BOOL shouldUpdateFileCreationDatesForUnmodifiedOriginalExports;
@property (nonatomic) BOOL shouldUpdateFileCreationDatesForRegularExports;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (void)defaultValueDidChangeForKey:(id)a0;
- (id)debugDescription;

@end
