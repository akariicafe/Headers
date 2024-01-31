@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SUMediaLibraryAdamIDCache : NSObject {
    NSMutableSet *_adamIDs;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _isPopulated;
}

+ (id)sharedCache;

- (id)init;
- (void)dealloc;
- (void)populateCache;
- (void)_populateCache;
- (void)_libraryChangedNotification:(id)a0;
- (void)getContainsAdamID:(id)a0 completionBlock:(id /* block */)a1;
- (void)getIntersectionWithSet:(id)a0 completionBlock:(id /* block */)a1;
- (void)getProperties:(id)a0 ofAdamIDs:(id)a1 withCompletionBlock:(id /* block */)a2;

@end
