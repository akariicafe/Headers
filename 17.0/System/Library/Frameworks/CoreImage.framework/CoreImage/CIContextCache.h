@interface CIContextCache : NSObject

@property (class, readonly) long long peakNonVolatileSize;
@property (class, readonly) long long currentNonVolatileSize;
@property (class, readonly) long long countAllocated;
@property (class, readonly) float fillTime;

+ (void)resetStatistics;
+ (id)peakNonVolatileList;

@end
