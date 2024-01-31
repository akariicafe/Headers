@class PXFloatingCardAnimation;

@interface PXFloatingCardAnimationManager : NSObject {
    PXFloatingCardAnimation *_heightAnimation;
    unsigned long long _heightAnimationPushCount;
}

@property (readonly, nonatomic) PXFloatingCardAnimation *heightAnimation;

- (void).cxx_destruct;
- (id)defaultHeightAnimation;
- (void)popHeightAnimation;
- (void)pushHeightAnimation:(id)a0;

@end
