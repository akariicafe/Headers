@class NSDate, NSString, PXUpdater, PHPhotoLibrary, PHAssetCollection, NSObject, PXSharedLibraryStatusProvider, PHFetchResult;
@protocol OS_dispatch_queue;

@interface PXSharedLibrarySharingSuggestionsCountsManager : PXObservable <PXPhotoLibraryUIChangeObserver, PXPreferencesObserver, PXChangeObserver>

@property (readonly, nonatomic) PXSharedLibraryStatusProvider *libraryStatusProvider;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PHAssetCollection *sharingSuggestionsSmartAlbum;
@property (retain, nonatomic) PHFetchResult *mostRecentSuggestedAssetFetchResult;
@property (retain, nonatomic) PHFetchResult *mostRecentAssetFetchResult;
@property (retain, nonatomic) NSDate *mostRecentAddedDateEverSeen;
@property (retain, nonatomic) PHFetchResult *unreadSuggestedAssetsFetchResult;
@property (nonatomic) BOOL isFetchingUnreadSuggestedAssetsFetchResult;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isSuggestionsEnabled;
@property (nonatomic) BOOL hasAnySuggestions;
@property (nonatomic) BOOL needsParticipantSetup;
@property (nonatomic) BOOL shouldShowNotificationBanner;
@property (nonatomic) struct { unsigned long long photosCount; unsigned long long videosCount; unsigned long long othersCount; } detailedUnreadCounts;
@property (retain, nonatomic) NSDate *mostRecentUserSeenAddedDate;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mostRecentUserSeenAddedDateAccessor;
+ (id)lastSeenSuggestionsDateAccessor;
+ (id)lastBannerDismissDateAccessor;
+ (id)lastNotificationDateAccessor;

- (void)preferencesDidChange;
- (void)_updateMostRecentSeenSuggestedAssetAddedDate;
- (id)init;
- (void)_updateShouldShowBanner;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void)_updateDetailedUnreadCounts;
- (void)_invalidateMostRecentAddedDateEverSeen;
- (void)_handleUnreadSuggestedAssetsFetchResult:(id)a0 forDate:(id)a1;
- (void)_updateMostRecentAddedDateEverSeen;
- (void)clearStoredDates;
- (void)_handleLastNotificationDateDidChange:(id)a0;
- (void)_updateIsSuggestionsEnabled;
- (void)_fetchUnreadAssetsAfterDate;
- (void)_updateHasAnySuggestions;
- (void)_setNeedsUpdate;
- (void)_invalidateNeedsParticipantSetup;
- (void)_invalidateShouldShowBanner;
- (void)_invalidateDetailedUnreadCounts;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void)_invalidateHasAnySuggestions;
- (id)initWithPhotoLibrary:(id)a0;
- (BOOL)isAssetUnread:(id)a0;
- (void)_handleLastSeenSuggestionsDateDidChange:(id)a0;
- (void)_invalidateIsSuggestionsEnabled;
- (void).cxx_destruct;
- (void)_invalidateMostRecentSeenSuggestedAssetAddedDate;
- (void)_queue_fetchUnreadAssetsAfterDate:(id)a0;
- (void)_invalidateMostRecentSuggestedAssetFetchResult;
- (void)markAllSuggestionsAsRead;
- (void)markAnyNotificationsAsRead;
- (void)_updateMostRecentSuggestedAssetFetchResult;
- (void)_handleLastSeenAddedDateDidChange:(id)a0;
- (void)_updateNeedsParticipantSetup;
- (void)_handleLastBannerDismissDateDidChange:(id)a0;
- (id)prepareForPhotoLibraryChange:(id)a0;

@end
