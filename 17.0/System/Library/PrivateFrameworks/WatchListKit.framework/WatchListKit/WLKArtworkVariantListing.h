@class NSArray;

@interface WLKArtworkVariantListing : NSObject

@property (readonly, copy, nonatomic) NSArray *artworkVariants;

- (void).cxx_destruct;
- (id)initWithArtworkDictionary:(id)a0;
- (id)artworkVariantOfType:(long long)a0;
- (id)bestArtworkVariantOfType:(long long)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end
