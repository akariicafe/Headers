@class UIStatusBarStyleRequest;

@interface SBAppStatusBarTransitionInfo : NSObject

@property (copy, nonatomic) UIStatusBarStyleRequest *startStyleRequest;
@property (nonatomic) long long startOrientation;
@property (copy, nonatomic) UIStatusBarStyleRequest *endStyleRequest;
@property (nonatomic) long long endOrientation;
@property (nonatomic) int transition;
@property (nonatomic) BOOL zoomOther;

- (id)description;
- (void).cxx_destruct;

@end
