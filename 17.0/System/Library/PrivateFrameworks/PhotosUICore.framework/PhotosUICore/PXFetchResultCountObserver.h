@class PHFetchResult, NSString, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue, PXFetchResultCountObserverDelegate;

@interface PXFetchResultCountObserver : NSObject <PHPhotoLibraryChangeObserver> {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (nonatomic) long long fetchResultCount;
@property (weak, nonatomic) id<PXFetchResultCountObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_serialQueue_acquireFetchResultFromBlock:(id /* block */)a0;
- (id)initWithQOSClass:(unsigned int)a0 photoLibrary:(id)a1 fetchResultBlock:(id /* block */)a2;

@end
