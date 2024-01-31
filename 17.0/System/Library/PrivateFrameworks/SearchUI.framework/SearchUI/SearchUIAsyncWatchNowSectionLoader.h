@class SFWatchListItem, NSString;

@interface SearchUIAsyncWatchNowSectionLoader : SearchUIAsyncSectionLoader

@property (readonly) SFWatchListItem *watchListItem;
@property (readonly) NSString *cardSectionId;

+ (BOOL)supportsSectionModel:(id)a0;

- (void).cxx_destruct;
- (id)cacheIdentifier;
- (void)fetchCardSectionsWithCompletionHandler:(id /* block */)a0;
- (id)initWithSectionModel:(id)a0 result:(id)a1 queryId:(unsigned long long)a2;
- (id)placeholderCardSections;

@end
