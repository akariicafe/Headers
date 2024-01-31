@class NSString, NSArray, PHFetchResult, NSHashTable, PHPhotoLibrary, NSObject, PHUserFeedbackCalculator;
@protocol OS_dispatch_queue, OS_os_log;

@interface PXPassiveContentPeoplePickerDataSourceBase : NSObject <PHPhotoLibraryChangeObserver>

@property (readonly, nonatomic) NSHashTable *changeObservers;
@property (retain) NSArray *vipPersons;
@property (retain) NSArray *nonVIPPersons;
@property (retain, nonatomic) PHFetchResult *peopleSuggestions;
@property (retain, nonatomic) PHFetchResult *vipPersonsFetchResult;
@property (retain, nonatomic) PHFetchResult *nonVIPPersonsFetchResult;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) PHUserFeedbackCalculator *userFeedbackCalculator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addChangeObserver:(id)a0;
- (void)removeChangeObserver:(id)a0;
- (void)photoLibraryDidChange:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)_fetchPeople;
- (void)_fetchPeopleWallpaperSuggestions;
- (void)computeAndCachePersonsWithPersonLocalIdentifierWithNegativeFeedback:(id)a0;
- (void)notifyChanges;
- (id)peopleSuggestionSubtypes;
- (void)startBackgroundFetch;

@end
