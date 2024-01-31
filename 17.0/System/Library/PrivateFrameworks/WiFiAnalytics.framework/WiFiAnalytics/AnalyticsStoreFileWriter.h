@class AnalyticsStoreMOHandler;

@interface AnalyticsStoreFileWriter : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler;

- (id)stringifyRelationship:(id)a0 name:(id *)a1;
- (id)init;
- (id)batchedWriteAnalyticsStoreToFileWithBatchSize:(unsigned long long)a0 maxAge:(unsigned long long)a1;
- (id)writeArrayToJSONFile:(id)a0;
- (id)initWithAnalyticsStore:(id)a0;
- (id)batchedWriteAnalyticsStoreToFile:(unsigned long long)a0 maxAge:(unsigned long long)a1;
- (id)writeDictionaryToJSONFile:(id)a0 network:(id)a1;
- (id)analyticsStoreFileWriterDirectory;
- (id)analyticsStoreFileWriterFilePath;
- (id)writeDeploymentGraphToFile;
- (id)writeAnalyticsStoreToFile;
- (id)relationshipKeyPathsForPrefetching:(id)a0;
- (void).cxx_destruct;
- (void)stringifyManagedObjectsArray:(id)a0 titleString:(id *)a1 dataStringsArray:(id *)a2;
- (id)stringifyObjectWithPadding:(id)a0 padding:(id)a1 padToLength:(unsigned long long)a2;
- (id)stringifyValueArray:(id)a0;

@end
