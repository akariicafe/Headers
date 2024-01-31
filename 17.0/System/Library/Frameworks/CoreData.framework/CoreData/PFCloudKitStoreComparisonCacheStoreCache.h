@class NSString, NSMutableDictionary, NSMutableSet, NSNumber;

@interface PFCloudKitStoreComparisonCacheStoreCache : NSObject {
    NSMutableSet *_identifiers;
    NSMutableDictionary *_identifierToObjectID;
    NSMutableDictionary *_mtmKeyToMirroredRelationship;
    NSMutableSet *_mtmKeys;
    NSMutableDictionary *_zoneIDToMTMKeys;
    NSMutableDictionary *_recordIDToRelationshipNameToRelatedRecordIDs;
    NSMutableDictionary *_recordIDToMetadata;
    NSMutableDictionary *_objectIDToRecordMetadata;
    NSMutableSet *_recordIDs;
    NSMutableDictionary *_recordIDToObjectID;
    NSMutableDictionary *_objectIDToRecordID;
    NSMutableSet *_recordZones;
    NSMutableSet *_sharedRecordZones;
    NSMutableDictionary *_recordZoneIDToRecordIDs;
    BOOL _checkCloudKitMetadata;
    NSString *_identityRecordName;
    NSNumber *_databaseScopeNumber;
}

- (id)init;
- (void)dealloc;

@end
