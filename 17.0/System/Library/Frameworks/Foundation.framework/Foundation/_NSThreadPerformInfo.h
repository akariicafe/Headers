@class NSArray, NSCondition;

@interface _NSThreadPerformInfo : NSObject {
    id _target;
    SEL _selector;
    id _argument;
    NSArray *_modes;
    NSCondition *_waiter;
    int _state;
}

- (void)signal:(int)a0;
- (int)wait;
- (void)dealloc;

@end
