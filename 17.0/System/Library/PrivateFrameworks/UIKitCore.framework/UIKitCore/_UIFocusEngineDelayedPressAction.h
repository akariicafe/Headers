@class _UIFocusEventRecognizer;

@interface _UIFocusEngineDelayedPressAction : NSObject

@property (readonly, weak, nonatomic) _UIFocusEventRecognizer *sender;
@property (readonly, nonatomic) long long pressType;
@property (readonly, nonatomic) double timestamp;

+ (void)sendDelayedPressWithType:(long long)a0 timestamp:(double)a1 sender:(id)a2;

- (void).cxx_destruct;
- (void)_sendPressEvent;
- (id)_initWithPressType:(long long)a0 timestamp:(double)a1 sender:(id)a2;

@end
