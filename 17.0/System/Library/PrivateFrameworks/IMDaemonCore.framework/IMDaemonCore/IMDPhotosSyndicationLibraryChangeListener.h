@class NSString, PHFetchOptions, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface IMDPhotosSyndicationLibraryChangeListener : NSObject <PHPhotoLibraryChangeObserver>

@property (readonly, nonatomic) PHPhotoLibrary *syndicationLibrary;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *changeObservationQueue;
@property (readonly, nonatomic) PHFetchOptions *analysisFetchOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)photoLibraryDidChange:(id)a0;
- (void)startListening;
- (void).cxx_destruct;
- (void)stopListening;

@end
