@interface PLFileSystemVolumeJournalEntryPayload : PLManagedObjectJournalEntryPayload

+ (unsigned int)payloadVersion;
+ (id)modelProperties;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;

- (id)insertFileSystemVolumeFromDataInManagedObjectContext:(id)a0;

@end
