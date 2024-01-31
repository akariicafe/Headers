@class NSString, PXCPLUIStatusProvider;
@protocol PXDisplayAssetFetchResult, PXDisplayMomentShare, PXCMMInvitation;

@interface PXMomentShareStatus : PXObservable <PXPhotoLibraryUIChangeObserver, PXMutableMomentShareStatus> {
    PXCPLUIStatusProvider *_statusProvider;
}

@property (readonly, nonatomic) id<PXDisplayMomentShare> momentShare;
@property (readonly, nonatomic) id<PXCMMInvitation> invitation;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> copyingAssetsFetchResult;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> copiedAssetsFetchResult;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> allAssetsFetchResult;
@property (readonly, nonatomic) PXCPLUIStatusProvider *statusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setMomentShare:(id)a0;
- (id)initWithMomentShare:(id)a0;
- (id)_createStatusProvider;
- (void)setAllAssetsFetchResult:(id)a0;
- (void)setCopiedAssetsFetchResult:(id)a0;
- (void)setCopyingAssetsFetchResult:(id)a0;

@end
