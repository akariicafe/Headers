@interface SNFileUtils : NSObject

+ (id)contentsOfDirectoryAtURL:(id)a0 error:(id *)a1;
+ (id)temporaryDirectoryURL;
+ (BOOL)addPurgeablePropertyToURL:(id)a0 error:(id *)a1;
+ (id)expandURLsForRelativePaths:(id)a0 fromURL:(id)a1;
+ (id)fileAttributesForPath:(id)a0 attributeKey:(id)a1 error:(id *)a2;
+ (id)fileAttributesForPath:(id)a0 error:(id *)a1;
+ (id)fileAttributesForURL:(id)a0 attributeKey:(id)a1 error:(id *)a2;
+ (id)fileAttributesForURL:(id)a0 error:(id *)a1;
+ (id)fileCreationDateForPath:(id)a0 error:(id *)a1;
+ (id)fileCreationDateForURL:(id)a0 error:(id *)a1;
+ (id)fileResourceIdentifierForPath:(id)a0 error:(id *)a1;
+ (id)fileResourceIdentifierForURL:(id)a0 error:(id *)a1;
+ (id)fileSizeBytesForPath:(id)a0 error:(id *)a1;
+ (id)fileSizeBytesForURL:(id)a0 error:(id *)a1;
+ (id)prefixLastOfPathComponents:(id)a0 withString:(id)a1 error:(id *)a2;
+ (id)prefixLastOfPathComponentsForURL:(id)a0 withString:(id)a1 error:(id *)a2;
+ (id)readJSONFromURL:(id)a0 jsonReadingOptions:(unsigned long long)a1 error:(id *)a2;
+ (id)resourceURLAtPath:(id)a0 inBundleContainingClass:(Class)a1;
+ (id)resourcesURLForBundleContainingClass:(Class)a0;
+ (id)toSetCollectFileResourceIdentifiersForURLs:(id)a0 error:(id *)a1;
+ (id)urlInTemporaryDirectoryToPath:(id)a0;
+ (BOOL)validateURLIsFileURL:(id)a0 error:(id *)a1;
+ (BOOL)writeJSONToURL:(id)a0 object:(id)a1 jsonWritingOptions:(unsigned long long)a2 createIntermediateDirectories:(BOOL)a3 overwrite:(BOOL)a4 error:(id *)a5;
+ (BOOL)writeToFileAtURL:(id)a0 createIntermediateDirectories:(BOOL)a1 overwrite:(BOOL)a2 data:(id)a3 error:(id *)a4;

- (id)init;

@end
