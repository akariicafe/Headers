@class UIImage, NSMutableDictionary;

@interface SKUIRatingStarsCache : NSObject {
    NSMutableDictionary *_cachedImages;
    UIImage *_emptyStarImage;
    UIImage *_filledStarImage;
    UIImage *_halfStarImage;
}

+ (id)cacheWithProperties:(long long)a0;

- (void).cxx_destruct;
- (id)initWithProperties:(long long)a0;
- (id)ratingStarsImageForRating:(double)a0;

@end
