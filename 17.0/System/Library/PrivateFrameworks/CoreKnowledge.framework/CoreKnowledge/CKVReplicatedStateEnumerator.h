@class NSString, NSMutableDictionary, NSNumber, NSObject;
@protocol CKVDatabaseReadOnlyAccess;

@interface CKVReplicatedStateEnumerator : NSObject {
    NSString *_userId;
    NSString *_originAppId;
    long long _itemType;
    NSNumber *_userIdHash;
    NSNumber *_datasetRowId;
    NSNumber *_localDeviceRowId;
    NSString *_localDeviceIdString;
    NSObject<CKVDatabaseReadOnlyAccess> *_databaseAccess;
    NSMutableDictionary *_deviceRowIdMap;
    NSMutableDictionary *_commandCache;
}

+ (id)_wrapContent:(id)a0;
+ (id)_wrapInstanceWithContent:(id)a0 metaContent:(id)a1;

- (void).cxx_destruct;
- (id)localDeviceIdentifier;
- (id)_contentHashesFromProvenanceRecords:(id)a0;
- (id)_createProvenanceSelectCommandFromVector:(id)a0 atomState:(unsigned char)a1 columns:(id)a2 originAppId:(id)a3 itemType:(long long)a4;
- (id)_fetchDeviceRecordsFromDatabase:(id)a0;
- (id)_fetchItemContentFromContentIdentitifier:(id)a0 databaseAccess:(id)a1;
- (id)_fetchItemContentRecordsFromCommand:(id)a0;
- (id)_fetchItemMetaContentFromMetaContentIdentities:(id)a0 databaseAccess:(id)a1;
- (id)_fetchProvenanceRecordsFromDatabase:(id)a0 originAppId:(id)a1 itemType:(long long)a2;
- (id)_findDatasetFromItemType:(long long)a0 originAppId:(id)a1;
- (id)_findProvenanceRecordsFromCommand:(id)a0;
- (id)_mapDeviceRecords:(id)a0;
- (id)_mapToDeviceContentFromProvenanceRecords:(id)a0;
- (id)_mapToDeviceIdentifiersFromProvenance:(id)a0;
- (id)_stateVectorFromProvenanceRecords:(id)a0 deviceRecordMap:(id)a1;
- (id)allLocalMetaContentIdentifersForContentIdentifier:(id)a0 originAppId:(id)a1 itemType:(long long)a2;
- (id)buildDatasetChangeFromEntityEnumerationRecord:(id)a0;
- (id)extractStateVectorTimestampsForItemType:(long long)a0 originAppId:(id)a1;
- (id)findContentHashesNotInState:(unsigned char)a0 from:(id)a1 originAppId:(id)a2 itemType:(long long)a3;
- (id)findItemDataPresentInVector:(id)a0 missingFromVector:(id)a1 originAppId:(id)a2 itemType:(long long)a3;
- (id)findItemsBasedOnVector:(id)a0 state:(unsigned char)a1 originAppId:(id)a2 itemType:(long long)a3;
- (id)findTimestampsAssociatedWithContentHash:(id)a0 originAppId:(id)a1 itemType:(long long)a2;
- (id)initWithUserId:(id)a0 originAppId:(id)a1 itemType:(long long)a2;
- (id)initWithUserId:(id)a0 originAppId:(id)a1 itemType:(long long)a2 indexManager:(id)a3;

@end
