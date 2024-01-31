@class NSArray;

@interface PKLibraryPreview : NSObject

@property (copy, nonatomic) NSArray *shows;
@property (copy, nonatomic) NSArray *stations;

+ (id)_readFromPodcastsContainerWithDataSource:(id)a0;
+ (id)readFromPodcastsContainer;
+ (id)readPlistWithPath:(id)a0;

- (void).cxx_destruct;
- (id)initWithShows:(id)a0 stations:(id)a1;

@end
