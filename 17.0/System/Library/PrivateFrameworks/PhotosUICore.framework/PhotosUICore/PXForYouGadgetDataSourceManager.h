@class PXSharedLibraryStatusProvider, NSDictionary, NSArray, PXLibraryFilterState, PHPhotoLibrary, NSDate;

@interface PXForYouGadgetDataSourceManager : PXGadgetDataSourceManager {
    PHPhotoLibrary *_photoLibrary;
    NSArray *_cachedForYouGadgetProviders;
    NSDictionary *_cachedUserRelevanceDateForContentIdentifiers;
    NSDate *_dateUsedForCurrentGadgetOrder;
}

@property (readonly, nonatomic) NSDictionary *userRelevanceDateForContentIdentifiers;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;

- (id)init;
- (void).cxx_destruct;
- (void)removeCachedProviders;
- (id)gadgetProviders;
- (void)_calendarDayChanged;
- (BOOL)_canShowSurveyQuestionsGadget;
- (void)_invalidateCachedGadgetProviders;
- (void)_invalidateCachedUserRelevanceDates;
- (void)_pretendDateChanged;
- (id /* block */)gadgetProviderSortComparator;
- (id /* block */)gadgetSortComparator;
- (id)initWithSharedLibraryStatusProvider:(id)a0 libraryFilterState:(id)a1;
- (void)test_pretendItsTommorow;

@end
