@class NSDictionary, ML3MusicLibrary;

@interface ML3ExportItem : NSObject {
    NSDictionary *_properties;
}

@property (readonly, nonatomic) long long persistentId;
@property (readonly, nonatomic) ML3MusicLibrary *library;
@property (readonly, nonatomic) Class entityClass;

+ (unsigned int *)allExportPropertyKeysForEntityClass:(Class)a0 returnedCount:(unsigned int *)a1;

- (id)description;
- (id)valueForProperty:(unsigned int)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)stringValueForProperty:(unsigned int)a0;
- (id)exportData;
- (id)_propertyNamesFromKeys:(unsigned int *)a0 numKeys:(unsigned int)a1;
- (id)_allExportPropertyNames;
- (id)_propertyNameForKey:(unsigned int)a0;
- (char)charValueForProperty:(unsigned int)a0;
- (id)dataValueForProperty:(unsigned int)a0;
- (BOOL)hasValueForProperty:(unsigned int)a0;
- (id)initWithPersistentId:(long long)a0 entityClass:(Class)a1 library:(id)a2;
- (id)initWithPersistentId:(long long)a0 entityClass:(id)a1 properties:(id)a2 library:(id)a3;
- (id)initWithPersistentId:(long long)a0 entityClass:(Class)a1 propertyKeysToExport:(unsigned int *)a2 numKeys:(unsigned int)a3 library:(id)a4;
- (int)longValueForProperty:(unsigned int)a0;
- (long long)longlongValueForProperty:(unsigned int)a0;
- (unsigned int *)propertyKeysToExport:(unsigned int *)a0;
- (short)shortValueForProperty:(unsigned int)a0;

@end
