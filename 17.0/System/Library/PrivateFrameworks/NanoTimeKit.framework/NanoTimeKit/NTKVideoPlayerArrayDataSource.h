@class NSArray;

@interface NTKVideoPlayerArrayDataSource : NTKVideoPlayerDataSource {
    long long _currentListingIndex;
    NSArray *_listings;
}

@property (nonatomic) unsigned long long order;

+ (id)dataSourceForDevice:(id)a0 withFilenames:(id)a1;
+ (id)dataSourceForDevice:(id)a0 withPosterImage:(id)a1 andFilenames:(id)a2;
+ (id)dataSourceForDevice:(id)a0 withPosterImage:(id)a1 andListings:(id)a2;
+ (id)dataSourceForDevice:(id)a0 withPosterImage:(id)a1 order:(unsigned long long)a2 andFilenames:(id)a3;
+ (id)dataSourceForDevice:(id)a0 withPosterImage:(id)a1 order:(unsigned long long)a2 andListings:(id)a3;
+ (id)dataSourceForDevice:(id)a0 withPosterImage:(id)a1 order:(unsigned long long)a2 endBehavior:(unsigned long long)a3 andFilenames:(id)a4;

- (void).cxx_destruct;
- (void)advanceToNextListing:(unsigned long long)a0;
- (id)currentListing;
- (id)initForDevice:(id)a0 withListings:(id)a1;

@end
