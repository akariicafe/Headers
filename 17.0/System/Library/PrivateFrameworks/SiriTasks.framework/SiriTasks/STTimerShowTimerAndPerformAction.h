@class NSArray;

@interface STTimerShowTimerAndPerformAction : AFSiriRequest {
    unsigned long long _action;
}

@property (copy, nonatomic) NSArray *timers;
@property (copy, nonatomic) NSArray *templateActions;

+ (BOOL)supportsSecureCoding;

- (id)timer;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)action;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithTimer:(id)a0 action:(unsigned long long)a1;
- (id)_initWithTimers:(id)a0 action:(unsigned long long)a1;
- (id)_initWithTimers:(id)a0 templateActions:(id)a1 timerAction:(unsigned long long)a2;

@end
