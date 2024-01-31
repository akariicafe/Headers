@class PHFetchResult, NSString, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PXPeopleProgressDataSource : NSObject <PXPhotoLibraryUIChangeObserver>

@property (nonatomic) BOOL isReadyForAnalysis;
@property (nonatomic) long long allowedAssetCount;
@property (nonatomic) long long processedToLatestVersionAssetCount;
@property (nonatomic) long long processedToAnyVersionAssetCount;
@property (nonatomic) long long pendingToLatestVersionAssetCount;
@property (nonatomic) long long pendingToAnyVersionAssetCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *scanningProgressQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *personPromoterQueue;
@property (retain, nonatomic) PHFetchResult *homeResult;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } progressLock;
@property (nonatomic) BOOL countCacheValid;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL hasHomePeople;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { long long x0; long long x1; long long x2; double x3; double x4; })_invalidProgressReport;
+ (long long)pendingCountForAllowedCount:(long long)a0 processedCount:(long long)a1;

- (void)dealloc;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)appWillEnterForeground;
- (id)_fetchPeople;
- (void)_logFaceCounts;
- (void)asyncUpdateProgressWithReportBlock:(id /* block */)a0;
- (BOOL)isPhotoLibraryReadyForAnalysis;
- (void)loadQueryData;
- (struct { long long x0; long long x1; long long x2; double x3; double x4; })progressReportForLibrary:(id)a0;
- (void)requestPersonPromoterStatusWithCompletionBlock:(id /* block */)a0;
- (void)syncUpdateProgressWithReportBlock:(id /* block */)a0;
- (void)updateProgressFromIsReadyForAnalysis:(BOOL)a0 progressReport:(struct { long long x0; long long x1; long long x2; double x3; double x4; })a1;
- (void)updateProgressIfNeededWithReportBlock:(id /* block */)a0;

@end
