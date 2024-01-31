@class NSString, PHFetchResult, NSPointerArray, NSMutableArray;

@interface PUPassiveContentDataSource : NSObject <PHPhotoLibraryChangeObserver>

@property (retain, nonatomic) NSMutableArray *contextDataSources;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic) NSPointerArray *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ambientDataSource;
+ (id)wallpaperDataSource;
+ (id)wallpaperSubtypeTitleFromSubtype:(unsigned short)a0;

- (unsigned long long)count;
- (void)photoLibraryDidChange:(id)a0;
- (id)initWithFetchResult:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)sectionCount;
- (id)objectAtIndexPath:(id)a0;
- (id)titleForSection:(unsigned long long)a0;
- (unsigned long long)countInSection:(unsigned long long)a0;
- (void)_setupContextDataSourcesIfNeeded;
- (id)indexPathForSuggestionUUID:(id)a0;
- (id)initForAmbientFeatured;
- (id)initForSettlingEffect;
- (id)initWithSuggestionSubtype:(unsigned short)a0;

@end
