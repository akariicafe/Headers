@class NSArray, NSMutableSet, CLKDevice;

@interface NTKVideoListingFactory : NSObject {
    CLKDevice *_device;
    NSArray *_butterflyListings;
    NSArray *_jellyfishListings;
    NSArray *_flowerListings;
    NSMutableSet *_assetListings;
}

+ (id)sharedInstanceForDevice:(id)a0;

- (void).cxx_destruct;
- (id)_initLibraryForDevice:(id)a0;
- (id)_listingWithTheme:(unsigned long long)a0 variant:(long long)a1 tag:(unsigned long long)a2;
- (id)_listingsWithTheme:(unsigned long long)a0;
- (id)_listingsWithTheme:(unsigned long long)a0 notMatchingVariant:(long long)a1;
- (id)_listingsWithTheme:(unsigned long long)a0 notMatchingVariant:(long long)a1 matchingTag:(unsigned long long)a2;
- (id)_listingsWithTheme:(unsigned long long)a0 variant:(long long)a1;
- (id)_listingsWithTheme:(unsigned long long)a0 variant:(long long)a1 tag:(unsigned long long)a2 notMatchingClip:(long long)a3;
- (id)anyListingWithTheme:(unsigned long long)a0 notMatchingVariant:(long long)a1 matchingTag:(unsigned long long)a2;
- (id)anyListingWithTheme:(unsigned long long)a0 variant:(long long)a1 tag:(unsigned long long)a2;
- (id)anyListingWithTheme:(unsigned long long)a0 variant:(long long)a1 tag:(unsigned long long)a2 notMatchingClip:(long long)a3;
- (long long)behaviorForTheme:(unsigned long long)a0;
- (id)defaultListingWithTheme:(unsigned long long)a0;
- (void)discardAssets;
- (id)posterImageWithTheme:(unsigned long long)a0;
- (void)setVideoListingHasAssets:(id)a0;

@end
