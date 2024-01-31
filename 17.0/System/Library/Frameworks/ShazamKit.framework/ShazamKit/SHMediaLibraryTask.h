@class NSError, NSUUID, NSString;
@protocol SHMediaLibrarySyncDelegate, SHRemoteMediaLibrary;

@interface SHMediaLibraryTask : NSObject <SHMediaLibrarySyncDelegate, SHRemoteMediaLibrary>

@property (retain, nonatomic) id<SHRemoteMediaLibrary> remoteLibrary;
@property (retain, nonatomic) NSError *syncError;
@property (readonly, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ syncCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SHMediaLibrarySyncDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_library:(id)a0 didChangeWithSnapshot:(id)a1;
- (void)_initWithRemoteLibrary:(id)a0;
- (void)_library:(id)a0 didProduceError:(id)a1 failedItemIdentifiers:(id)a2;
- (void)_libraryDidCompleteSync:(id)a0;
- (void)_libraryInfoWithCompletionHandler:(id /* block */)a0;
- (void)_libraryWillBeginSync:(id)a0;
- (void)_queryLibraryWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)_synchronizeSnapshot:(id)a0 startCondition:(id)a1;

@end
