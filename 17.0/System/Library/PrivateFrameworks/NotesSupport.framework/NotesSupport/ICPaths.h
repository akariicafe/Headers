@class NSURL, NSDictionary;

@interface ICPaths : NSObject

@property (class, copy, nonatomic) NSURL *applicationDocumentsURL;
@property (class, readonly, copy, nonatomic) NSURL *importDocumentsURL;
@property (class, readonly, copy, nonatomic) NSURL *defaultPreviewImageDirectoryURL;
@property (class, readonly, copy, nonatomic) NSURL *applicationDataContainerURL;
@property (class, readonly, copy, nonatomic) NSDictionary *attributesForGroupContainerDirectory;
@property (class, nonatomic) BOOL isReadOnlyPersistentStore;
@property (class, readonly, copy, nonatomic) NSURL *managedObjectModelURL;
@property (class, readonly, copy, nonatomic) NSURL *oldManagedObjectModelURL;
@property (class, readonly, copy, nonatomic) NSURL *persistentStoreURL;

+ (void)resetApplicationDocumentsURL;
+ (id)URLForGroupContainerWithIdentifier:(id)a0;

@end
