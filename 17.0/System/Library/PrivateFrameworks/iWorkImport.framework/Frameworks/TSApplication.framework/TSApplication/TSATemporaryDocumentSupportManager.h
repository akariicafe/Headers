@interface TSATemporaryDocumentSupportManager : TSUTemporaryDirectoryManager

+ (id)baseDirectoryURL;
+ (id)sharedManager;
+ (Class)managedTemporaryDirectoryClass;

- (id)newDirectoryForDocumentUUID:(id)a0;

@end
