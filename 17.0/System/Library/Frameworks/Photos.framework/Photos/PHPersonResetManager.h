@class PHPhotoLibrary, PLProgressFollower;

@interface PHPersonResetManager : NSObject {
    PHPhotoLibrary *_library;
    PLProgressFollower *_progressFollower;
}

@property (copy) id /* block */ progressHandler;

- (id)resetPersonsWithCompletionHandler:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;

@end
