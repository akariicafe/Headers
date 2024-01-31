@interface HDDataCollectionObserverState : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isInBackground;
@property (readonly, nonatomic) BOOL hasRunningWorkout;

+ (id)dataCollectionObserverStateInBackground:(BOOL)a0 hasRunningWorkout:(BOOL)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
