@class NSMutableSet, NSMutableDictionary;

@interface HDSessionAssertionGroup : NSObject {
    NSMutableSet *_allAssertions;
    NSMutableDictionary *_assertionsForState;
}

@property (readonly, nonatomic) long long state;

- (id)init;
- (void)transitionToState:(long long)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)setupState:(long long)a0 withAssertions:(id)a1;

@end
