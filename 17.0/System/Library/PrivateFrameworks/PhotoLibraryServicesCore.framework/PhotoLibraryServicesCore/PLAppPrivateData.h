@class NSURL, NSMutableDictionary, PLPhotoLibraryPathManager;

@interface PLAppPrivateData : NSObject

@property (retain) NSMutableDictionary *backingDictionary;
@property (retain) NSURL *libraryURL;
@property (retain) PLPhotoLibraryPathManager *pathManager;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)appPrivateDataForLibraryURL:(id)a0;

- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)valueForKeyPath:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (BOOL)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithLibraryURL:(id)a0;
- (id)valueForKey:(id)a0;
- (void)setValuesForKeysWithDictionary:(id)a0;
- (id)dictionaryWithValuesForKeys:(id)a0;
- (BOOL)setValue:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (BOOL)setValuesForKeysWithDictionary:(id)a0 error:(id *)a1;
- (id)_appPrivateDataFolderURL;
- (id)_dictionaryStorageURL;
- (void)_readFromFilesystem;
- (void)_recursiveCreateSubDictionariesIfMissing:(id)a0 index:(unsigned long long)a1 parentDictionary:(id)a2;
- (BOOL)_saveToFilesystemWithError:(id *)a0;

@end
