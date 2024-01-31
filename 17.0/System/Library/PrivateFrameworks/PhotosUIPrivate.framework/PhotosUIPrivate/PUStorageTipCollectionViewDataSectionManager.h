@class NSMutableDictionary, NSString, PHPhotoLibrary, NSObject, PUStorageTipCollectionViewDataSection;
@protocol OS_dispatch_queue;

@interface PUStorageTipCollectionViewDataSectionManager : PXDataSectionManager <PXPhotoLibraryUIChangeObserver>

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *tipQueue;
@property (readonly, nonatomic) NSMutableDictionary *fetchResults;
@property (retain, nonatomic) PUStorageTipCollectionViewDataSection *pendingDataSection;
@property (readonly, nonatomic) PUStorageTipCollectionViewDataSection *dataSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)createDataSection;
- (void)tipQueue_populateInitialFetches;
- (void)tipQueue_createPendingDataSection;
- (id)tipQueue_fetchCountsDictionary;
- (id)tipQueue_fetchSizesDictionary;

@end
