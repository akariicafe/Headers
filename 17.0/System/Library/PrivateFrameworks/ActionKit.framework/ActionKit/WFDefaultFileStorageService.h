@class NSProgress, NSString, INAppDescriptor;

@interface WFDefaultFileStorageService : NSObject <WFFileStorageService>

@property (weak, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) Class objectRepresentationClass;
@property (readonly, nonatomic) Class accessResourceClass;
@property (readonly, nonatomic) NSString *storageLocationPrefix;
@property (readonly, nonatomic) BOOL hasPublicURLs;
@property (readonly, nonatomic) BOOL supportsJumpingToSubdirectoryInUI;
@property (readonly, nonatomic) INAppDescriptor *associatedAppDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerName;
+ (id)serviceName;
+ (Class)resultItemClass;
+ (id)directoryTraversalError;

- (void).cxx_destruct;
- (void)retrieveFilesAtPath:(id)a0 options:(unsigned long long)a1 progress:(id)a2 completionHandler:(id /* block */)a3;
- (id)saveFiles:(id)a0 withManagedLevel:(unsigned long long)a1 toPath:(id)a2 options:(unsigned long long)a3 progress:(id)a4 completionHandler:(id /* block */)a5;
- (void)searchFiles:(id)a0 inPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)_moveFile:(id)a0 replaceExisting:(BOOL)a1 withManagedLevel:(unsigned long long)a2 toDestination:(id)a3 progress:(id)a4 completionHandler:(id /* block */)a5;
- (void)_retrieveFilesForAppendingAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)_saveFiles:(id)a0 toURL:(id)a1 isDestinationKnownDirectory:(BOOL)a2 options:(unsigned long long)a3 progress:(id)a4 completionHandler:(id /* block */)a5;
- (void)appendText:(id)a0 toDirectory:(id)a1 subpath:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)appendText:(id)a0 toPath:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)createFolderAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)createFolderAtPath:(id)a0 inDirectory:(id)a1 completionHandler:(id /* block */)a2;
- (void)createFolderAtPath:(id)a0 parentDirectoryItem:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteFiles:(id)a0 deleteImmediately:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)deleteItems:(id)a0 deleteImmediately:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)fileURLFromDirectory:(id)a0 path:(id)a1;
- (void)getSharingURLsForFiles:(id)a0 usePublicURLs:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)moveFile:(id)a0 destination:(id)a1 withManagedLevel:(unsigned long long)a2 progress:(id)a3 completionHandler:(id /* block */)a4;
- (void)moveFile:(id)a0 replaceExisting:(BOOL)a1 withManagedLevel:(unsigned long long)a2 toDirectory:(id)a3 progress:(id)a4 completionHandler:(id /* block */)a5;
- (void)moveItem:(id)a0 replaceExisting:(BOOL)a1 withManagedLevel:(unsigned long long)a2 toDirectory:(id)a3 progress:(id)a4 completionHandler:(id /* block */)a5;
- (void)recursivelyCreateFolderAtPathWithComponents:(id)a0 withParentDirectoryItem:(id)a1 completionHandler:(id /* block */)a2;
- (void)renameItem:(id)a0 name:(id)a1 withManagedLevel:(unsigned long long)a2 progress:(id)a3 completionHandler:(id /* block */)a4;
- (void)retrieveFileAtPath:(id)a0 fromDirectory:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)retrieveFilesForAppendingAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (id)saveFiles:(id)a0 withManagedLevel:(unsigned long long)a1 toDirectory:(id)a2 subpath:(id)a3 options:(unsigned long long)a4 progress:(id)a5 completionHandler:(id /* block */)a6;

@end
