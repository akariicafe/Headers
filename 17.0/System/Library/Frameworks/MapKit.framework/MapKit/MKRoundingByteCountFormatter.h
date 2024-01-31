@interface MKRoundingByteCountFormatter : NSObject

+ (long long)roundByteCount:(long long)a0 toNearest:(long long)a1;
+ (id)stringFromByteCount:(long long)a0 roundedToNearest:(long long)a1;
+ (id)stringFromByteCountWithRoundingTo10MB:(long long)a0;
+ (id)stringFromByteCountWithRoundingTo1MB:(long long)a0;
+ (id)stringFromByteCountWithRoundingTo5MB:(long long)a0;

@end
