@class NSURL, NSArray, NSDictionary, NSSet, NSMutableDictionary, NSMutableArray, NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitImportZoneContext : NSObject {
    NSArray *_updatedRecords;
    NSDictionary *_deletedRecordTypeToRecordID;
    NSSet *_deletedObjectIDs;
    NSArray *_modifiedRecords;
    NSMutableArray *_updatedRelationships;
    NSArray *_deletedRelationships;
    NSArray *_deletedMirroredRelationshipRecordIDs;
    NSMutableDictionary *_recordTypeToRecordIDToObjectID;
    NSMutableDictionary *_recordTypeToUnresolvedRecordIDs;
    NSMutableArray *_metadatasToLink;
    NSArray *_importOperations;
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    NSURL *_fileBackedFuturesDirectory;
    NSSet *_deletedShareRecordIDs;
}

- (void)dealloc;
- (id)initWithUpdatedRecords:(id)a0 deletedRecordTypeToRecordIDs:(id)a1 options:(id)a2 fileBackedFuturesDirectory:(id)a3;

@end
