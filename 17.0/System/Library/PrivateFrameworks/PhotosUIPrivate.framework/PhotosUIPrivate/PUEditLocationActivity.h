@class NSString;

@interface PUEditLocationActivity : PXActivity <PXPhotosDetailsLocationSearchDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (id)activityViewController;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)locationSearchDataSource:(id)a0 didSelectLocationSearchResult:(id)a1;
- (void)locationSearchDataSourceDidRemoveLocation:(id)a0;

@end
