@interface SHClusterMetadataQuery : NSObject

+ (id)dateFormatter;
+ (long long)dataStoreTypeFromString:(id)a0;
+ (id)metadataFromDatabaseAtLocation:(id)a0 error:(id *)a1;
+ (id)stringFromStoreType:(long long)a0;
+ (BOOL)writeMetadata:(id)a0 toDatabaseAtLocation:(id)a1 error:(id *)a2;

@end
