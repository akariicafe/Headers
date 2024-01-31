@class NSMutableDictionary;

@interface PHAPhotoLibraryList : NSObject

@property (retain) NSMutableDictionary *photoLibrariesByPath;
@property (readonly) unsigned long long count;

- (id)init;
- (void)removeAllPhotoLibraries;
- (void)saveToPersistentStorage;
- (void)addPhotoLibraryAtURL:(id)a0;
- (void).cxx_destruct;
- (void)enumeratePhotoLibrariesWithBlock:(id /* block */)a0;
- (void)removePhotoLibraryAtURL:(id)a0;

@end
