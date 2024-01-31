@interface ML3Album : ML3Collection

+ (id)databaseTable;
+ (void)initialize;
+ (id)allProperties;
+ (id)joinClausesForProperty:(id)a0;
+ (id)defaultOrderingTerms;
+ (long long)revisionTrackingCode;
+ (id)trackForeignPersistentID;
+ (BOOL)assistantLibraryContentsChangeForProperty:(id)a0;
+ (id)countingQueryForBaseQuery:(id)a0 countProperty:(id)a1 forIdentifier:(long long)a2;
+ (id)foreignPropertyForProperty:(id)a0 entityClass:(Class)a1;
+ (BOOL)libraryContentsChangeForProperty:(id)a0;
+ (BOOL)libraryDynamicChangeForProperty:(id)a0;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (BOOL)propertyIsCountProperty:(id)a0;
+ (id)protocolItemWithProperties:(id)a0 inLibrary:(id)a1;

- (id)multiverseIdentifier;
- (id)protocolItem;
- (id)protocolItemForDynamicUpdate;
- (void)updateTrackValues:(id)a0;

@end
