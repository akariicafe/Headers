@class WLKArtworkVariantListing;

@interface SearchUIWatchListIconImage : SearchUIImage

@property (readonly) WLKArtworkVariantListing *artwork;

- (void).cxx_destruct;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithArtwork:(id)a0;
- (int)defaultCornerRoundingStyle;

@end
