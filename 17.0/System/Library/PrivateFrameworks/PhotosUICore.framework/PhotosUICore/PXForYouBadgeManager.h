@class PHFetchResult, NSString, NSDate, PXUbiquitousKeyValueStoreValueAccessor, PHPhotoLibrary;

@interface PXForYouBadgeManager : PXObservable <PXMutableForYouBadgeManager, PXPhotoLibraryUIChangeObserver>

@property (class, readonly, nonatomic) PXUbiquitousKeyValueStoreValueAccessor *lastSeenBadgeDateAccessor;
@property (class, retain, nonatomic) NSDate *lastSeenBadgeDate;

@property (retain, nonatomic) PHFetchResult *memories;
@property (nonatomic) unsigned long long unreadSharedAlbumCount;
@property (nonatomic) unsigned long long unreadMemoriesCount;
@property (readonly, nonatomic) unsigned long long unreadBadgeCount;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (void)dealloc;
- (void)_updateUnreadSharedAlbumsCount;
- (id)mutableChangeObject;
- (void)_stopListeningForChanges;
- (id)initWithPhotoLibrary:(id)a0;
- (void)startListeningForChanges;
- (void).cxx_destruct;
- (void)_didFinishPostingNotifications:(id)a0;
- (void)setUnreadBadgeCount:(unsigned long long)a0;
- (void)_updateUnreadBadgeCount;

@end
