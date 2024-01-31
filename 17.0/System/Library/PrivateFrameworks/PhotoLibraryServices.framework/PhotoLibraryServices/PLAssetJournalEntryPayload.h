@class NSArray, NSString, NSDictionary;

@interface PLAssetJournalEntryPayload : PLManagedObjectJournalEntryPayload {
    NSDictionary *_keywordUUIDRemapping;
}

@property (readonly, nonatomic) NSArray *resources;
@property (readonly, nonatomic) short savedAssetType;
@property (readonly, nonatomic) NSString *mediaGroupUUID;

+ (unsigned int)payloadVersion;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)snapshotSortDescriptors;

- (BOOL)hasAdjustments;
- (unsigned short)bundleScope;
- (id)uniformTypeIdentifier;
- (id)filename;
- (id)directory;
- (short)kind;
- (id)hdrGain;
- (id)latitude;
- (unsigned short)playbackVariation;
- (void)setKind:(short)a0;
- (id)dateCreated;
- (void).cxx_destruct;
- (void)setLocation:(id)a0;
- (id)longitude;
- (BOOL)isImage;
- (BOOL)isVideo;
- (unsigned short)playbackStyle;
- (id)adjustmentFormatIdentifier;
- (id)adjustmentFormatVersion;
- (short)kindSubtype;
- (id)locationData;
- (id)originalUniformTypeIdentifier;
- (void)setPlaybackStyle:(unsigned short)a0;
- (id)cloudMasterGUID;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (void)_convertCustomRenderedValueToHDRType;
- (void)_convertDepthStatesToDepthType;
- (void)_filterNonPersistedResources;
- (void)_fixAdjustedAssetUTI;
- (void)_fixDateCreatedSourceWithAdditionalAssetAttributes:(id)a0;
- (void)_fixHDRGainZeroValueToNULL;
- (void)_fixLocationData;
- (void)_fixResourceTypeUnknownValues;
- (void)_fixXMPSidecarUTI;
- (id)_loadOriginalImageMetadataWithPathManager:(id)a0 timezoneLookup:(id)a1;
- (id)_loadOriginalVideoMetadataWithPathManager:(id)a0 timezoneLookup:(id)a1;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (void)applyPayloadProperty:(id)a0 toManagedObject:(id)a1 key:(id)a2 payloadAttributesToUpdate:(id)a3;
- (unsigned long long)bestCPLResourceTypeForAdjustedFingerPrint;
- (long long)dateCreatedSource;
- (id)extendedAttributesLatitude;
- (id)extendedAttributesLongitude;
- (id)highFrameRateState;
- (id)initWithAdditionalAssetAttributes:(id)a0 changedKeys:(id)a1;
- (id)initWithAssetDescription:(id)a0 changedKeys:(id)a1;
- (id)initWithCloudMaster:(id)a0 payloadID:(id)a1 changedKeys:(id)a2;
- (id)initWithCloudMasterMediaMetadata:(id)a0 payloadID:(id)a1 changedKeys:(id)a2 modelProperties:(id)a3;
- (id)initWithEditedIPTCAttributes:(id)a0 changedKeys:(id)a1;
- (id)initWithExtendedAttributes:(id)a0 changedKeys:(id)a1;
- (id)initWithInternalResource:(id)a0 filesystemBookmark:(id)a1 changedKeys:(id)a2;
- (id)initWithUnmanagedAdjustment:(id)a0 changedKeys:(id)a1;
- (id)insertAssetFromDataInManagedObjectContext:(id)a0 keywordUUIDRemapping:(id)a1 rawPayloadAttributesToUpdate:(id)a2;
- (BOOL)isDefaultAdjustedSlomo;
- (void)mergePayload:(id)a0;
- (void)migrateMergedPayloadWithUpdatePayloads:(id)a0;
- (id)originalOrientation;
- (id)originalResourceRelativePathsWithPathManager:(id)a0;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (void)setDateCreatedSource:(long long)a0;
- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;

@end
