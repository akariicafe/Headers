@interface _TVContentRatingSystemUtilities : NSObject

+ (BOOL)_isRatingSystemForMovies:(long long)a0;
+ (BOOL)_isRatingSystemForMusic:(long long)a0;
+ (BOOL)_isRatingSystemForTV:(long long)a0;
+ (id)stringForRatingSystem:(long long)a0;
+ (id)_cleanedRatingSystem:(id)a0;
+ (id)_ratingSystemLookUpDictionary;
+ (id)_ratingSystemStringLookUpDictionary;
+ (long long)ratingSystemForString:(id)a0;
+ (long long)ratingSystemKindForRatingSystem:(long long)a0;

@end
