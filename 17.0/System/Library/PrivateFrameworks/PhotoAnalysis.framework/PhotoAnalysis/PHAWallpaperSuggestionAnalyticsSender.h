@class CLSCurationContext, PGManagerWorkingContext, PGWallpaperLibraryAnalysisSummary, PGWallpaperSuggestionInformer, NSSet, PHPhotoLibrary, NSObject, CPAnalytics;
@protocol OS_os_log;

@interface PHAWallpaperSuggestionAnalyticsSender : NSObject {
    PGManagerWorkingContext *_workingContext;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
    CPAnalytics *_analytics;
    PGWallpaperLibraryAnalysisSummary *_libraryAnalysisSummary;
    PGWallpaperSuggestionInformer *_informer;
    NSSet *_topPeopleLocalIdentifiers;
    NSSet *_shufflePeopleLocalIdentifiers;
    long long _eligiblePetsCount;
    CLSCurationContext *_curationContext;
}

+ (struct { int x0; int x1; int x2; int x3; })ambientSuggestionStatisticsFromSuggestions:(id)a0;
+ (id)analyticsPayloadForLibraryAnalysisSummary:(id)a0;
+ (struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; })wallpaperSuggestionStatisticsFromSuggestions:(id)a0;

- (void).cxx_destruct;
- (long long)shufflePickerVisiblePeopleCount;
- (id)ambientGenerationSummaryWithGeneratedSuggestionLocalIdentifiers:(id)a0;
- (id)ambientPeoplePetSummary;
- (id)existingAmbientSuggestionSummary;
- (id)existingWallpaperSuggestionSummary;
- (id)initWithGraphManager:(id)a0 libraryAnalysisSummary:(id)a1;
- (void)sendAmbientGenerationSummaryEventWithGeneratedSuggestionLocalIdentifiers:(id)a0;
- (void)sendRefreshSummaryEventWithPosterConfiguration:(id)a0;
- (void)sendWallpaperGenerationSummaryEventWithGeneratedSuggestionLocalIdentifiers:(id)a0;
- (id)suggestionFetchOptionsWithLocalIdentifiers:(id)a0;
- (id)wallpaperGenerationSummaryWithGeneratedSuggestionLocalIdentifiers:(id)a0;
- (id)wallpaperPeoplePetSummary;

@end
