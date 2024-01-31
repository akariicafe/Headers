@class PLPhotoLibraryBundle, PLSyndicationIngestMutex, PLLazyObject;

@interface PLDatabaseContext : NSObject {
    PLPhotoLibraryBundle *_libraryBundle;
    PLLazyObject *_lazyMomentLibrary;
}

@property (readonly) PLSyndicationIngestMutex *syndicationIngestMutex;
@property (readonly) long long wellKnownPhotoLibraryIdentifier;

+ (id)newShortLivedLibraryWithName:(const char *)a0 libraryRole:(unsigned long long)a1 bundle:(id)a2;
+ (id)newShortLivedLibraryWithName:(const char *)a0 bundle:(id)a1;

- (void)performTransactionSync:(id /* block */)a0 withName:(const char *)a1;
- (id)newShortLivedLibraryForHistoryPersistenceReadingWithName:(const char *)a0;
- (void)performTransaction:(id /* block */)a0 withName:(const char *)a1;
- (void)dealloc;
- (id)newShortLivedMacOpenClientLibraryWithName:(const char *)a0;
- (id)newMomentLibrary;
- (void)performSync:(id /* block */)a0 withName:(const char *)a1;
- (void)invalidate;
- (id)newShortLivedCplLibraryWithNameSuffix:(const char *)a0;
- (id)newShortLivedLibraryWithName:(const char *)a0;
- (id)initWithLibraryBundle:(id)a0;
- (void).cxx_destruct;
- (id)momentLibrary;
- (id)newShortLivedLibraryWithName:(const char *)a0 libraryRole:(unsigned long long)a1;
- (void)perform:(id /* block */)a0 withName:(const char *)a1;

@end
