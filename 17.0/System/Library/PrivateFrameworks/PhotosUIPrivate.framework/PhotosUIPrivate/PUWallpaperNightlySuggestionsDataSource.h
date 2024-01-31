@class NSDateFormatter, PHFetchResult, NSPointerArray, PHPhotoLibrary, NSDate;
@protocol PUWallpaperNightlySuggestionsPosterConfiguration;

@interface PUWallpaperNightlySuggestionsDataSource : PUPassiveContentDataSource {
    PHPhotoLibrary *_photoLibrary;
    NSDateFormatter *_dateFormatter;
    PHFetchResult *_fetchResult;
    NSPointerArray *_delegates;
}

@property (retain, nonatomic) id<PUWallpaperNightlySuggestionsPosterConfiguration> posterConfiguration;
@property (copy, nonatomic) NSDate *date;

- (unsigned short)subtype;
- (void)refresh;
- (id)fetchResult;
- (id)delegates;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)title;
- (id)objectAtIndexPath:(id)a0;
- (id)_dictionaryWithPosterConfiguration:(id)a0;

@end
