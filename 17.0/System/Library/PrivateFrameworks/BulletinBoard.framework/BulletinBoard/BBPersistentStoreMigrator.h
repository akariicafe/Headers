@interface BBPersistentStoreMigrator : NSObject

+ (id)_sectionIDsToMigrate;
+ (void)_migrateContentPreviewSettings:(id)a0;
+ (void)_migrateSectionIDs:(id)a0;
+ (void)_removeVestigialSections:(id)a0;
+ (id)_sectionIdentifiersForNonDefaultSectionCategoriesFromSectionInfos:(id)a0;
+ (id)_sectionIdentifiersForWeeAppsFromSectionInfos:(id)a0;
+ (void)migrateSectionInfoForStore:(id)a0;
+ (BOOL)removeSavedChronologicalSectionInfos:(id)a0;

@end
