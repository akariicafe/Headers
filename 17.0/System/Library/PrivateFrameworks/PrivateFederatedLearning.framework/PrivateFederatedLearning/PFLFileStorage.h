@interface PFLFileStorage : NSObject

+ (void)initialize;
+ (BOOL)removeFileAtPath:(id)a0;
+ (id)_fileManager;
+ (BOOL)fileExistsAtPath:(id)a0;
+ (id)_modelFileName:(id)a0;
+ (id)uploadResultsRetrieveForTaskId:(id)a0;
+ (id)_compiledModelFileName:(id)a0;
+ (id)_listFilesAtPath:(id)a0;
+ (id)_localCacheModelsPath;
+ (id)_localCacheSavedStatesPath;
+ (id)_localCacheUploadResultsPath;
+ (id)_modelsFolder;
+ (id)_savedStateFileName:(id)a0;
+ (id)_savedStatesFolder;
+ (id)_uploadResultsFileName:(id)a0;
+ (id)_uploadResultsFolder;
+ (void)cleanUnusedResourcesExceptActiveModels:(id)a0 activeTasks:(id)a1;
+ (BOOL)compiledModelExistsForModelId:(id)a0;
+ (id)compiledModelMoveToLocalCache:(id)a0 from:(id)a1;
+ (BOOL)compiledModelRemoveForModelId:(id)a0;
+ (id)compiledModelRetrieveForModelId:(id)a0;
+ (BOOL)modelExistsForModelId:(id)a0;
+ (id)modelMoveToLocalCache:(id)a0 from:(id)a1;
+ (id)modelRetrieveForModelId:(id)a0;
+ (BOOL)savedStateExistsForTaskId:(id)a0;
+ (BOOL)savedStateRemoveForTaskId:(id)a0;
+ (id)savedStateRetrieveForTaskId:(id)a0;
+ (id)savedStateSave:(id)a0 forTaskId:(id)a1;
+ (BOOL)uploadResultsExistsForTaskId:(id)a0;
+ (BOOL)uploadResultsRemoveForTaskId:(id)a0;
+ (id)uploadResultsSave:(id)a0 forTaskId:(id)a1;

@end
