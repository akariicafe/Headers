@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IMMomentShareCache : NSObject <PHPhotoLibraryChangeObserver> {
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_libraryRegistrationQueue;
    BOOL _hasRegisteredForLibraryChanges;
}

@property (class, readonly) IMMomentShareCache *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)momentShareForURLString:(id)a0 completionHandler:(id /* block */)a1;
- (id)momentShareForURLString:(id)a0 error:(id *)a1;
- (id)_momentShareForURLString:(id)a0 error:(id *)a1;
- (void)_ensureLibraryRegistration;
- (void)_processFetchedMomentShare:(id)a0 forURLString:(id)a1 error:(id)a2 completionHandlers:(id)a3;

@end
