@class NSString;

@interface PLKeywordJournalEntryPayload : PLManagedObjectJournalEntryPayload

@property (readonly, nonatomic) NSString *title;

+ (unsigned int)payloadVersion;
+ (id)modelProperties;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;

- (id)insertKeywordFromDataInManagedObjectContext:(id)a0;

@end
