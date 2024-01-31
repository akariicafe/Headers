@protocol FBProcessWatchdogProviding;

@interface FBWatchdogTransitionContext : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) BOOL runIndependently;
@property (nonatomic) long long watchdogBehavior;
@property (retain, nonatomic) id<FBProcessWatchdogProviding> watchdogProvider;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
