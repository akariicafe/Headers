@class NSString;

@interface AMDModelDownloader : NSObject <NSURLSessionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cleanupDiskForModelDirectory:(id)a0 withSavedVersionURL:(id)a1;
+ (void)deleteColdstartBinaryFromStorage:(id)a0 forModel:(id)a1 isVersionChange:(BOOL)a2 error:(id *)a3;
+ (void)deleteModelFromStorage:(id)a0 isVersionChange:(BOOL)a1 error:(id *)a2;
+ (id)ensureNewVersionDirURLForModel:(id)a0 withVersion:(unsigned long long)a1 andCreationTime:(long long)a2;
+ (id)parseModel:(id)a0 atLocation:(id)a1 withVersion:(id)a2 withStorefrontId:(id)a3 error:(id *)a4;
+ (id)parseModelWithId:(id)a0 withStorefrontId:(id)a1 fromArchive:(id)a2 withBaseRecoModel:(id)a3;
+ (id)performModelCleanup;
+ (id)processColdstartBinaryDownload:(id)a0 error:(id *)a1;
+ (id)processModelDownload:(id)a0 withStorefrontID:(id)a1 error:(id *)a2;
+ (id)removeOldColdstartBinaries:(id)a0;
+ (id)removeOldModels:(id)a0;
+ (id)saveMapFile:(id)a0 ofSize:(int)a1 isCompressed:(BOOL)a2 inDirURL:(id)a3 fromBuffer:(id)a4;
+ (void)saveMinimalContentToLogicalMapForModelId:(id)a0 fromMapData:(id)a1;
+ (id)unzipAndValidateCompiledModelBundle:(id)a0 atLocation:(id)a1 withVersion:(id)a2 error:(id *)a3;
+ (id)unzipDownloadedModelBundle:(id)a0 atLocation:(id)a1 withVersion:(id)a2 error:(id *)a3;
+ (id)unzipModel:(id)a0 atLocation:(id)a1 withVersion:(id)a2 error:(id *)a3;
+ (void)unzipModelFile:(id)a0 copyToDestination:(id)a1 error:(id *)a2;
+ (id)updateAppTabInfoForWorkflows:(id)a0;
+ (void)validateDownloadAtLocation:(id)a0 withModelId:(id)a1 andVersion:(id)a2 error:(id *)a3;

- (id)downloadModel:(id)a0 forVersion:(id)a1 usingUrl:(id)a2 withStorefrontId:(id)a3 andSkipDecision:(BOOL *)a4 error:(id *)a5;
- (int)getVersionForModel:(id)a0;
- (void)printJson:(id)a0;

@end
