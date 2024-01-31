@class NSURL, GDVUVisualUnderstandingService, NSObject;
@protocol OS_dispatch_queue;

@interface MADVUGalleryReader : NSObject {
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSURL *_storageURL;
    GDVUVisualUnderstandingService *_vuService;
}

+ (id)sharedGalleryWithPhotoLibrary:(id)a0;

- (void)flush;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)queryKeyObservationsFor:(long long)a0 limit:(long long)a1 offset:(long long)a2;

@end
