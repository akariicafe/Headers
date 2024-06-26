@class NSString;

@interface IMLibraryPlist : NSObject

@property (nonatomic) long long kind;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *directory;
@property (readonly, nonatomic) NSString *sidecarPath;

+ (id)languageFromPlistEntry:(id)a0;
+ (id)folderNameFromPlistEntry:(id)a0;
+ (id)keyNameForLastOpened;
+ (id)pageProgressionFromPlistEntry:(id)a0;
+ (id)keyNameForAccessDate;
+ (id)coverWritingModeFromPlistEntry:(id)a0;
+ (id)keyNameForSortTitle;
+ (id)keyNameForGeneration;
+ (id)stashedSampleRepositoryPath;
+ (id)packageFileHashFromItunesMetadataEntry:(id)a0;
+ (id)keyNameForUniqueId;
+ (id)endOfBookExperiencesFromItunesMetadataEntry:(id)a0;
+ (id)keyNameForPublisherUniqueID;
+ (id)keyNameForIsEphemeral;
+ (id)temporaryItemIdentifierFromPlistEntry:(id)a0;
+ (id)keyNameForAuthor;
+ (id)keyNameForStorePlaylistId;
+ (id)languagesFromPlistEntry:(id)a0;
+ (id)humanReadablePublicationVersionFromPlistEntry:(id)a0;
+ (id)keyNameForPrimaryLanguage;
+ (id)publicationVersionFromPlistEntry:(id)a0;
+ (id)experienceParamsFromExperienceEntry:(id)a0;
+ (id)scrollDirectionFromPlistEntry:(id)a0;
+ (id)coverHashFromItunesMetadataEntry:(id)a0;
+ (id)assetTypeFromPlistEntry:(id)a0;
+ (id)keyNameForSampleAsset;
+ (id)sortAuthorFromPlistEntry:(id)a0;
+ (id)feedURLFromPlistEntry:(id)a0;
+ (id)lookupAssetURLStringFromAssetID:(id)a0 contents:(id)a1;
+ (id)mimeTypeFromPlistEntry:(id)a0;
+ (id)publicationVersionNumberFromPlistEntry:(id)a0;
+ (id)assetIDFromPlistEntry:(id)a0 forAssetAtPath:(id)a1;
+ (id)sharedContainerURL;
+ (id)extensionFromPlistEntry:(id)a0;
+ (id)keyNameForHumanReadablePublicationVersion;
+ (id)keyNameForBooksArray;
+ (id)libraryPlistWithKind:(long long)a0;
+ (id)keyNameForSubject;
+ (void)setDeletesArray:(id)a0 toPlistEntry:(id)a1;
+ (id)experienceLocationFromExperienceEntry:(id)a0;
+ (id)keyNameForHighWaterMark;
+ (id)lookupLanguageFromAssetID:(id)a0 contents:(id)a1;
+ (id)lookupBackupFolderNameFromAssetID:(id)a0 contents:(id)a1;
+ (id)experienceKindFromExperienceEntry:(id)a0;
+ (id)experienceConfidenceFromExperienceParamEntry:(id)a0;
+ (id)keyNameForIsSupplementalContent;
+ (id)uniqueIDFromItunesMetadataEntry:(id)a0;
+ (id)keyNameForFirstOpened;
+ (id)isEphemeralFromPlistEntry:(id)a0;
+ (id)titleFromItunesMetadataEntry:(id)a0;
+ (BOOL)isSupplementalContentFromPlistEntry:(id)a0;
+ (id)sampleRepositoryPath;
+ (id)persistentIDFromPlistEntry:(id)a0;
+ (id)isItunesUFromPlistEntry:(id)a0;
+ (id)lookupPublicationVersionNumberFromAssetID:(id)a0 contents:(id)a1;
+ (id)entryForAssetID:(id)a0 contents:(id)a1;
+ (id)titleFromPlistEntry:(id)a0;
+ (id)publisherUniqueIDFromItunesMetadataEntry:(id)a0;
+ (id)experienceLocationTypeFromExperienceEntry:(id)a0;
+ (id)collectionIdFromPlistEntry:(id)a0;
+ (id)purchasesRepositoryPath;
+ (id)isSampleFromPlistEntry:(id)a0;
+ (id)accessDateFromPlistEntry:(id)a0;
+ (id)keyNameForBackupPath;
+ (id)backupFolderNameFromPlistEntry:(id)a0;
+ (id)keyNameForAssetType;
+ (id)keyNameForImportDate;
+ (id)coverPathFromPlistEntry:(id)a0;
+ (id)assetIDFromItunesMetadataEntry:(id)a0;
+ (id)keyNameForStoreId2;
+ (id)keyNameForTitle;
+ (id)experienceVersionFromExperienceEntry:(id)a0;
+ (id)keyNameForGenre;
+ (id)genreFromPlistEntry:(id)a0;
+ (id)keyNameForScrollDirection;
+ (id)bookEpubIdFromPlistEntry:(id)a0;
+ (id)keyNameForReadingLocation;
+ (id)isProofedAssetFromPlistEntry:(id)a0;
+ (id)keyNameForRating;
+ (void)setAccessDate:(id)a0 toPlistEntry:(id)a1;
+ (id)booksArrayFromPlistEntry:(id)a0;
+ (id)deletesArrayFromPlistEntry:(id)a0;
+ (id)assetIDFromPlistEntry:(id)a0;
+ (id)keyNameForDeletesArray;
+ (id)importDateFromPlistEntry:(id)a0;
+ (id)coverPathFromItunesMetadataEntry:(id)a0;
+ (id)keyNameForExplicitContent;
+ (id)storePlaylistIdFromPlistEntry:(id)a0;
+ (id)keyNameForPublicationVersion;
+ (id)keyNameForLanguages;
+ (id)isManagedBookFromURL:(id)a0;
+ (id)lookupFolderNameFromAssetID:(id)a0 contents:(id)a1;
+ (id)keyNameForStoreId;
+ (id)keyNameForSortAuthor;
+ (id)lookupScrollDirectionFromAssetID:(id)a0 contents:(id)a1;
+ (id)storeIdFromPlistEntry:(id)a0;
+ (id)sortTitleFromPlistEntry:(id)a0;
+ (id)sharedRepositoryPath;
+ (id)keyNameForComments;
+ (id)keyNameForPageProgression;
+ (id)keyNameForPath;
+ (id)booksRepositoryPath;
+ (id)keyNameForYear;
+ (id)managedRepositoryPath;
+ (id)lookupPublicationVersionFromAssetID:(id)a0 contents:(id)a1;
+ (id)entryForAssetURL:(id)a0 contents:(id)a1;
+ (id)keyNameForProofedAsset;
+ (id)lookupPageProgressionFromAssetID:(id)a0 contents:(id)a1;
+ (id)primaryLanguageFromPlistEntry:(id)a0;
+ (id)uniqueIdFromPlistEntry:(id)a0;
+ (id)permlinkFromPlistEntry:(id)a0;
+ (id)keyNameForCollectionId;
+ (id)albumFromPlistEntry:(id)a0;
+ (id)authorFromPlistEntry:(id)a0;
+ (id)lookupHumanReadablePublicationVersionFromAssetID:(id)a0 contents:(id)a1;
+ (id)isExplicitContentFromPlistEntry:(id)a0;
+ (BOOL)isPDFFromPlistEntry:(id)a0;
+ (void)setBooksArray:(id)a0 toPlistEntry:(id)a1;
+ (id)keyNameForBookDescription;
+ (id)lookupCoverWritingModeFromAssetID:(id)a0 contents:(id)a1;
+ (id)keyNameForCoverWritingMode;
+ (id)keyNameForFlavor;

- (void)removeDeletedPaths:(id)a0;
- (id)p_contents:(id)a0;
- (id)contents;
- (id)_initWithDirectory:(id)a0 fileName:(id)a1;
- (id)unfilteredContents;
- (void)addDeletedFiles:(id)a0;
- (id)unfilteredSidecarContents;
- (BOOL)isPathInDirectory:(id)a0;
- (void).cxx_destruct;
- (id)calculateChecksum;
- (BOOL)bumpModificationDate;
- (void)p_rewriteSidecarWithDeletes:(id)a0;

@end
