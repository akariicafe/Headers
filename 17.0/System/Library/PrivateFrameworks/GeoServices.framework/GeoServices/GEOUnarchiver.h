@interface GEOUnarchiver : NSObject

+ (BOOL)decompressBZip2DataAtURL:(id)a0 toURL:(id)a1 log:(id)a2 error:(id *)a3;
+ (BOOL)decompressDataAtURL:(id)a0 toURL:(id)a1 log:(id)a2 error:(id *)a3;
+ (BOOL)decompressGZipDataAtURL:(id)a0 toURL:(id)a1 log:(id)a2 error:(id *)a3;
+ (id)getContentsOfArchiveAtURL:(id)a0 log:(id)a1 error:(id *)a2;
+ (BOOL)unarchiveDataAtURL:(id)a0 log:(id)a1 inMemoryDataSizeThreshold:(unsigned long long)a2 fileVisitor:(id /* block */)a3 error:(id *)a4;
+ (BOOL)unarchiveDataAtURL:(id)a0 toURL:(id)a1 log:(id)a2 error:(id *)a3;

@end
