@interface TSUTemporaryDocumentCacheManager : TSUTemporaryDirectoryManager

+ (id)baseDirectoryURL;
+ (id)sharedManager;

- (id)newDirectoryForDocumentUUID:(id)a0;

@end
