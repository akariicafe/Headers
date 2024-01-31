@class PHPhotoLibrary;

@interface PGPhotoKitMemoryTrigger : PGMemoryTrigger

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)a0 photoLibrary:(id)a1;

@end
